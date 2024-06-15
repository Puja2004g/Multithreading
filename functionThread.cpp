//Question 2
#include <iostream>
using namespace std;
#include <thread>
#include "functionThread.h"

void functionThread(int x) {
	for (int i = 0; i <= x; i++) {
		cout << i << endl;
	}
}