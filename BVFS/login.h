#pragma once
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <queue>
#include "filesystem.h"
#include "format.h"
//#include <unistd.h>
#include "run.h"
//#include <curses.h>
using namespace std;

int checkUser(char *name, char *psw);
void run();
//WINDOW *initscr(void);
//int endwin(void);

//int usercnt = 0;



bool login(string user,string psw){
    int i;
    for( i=0;i<user.length();i++)
        loginUser.username[i] = user[i];
    loginUser.username[i] = '\0';
    for( i=0;i<psw.length();i++)
        loginUser.password[i] = psw[i];
    loginUser.password[i] = '\0';
//    loginUser.username=user.data();
//    loginUser.password=psw.data();

    /*test every time login successful
    strcpy(loginUser.username, "root");
    strcpy(loginUser.password, "123456");
    //test every time login successful*/
    cout<<"sdjfasljdfal"<<endl;
    cout<<loginUser.username<<endl;
    cout<<loginUser.password<<endl;

    if (checkUser(loginUser.username, loginUser.password) >= 0) {
        cout << loginUser.username << " login sucessfully!" << endl;
//        char tmp[2];
//        gets(tmp);
        //set pwd
        //if(loginUser != "root") {
        //    PWD.push_back(loginUser.username);
        //}
//        system("clear");

        PWD.clear();
        PWD.push_back("root");
        if(strcmp(loginUser.username,"root") != 0) {
            PWD.push_back(loginUser.username);
        }
        return true;
    } else {
        cout << "Login Error!sdafasdfafd" << endl;
        return false;
//        login();
    }
}



/*
* login()
* for logining
*/


//void login() {
//    cout << "username: ";
//    cin >> loginUser.username;
//    cout << "password: ";
//    cin >> loginUser.password;
//    //sleep(1);

//    /*test every time login successful
//    strcpy(loginUser.username, "root");
//    strcpy(loginUser.password, "123456");
//    //test every time login successful*/

//    if (checkUser(loginUser.username, loginUser.password) >= 0) {
//        cout << loginUser.username << " login sucessfully!" << endl;
//        char tmp[2];
//		gets(tmp);
//        //set pwd
//        //if(loginUser != "root") {
//        //    PWD.push_back(loginUser.username);
//        //}
//        system("clear");

//        PWD.clear();
//        PWD.push_back("root");
//        if(strcmp(loginUser.username,"root") != 0) {
//            PWD.push_back(loginUser.username);
//        }
//    } else {
//        cout << "Login Error!" << endl;
//        login();
//    }
//}
/*
* checkUser()
* check weather username and password are matching and right
*/
int checkUser(char *name, char *psw) {

	for (int i = 0; i<10; i++) {
		if (!strcmp(name, MFD.item[i].name) && !strcmp(psw, MFD.item[i].psw)) {
			strcpy(loginUser.username, name);
			strcpy(loginUser.password, psw);
			loginUser.id = i;
			//loginUser.id = MFD.item[i].iNode;
			//cout << "The user's directory's id is" << findUserNode(name)<<endl;
			return i;
		}
	}
	return -1;
}
/*
* logout()
* for logouting
*/
void logout() {
    strcpy(loginUser.username,"/");
    run();
}
