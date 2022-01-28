#include <cmath>
#include <iostream>
struct Calc {
	int start() {
		cout << "Welcome to Calc!" << endl;
		int rv=interpill();
		cout << "Exit calc.";
		return rv;
	}
	int interpill() {
		bool flag=1, flag0=1;
		long double x, y, ans;
		int rt=0;
		char op;
		while(flag) {
			flag0=1;
			cout << "calc -> ";
			cin >> x >> op >> y;
			if(op=='+') {
				ans=x+y;
			} else if(op=='-') {
				ans=x-y;
			} else if(op=='*') {
				ans=x*y;
			} else if(op=='/') {
				ans=x/y;
			} else if(op=='q') {
				flag=0;
			} else if(op=='^') {
				ans=pow(x, y);
			} else if(op=='a');
			else {
				rt=127;
				flag0=0;
			}
			if(flag0) cout << ans << endl;
			else cout << "[calc/interpill] command not found" << endl;
		}
		return rt;
	}
};
