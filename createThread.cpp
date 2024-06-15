//Question 1
#include <iostream>
using namespace std;
#include <thread>
#include "createThread.h"

void printThread() {
	cout<<"Thread id: " << std::this_thread::get_id() << " is running" << endl;
}