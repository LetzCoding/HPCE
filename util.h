#include <iostream>
#include <ctime>

struct Util {
	void time() {
		time_t rawt;
		cout << localtime(&rawt); // bug
	}
};
