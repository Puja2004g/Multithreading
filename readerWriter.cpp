#include <iostream>
#include <mutex>
#include <shared_mutex>
#include "readerWriter.h"

using namespace std;

shared_mutex rw_mutex;
int shared_data = 0;

void reader(int id) {
	shared_lock<shared_mutex> lock(rw_mutex);
	cout << "Reader " << id << " reads " << shared_data << endl;
}

void writer(int id) {
	unique_lock<shared_mutex>  lock(rw_mutex);
	shared_data++;
	cout << "Writer " << id << " writes " << shared_data << endl;
}