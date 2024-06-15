#include <iostream>
#include <thread>
#include <mutex>
#include "deadlock.h"
using namespace std;

std::mutex m2;
std::mutex m3;
int x = 0;

void deadlockCheck1() {
	m2.lock();
	m3.lock();
	x++;
	cout << "check 1 " << x << endl;
	m2.unlock();
	m3.unlock();
}

void deadlockCheck2() {
	m3.lock();
	m2.lock();
	x++;
	cout << "Check 2 " << x << endl;
	m3.unlock();
	m2.unlock();
}


void nodeadlock1() {
	std::lock(m2, m3);
	std::lock_guard<mutex>  lock2(m2, std::adopt_lock);
	std::lock_guard<mutex>  lock3(m3, std::adopt_lock);
	x++;
	cout << "Check 2 " << x << endl;
}

void nodeadlock2() {
	std::lock(m2, m3);
	std::lock_guard<mutex>  lock2(m2, std::adopt_lock);
	std::lock_guard<mutex>  lock3(m3, std::adopt_lock);
	x++;
	cout << "Check 2 " << x << endl;
}