#include <string>
#include "calc.h"
#include "util.h"
using namespace std;

string promptStr="HPCE -> ";

struct Utility {
	int help(string arg) {
		if(arg=="") {
			cout << "1. help			a quick help" << endl <<
					"2. exit			exit HPCE" << endl <<
					"3. calc			calculator" << endl <<
					"4. time			show the local time" << endl;
		} else if(arg=="help") {
			cout << "help [command]: show a help of the command." << endl;
		} else if(arg=="exit") {
			cout << "exit: exit HPCE." << endl;
		} else if(arg=="calc") {
			cout << "calc: calculator program." << endl <<
					"commands are: " << endl <<
					"+, -, *, /, ^." << endl <<
					"You can use [num]q[num] to quit calc." << endl <<
					"You can use [num]a[num] to show the ans." << endl;
		} else if(arg=="time") {
			cout << "time: show the local time." << endl;
		} else {
			return 127; // command not found err
		}
		return 0;
	}
};

struct Utility utility;
struct Calc calc;
struct Util util;

void cmpreturn(int rv, string cmd) {
	cout << "\n" << cmd << " returned " << rv << ": ";
	if(rv==0) {
		cout << "Returned normally";
	} else if(rv==127) {
		cout << "Command Not Found";
	} else if(rv==-1) {
		cout << "Unknown Error";
	} else {
		cout << "Unknown Error";
	}
	cout << ".";
}

int command() {
	string cmd, arg="";
	cout << endl << promptStr;
	getline(cin, cmd);
	for(int i=0; i<cmd.length(); i++) {
		if(cmd[i]==' ') {
			arg=cmd.substr(i+1, cmd.length());
			cmd.erase(i, cmd.length());
			//cout << cmd << " " << arg << endl;
			break;
		}
	}
	if(cmd=="exit") {
		return -1;
	} else if(cmd=="help") {
		cmpreturn(utility.help(arg), cmd);
	} else if(cmd=="calc") {
		cmpreturn(calc.start(), cmd);
	} else if(cmd=="time") {
		util.time();
	} else {
		if(cmd=="");
		else cout << "Command Not Found.";
	}
	return 0;
}
