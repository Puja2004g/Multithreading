//question 3
#include <iostream>
#include <thread>
#include <mutex>
#include "sharedAccess.h"
using namespace std;

std::mutex m;
int counter = 0;

void incrementCounter() {
	std::lock_guard<mutex> lock(m);
	for (int i = 1; i <= 1000; i++) {
		counter++;
	}
	cout<<"counter = " << counter << endl;
}