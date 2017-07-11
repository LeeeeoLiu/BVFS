#ifndef RUN_H
#define RUN_H
#pragma once
#include <stdio.h>
#include <string>
#include "filesystem.h"
#include <iostream>
#include <fstream>
#include "fstream"
#include "file.h"
#include "directory.h"
#include "register.h"
#include "help.h"
#include "login.h"
using namespace std;

void title() {
    cout << "system LTS v1.1"<<endl<<endl;
}
void init() //初始化命令
{
	FILE *sys;
	if ((sys = fopen(SYSTEM, "r")) == NULL)
	{
		format();
		load();
		char tmp[2];
		gets(tmp);
	}
	else
	{
		load();
	}
}
void run() {

    title();
	init();
//	login();
	string order;
    string pwd_tmp = "/root/";
    cout<<loginUser.username<<"@";
    vector<string>::iterator it;
    for(it = PWD.begin();it!=PWD.end();it++) {
        cout<<"/"<<*it;
    }
    cout<<"$ ";

    //用map参照

	while (getline(cin,order))
	{
        if(order.find("cat") == 0) {
            string file = "";
            int i=3;
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    file+=order[i];
                }
                if(file.size() > 0) {
//                    cat(file);
                }
            }
        } else if(order.find("cd") == 0) {
            string dir = "";
            int i=2;
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    dir+=order[i];
                }
                if(dir.size() > 0) {
//                    cd(dir);
                }
            }
        } else if(order == "exit") {
            exit(0);
        } else if(order == "format"){
            sudoFormat();
        } else if(order == "help"){
            help();
        } else if(order == "ll") {
//            ll();
        } else if(order == "login") {
            if(loginUser.username != "/") {
                cout<<"error: you has logined!"<<endl;
            } else {
//                login();
            }
        } else if(order == "logout") {
            strcpy(loginUser.username,"/");
            run();
        } else if(order == "ls") {
//            ls();
        } else if(order.find("mkdir") == 0) {
            string dir = "";
            int i=5;
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    dir+=order[i];
                }
                if(dir.size() > 0) {
                    mkdir(dir);
                }
            }
        } else if(order == "pwd") {
//            pwd();
        } else if(order == "register") {
            testAndRegister();
        } else if(order.find("renamef") == 0) {
            string dir1 = "";
            string dir2 = "";
            int i=7;
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    dir1+=order[i];
                }
                while(order[i] == ' ' && i<order.size()) {
                    i++;
                }
                if(i < order.size()) {
                    for(;i<order.size();i++) {
                        if(order[i] == ' ')
                            break;
                        dir2+=order[i];
                    }
                    if(dir1.size() > 0&&dir2.size()>0) {
                        renamef(dir1,dir2);
                    }
                }
            }
        } else if(order.find("rename") == 0) {
            string dir1 = "";
            string dir2 = "";
            int i=6;
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    dir1+=order[i];
                }
                while(order[i] == ' ' && i<order.size()) {
                    i++;
                }
                if(i < order.size()) {
                    for(;i<order.size();i++) {
                        if(order[i] == ' ')
                            break;
                        dir2+=order[i];
                    }
                    if(dir1.size() > 0&&dir2.size()>0) {
                        rename(dir1,dir2);
                    }
                }
            }
        } else if(order.find("rmf") == 0) {
            string dir = "";
            int i=3;
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    dir+=order[i];
                }
                if(dir.size() > 0) {
                    rmf(dir);
                }
            }
        } else if(order.find("touch") == 0) {
            string file = "";
            int i=5;
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    file+=order[i];
                }
                if(file.size() > 0) {
                    touch(file);
                }
            }
        } else if(order.find("vim") == 0) {
            string file = "";
            int i=3;
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    file+=order[i];
                }
                if(file.size() > 0) {

//                    vim(file);
                }
            }
        }

        string pwd_tmp = "/root/";
        cout<<loginUser.username<<"@";
        vector<string>::iterator it;
        for(it = PWD.begin();it!=PWD.end();it++) {
            cout<<"/"<<*it;
        }
        cout<<"$ ";
	}
}
#endif
