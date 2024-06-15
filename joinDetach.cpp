#include <iostream>
#include <thread>
#include <chrono>
#include "joinDetach.h"

using namespace std;

void sleepThread(int sec) {
	std::this_thread::sleep_for(std::chrono::seconds(sec));
	cout << "Thread finished"<<endl;
}