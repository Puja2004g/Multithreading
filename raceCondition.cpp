#include <iostream>
#include <thread>
#include <mutex>
#include "raceCondition.h"

using namespace std;

int a = 0;
std::mutex mtx;

void incrementCount() {
	for (int i = 0; i < 10; i++) {
		std::lock_guard<mutex> lock(mtx);
		a++;
		cout << a << endl;
	}
	cout << "Final counter " << a << endl;
}