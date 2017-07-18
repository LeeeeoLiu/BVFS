#pragma once
#include <stdio.h>
#include "filesystem.h"
#include <iostream>
#include <fstream>
#include "fstream"
#include <stdlib.h>
#include <vector>
#include "stacki.h"
#include "freeblocklink.h"
#include <time.h>
#include "format.h"
using namespace std;

/*
* format()
* format the disk
* (1)init block
* (2)init superBlock; include init
* (3)init iNode
*/
void format() {
	//(1) mkdir 'system'
	char choice;
	printf("Will be to format filesystem...\n");
	printf("WARNING:ALL DATA ON THIS FILESYSTEM WILL BE LOST!\n");
	printf("Proceed with Format(Y/N)?");
//	cin >> choice;
    choice='y';
	//(2) init super_block
	if ((choice == 'y') || (choice == 'Y')) {
		if ((fp=fopen(SYSTEM, "wb+")) == NULL)
		{
            printf("Can't create file %s\n", SYSTEM);
            exit(0);
		}
		ofstream ofstr4("data.txt", ios::out);
		//init superblock
		super_block.id = 1;
		super_block.iNodeTotalNum = 32;
		super_block.iNodeFreeNum = 29;
		memset(super_block.iNodeFreeStack,0, sizeof(super_block.iNodeFreeStack));
		super_block.dataBlockTotalNum = 990;
		super_block.dataBlockFreeNum = 988;
		super_block.iNodeFreeStack[0] = 1;
		super_block.iNodeFreeStack[1] = 1;
		super_block.iNodeFreeStack[2] = 1;
		memset(super_block.dataBlockFreeStack, -1, sizeof(super_block.dataBlockFreeStack));
		//super_block.superBlockFlag = 0;
		ofstr4 << super_block.id << " " << super_block.iNodeTotalNum << " " <<
                  super_block.iNodeFreeNum << " " << super_block.dataBlockTotalNum << " " <<
                  super_block.dataBlockFreeNum <<" "<<endl;

		for (int i = 0; i < INODEFREESTACKNUM; i++) {
			ofstr4 << super_block.iNodeFreeStack[i] << " ";
		}
		ofstr4 <<endl;

		for (int i = 0; i < DATABLOCKFREESTACKNUM; i++) {
			ofstr4 << super_block.dataBlockFreeStack[i] << " ";
		}
		ofstr4 << endl;

        /*there are some problem*/

		//(3) int Inode
		inode[0].id = 0;
		inode[0].fileCount = 0;
		inode[0].size = 0;
		inode[0].fileMode = -1;
		inode[0].userId = -1;
		memset(inode[0].userRight,-1,sizeof(inode[0].userRight));
		time_t t = time(0);
        strftime(inode[0].time.tdate,sizeof(inode[0].time.tdate),"%Y/%m/%d",localtime(&t));
        strftime(inode[0].time.ttime,sizeof(inode[0].time.ttime),"%X",localtime(&t));
		memset(inode[0].diskAddress,-1,sizeof(inode[0].diskAddress));

		inode[1].id = 1;
		inode[1].fileCount = 0;
		inode[1].size = 0;
		inode[1].fileMode = 0;
		inode[1].userId = 0;
		for(int i=0;i<DIRECTORYITEMNUM;i++) {
            if(i == 0 ) {
                inode[1].userRight[i] = 7;
            } else {
                inode[1].userRight[i] = 0;
            }
		}
		t = time(0);
        strftime(inode[1].time.tdate,sizeof(inode[1].time.tdate),"%Y/%m/%d",localtime(&t));
        strftime(inode[1].time.ttime,sizeof(inode[1].time.ttime),"%X",localtime(&t));
		memset(inode[1].diskAddress,-1,sizeof(inode[1].diskAddress));

        inode[2].id = 2;
		inode[2].fileCount = 0;
		inode[2].size = 0;
		inode[2].fileMode = 0;
		inode[2].userId = 0;
		for(int i=0;i<DIRECTORYITEMNUM;i++) {
            if(i == 0 ) {
                inode[2].userRight[i] = 7;
            } else {
                inode[2].userRight[i] = 0;
            }
		}
		t = time(0);
        strftime(inode[2].time.tdate,sizeof(inode[2].time.tdate),"%Y/%m/%d",localtime(&t));
        strftime(inode[2].time.ttime,sizeof(inode[2].time.ttime),"%X",localtime(&t));
		memset(inode[2].diskAddress,-1,sizeof(inode[2].diskAddress));
        inode[2].diskAddress[0] = 0;

        for(int i=3;i<INODENUM;i++) {
            inode[i].id = i;
            inode[i].fileCount = 0;
            inode[i].size = 0;
            inode[i].fileMode = -1;
            inode[i].userId = -1;
            memset(inode[i].userRight,-1,sizeof(inode[i].userRight));
            strcpy(inode[i].time.tdate, "/");
            strcpy(inode[i].time.ttime,"/");
            memset(inode[i].diskAddress,-1,sizeof(inode[i].diskAddress));
        }

		for (int i = 0; i<INODENUM; i++)
		{
			ofstr4 << inode[i].id << " " << inode[i].fileCount << " " << inode[i].size << " " <<
                      inode[i].fileMode << " " << inode[i].userId << " ";
			for(int j=0;j<DIRECTORYITEMNUM;j++) {
                ofstr4 << inode[i].userRight[j]<<" ";
			}
			ofstr4<<inode[i].time.tdate<<" "<<inode[i].time.ttime<<" ";
			for (int j=0; j < DISKADDRESSNUM; j++)
			{
				ofstr4 << inode[i].diskAddress[j] << " ";
			}
			ofstr4 << endl;
		}

		MFD.init();  // only one mfd
		SFD.init();  //

        // write into a mfd
		strcpy(MFD.item[0].name,"root");
		strcpy(MFD.item[0].psw, "123456");
		MFD.item[0].iNode = 1;
		for (int i=0; i < MFD.size(); i++)//mfd
		{
            mainFileDirectoryItem item = MFD.get(i);
			if(i!=0) strcpy(item.psw, "/");
			ofstr4 <<item.name<<" "<<item.psw<<" " << item.iNode << " ";
		}
		ofstr4 << endl;

        sfdTable[0].iNode = 2;
        for(int i=0;i<DIRECTORYNUM;i++) {
            for(int j=0;j<SFD.size();j++) {
                strcpy(sfdTable[i].item[j].name,"/");
                sfdTable[i].item[j].iNode = -1;
            }
        }
        for(int i=0;i<DIRECTORYNUM;i++) {

            ofstr4 << sfdTable[i].iNode<<" ";
            for (int j = 0; j < SFD.size(); j++)
            {
                ofstr4 <<sfdTable[i].item[j].name<<" " << sfdTable[i].item[j].iNode<<" ";
            }
            ofstr4 << endl;
        }

        //ofstr4 << "block"<<endl;

        // init freeblcok

        for(int i=0;i<BLOCKNUMBER;i++) {
            for(int j=0;j<BLOCKSIZE;j++) {
                Z[i].R[j] = '/';
            }
        }
        for(int i=0;i<BLOCKNUMBER;i++) {
            ofstr4<<Z[i].R<<endl;
        }
		ofstr4.close();

	} else if((choice == 'n') || (choice == 'N')){
        FILE *sys;
        if ((sys = fopen(SYSTEM, "r")) == NULL) {
            cout<<"error: disk hasn't formatted!"<<endl;
            exit(0);
        }
	}
	PWD.clear();
};

