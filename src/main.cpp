#include <iostream>
#include <fstream>
#include "mylib.h"

using namespace std;

int main() {
	auto mylib = Mylib("something");
	cout << "My lib returns: " << mylib.getSomething() << endl;
	return 0;
}
