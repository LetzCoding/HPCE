/* 
 * HPCE 0.2 bugfix 1
 * 由Hangco制作 电子邮箱hangco-studios@hotmail.com
 * 无需任何许可，即可复制这个程序的所有源代码，也可以编译。
 */
#include "userMsg.h"
#include "cmd.h"
using namespace std;

bool startMsg=1;
int main(int argc, char *argv[]) {
	for(int i=0; i < argc; i++) {
		if(argv[i]=="--no-startMsg"||argv[i]=="-q") {
			startMsg=0;
		}
	}
	if(startMsg) welcome();
	while(1) {
		int rt=command();
		if(rt==-1) break;
	}
	return 0;
}
