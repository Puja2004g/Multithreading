//question 4
#include <iostream>
using namespace std;
#include <thread>
#include <condition_variable>
#include <queue>
#include <random>
#include "producerConsumer.h"

std::condition_variable cv;
queue<int> q;
std::mutex m1;

// producer thread should generate random numbers and add them to a queue
void producer(int n) {
	for (int i = 0; i < n; i++) {
		std::lock_guard<mutex> lock(m1);
		int num = rand() % 10 + 1;
		q.push(num);
		cout << "Producer: " << num << endl;
	}
	cv.notify_one();
}

//consumer thread should read and print the numbers from the queue
void consumer() {
	std:unique_lock<mutex> lock(m1);
	cv.wait(lock, [] {return !q.empty(); });
	while(!q.empty()) {
		cout<<"Consumer: " << q.front() << endl;
		q.pop();
	}
	lock.unlock();
}