/*
*  load()
*  if the disk has been formated, we need to load
*/

void load() {
	ifstream ifstr2("data.txt", ios::in);
	ifstr2 >> super_block.id >> super_block.iNodeTotalNum >>
              super_block.iNodeFreeNum >> super_block.dataBlockTotalNum >>
              super_block.dataBlockFreeNum ;
	for (int i = 0; i < INODEFREESTACKNUM; i++) {
		ifstr2 >> super_block.iNodeFreeStack[i];
		//cout << super_block.iNodeFreeStack[i];
	}

	for (int i = 0; i < DATABLOCKFREESTACKNUM; i++) {
		ifstr2 >> super_block.dataBlockFreeStack[i];
		//cout << super_block.dataBlockFreeStack[i];
	}
	for (int i = 0; i<INODENUM; i++)
	{

		ifstr2 >> inode[i].id >> inode[i].fileCount >> inode[i].size >>
		          inode[i].fileMode >> inode[i].userId;
        for(int j=0;j<DIRECTORYITEMNUM;j++) {
            ifstr2 >> inode[i].userRight[j];
        }
        ifstr2 >> inode[i].time.tdate>>inode[i].time.ttime;
		for (int j = 0; j < DISKADDRESSNUM; j++)
		{
			ifstr2 >> inode[i].diskAddress[j];
		}
	}
	for (int i = 0; i < MFD.size(); i++)//mfd
	{
		mainFileDirectoryItem item;
		ifstr2 >> item.name >> item.psw >> item.iNode ;
		//cout << sfdm.id << " " << sfdm.name << " " << sfdm.psw << " ";
		if (i == 0) {
			MFD.item[0].iNode = 2;
			strcpy(MFD.item[0].name, "root");
			strcpy(MFD.item[0].psw, "123456");
		}
		else
		{
			MFD.add(item.name, item.iNode);
			strcpy(MFD.item[i].psw, item.psw);
		}
	}

	for (int j = 0; j < DIRECTORYNUM; j++) {//sfd
		ifstr2 >> sfdTable[j].iNode;
		//cout << sfdtable[j].id;
		for (int i = 0; i < SFD.size(); i++)
		{
			symbolFileDirectoryItem item;
			ifstr2 >> item.name >> item.iNode   ;
			//cout << item.iNode<<" "<<item.name;
			sfdTable[j].add(item.name, item.iNode);
			//cout << sfdtable[j].item[i].name << endl;
		}
	}

	//cout << sfdtable[0].id;
	//char tmp[20];
	//ifstr2>>tmp;
	for(int i=0;i<BLOCKNUMBER;i++)
    {
       ifstr2 >> Z[i].R;
    }
    initchengzu(0);
    //STInit(S);
    /*//LOAD FREE BLOCK STACK
    for (int i = DATABLOCKFREESTACKNUM; i >0; i--) {
            i_node m;
            m.ID=super_block.dataBlockFreeStack[i];
            PushST(S,m);
    }*/
	ifstr2.close();

	MFD.iNode = 1;
    /*inode[1].fileMode = 1;//MFD
	inode[1].size = 0;
	inode[1].id = 1;
	inode[1].fileCount = 0;*/

	//when open this system, we are at /root/
	PWD.push_back("root");
	//cout<<PWD[0]<<endl;

};
/*
* writeIn()
* if anything in this file system changes, writeIn is needed
*/
void writenIn() {
	ofstream ofstr4(SYSTEM, ios::out);
	//superblock
	ofstr4 << super_block.id << " " << super_block.iNodeTotalNum << " " <<
              super_block.iNodeFreeNum << " " << super_block.dataBlockTotalNum << " " <<
              super_block.dataBlockFreeNum <<" " << endl;
	for (int i = 0; i < INODEFREESTACKNUM; i++) {
		ofstr4 << super_block.iNodeFreeStack[i] << " ";
	}
	ofstr4 << endl;
	for (int i = 0; i < DATABLOCKFREESTACKNUM; i++) {
		ofstr4 << super_block.dataBlockFreeStack[i] << " ";
	}
	ofstr4 << endl;
	//inode
	for (int i = 0; i < INODENUM; i++)
	{
		ofstr4 << inode[i].id << " " << inode[i].fileCount << " " << inode[i].size << " " <<
                  inode[i].fileMode << " " << inode[i].userId << " ";
		for(int j=0;j<DIRECTORYITEMNUM;j++) {
                ofstr4 << inode[i].userRight[j]<<" ";
			}
        ofstr4<<inode[i].time.tdate<<" "<<inode[i].time.ttime<<" ";
		for (int j = 0; j < DISKADDRESSNUM; j++)
		{
			ofstr4 << inode[i].diskAddress[j] << " ";
		}
		ofstr4 << endl;
	}

	//mfd, sfd
	for (int i = 0; i < MFD.size(); i++)//mfd
	{
        mainFileDirectoryItem item = MFD.get(i);
		//cout<< sfdm.id << " " << sfdm.name << " " << sfdm.psw << " ";
		ofstr4  << item.name << " "<<item.psw<<" " << item.iNode << " ";
	}
	ofstr4 << endl;
	for (int j = 0; j < DIRECTORYNUM;j++) {//sfd
		ofstr4 <<sfdTable[j].iNode<<" ";
		for (int i = 0; i < SFD.size(); i++)
		{
            symbolFileDirectoryItem item = sfdTable[j].get(i);
			//cout<< sfdm.id << " " << sfdm.name << " ";
			ofstr4 << item.name << " "<< item.iNode << " " ;
			//cout << sfdm.name << "MM";
		}
		ofstr4 << endl;
	}
	//ofstr4 << "block"<<endl;
	for(int i=0;i<BLOCKNUMBER;i++) {
            ofstr4<<Z[i].R<<endl;
    }
	ofstr4.close();
}
/*
* iNodeMalloc()
* apply for an iNode
*/
int iNodeMalloc() {
	if (super_block.iNodeFreeNum <= 0) {
		return -1;
	}
	super_block.iNodeFreeNum--;
	//inode[INODENUM];
	int j;
	for (int i = 0; i < INODEFREESTACKNUM; i++)
	{
		if (!super_block.iNodeFreeStack[i])
		{
			super_block.iNodeFreeStack[i] = 1;
			j = i;
			break;
		}

	}
	return j;
}

/*
* sudoFormat()
* cmd: format
*/
void sudoFormat() {
    void run();
    if(strcmp(loginUser.username, "root") == 0) {
        remove("data.txt");
        format();
        load();
    } else {
        cout<<"error: you don't have this right!"<<endl;
        return ;
    }
}
