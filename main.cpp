#include <iostream>
#include <thread>
#include <vector>
#include "createThread.h"
#include "functionThread.h"
#include "sharedAccess.h"
#include "producerConsumer.h"
#include "joinDetach.h"
#include "raceCondition.h"
#include "deadlock.h"
#include "readerWriter.h"
#include "diningPhilosopher.h"
using namespace std;

int main() {
	
	//question 1
	/*thread t1(printThread);
	thread t2(printThread);*/

	//question 2
	/*thread t1(functionThread, 10);
	thread t2(functionThread, 20);*/

	//question 3
	/*thread t1(incrementCounter);
	thread t2(incrementCounter);*/

	//question 4
	/*thread t1(producer, 10);
	thread t2(consumer);*/

	//question 5
	/*thread t1(sleepThread, 2);
	t1.join();
	cout << "Thread joined" << endl;

	thread t2(sleepThread, 2);
	t2.detach();
	cout << "Thread detached" << endl;*/

	//question 6
	/*vector<std::thread> threads;

	for (int i = 0; i < 10; ++i) {
		threads.push_back(std::thread(incrementCounter));
	}

	for (auto& t : threads) {
		t.join();
	}*/

	//question 7
	/*thread t1(deadlockCheck1);
	thread t2(deadlockCheck2);*/

	/*thread t1(nodeadlock1);
	thread t2(nodeadlock2);

	t1.join();
	t2.join();*/

	/*vector<std::thread> readers, writers;

	for (int i = 0; i < 5; i++) {
		readers.push_back(thread(reader, i));
		writers.push_back(thread(writer, i));
	}

	for (auto& t : readers) {
		t.join();
	}

	for (auto& t : writers) {
		t.join();
	}*/

	/*vector<thread> philosopher;

	for (int i = 0; i < 5; i++) {
		philosopher.push_back(thread(diningPhilospher, i));
	}

	for (auto& t : philosopher) {
		t.join();
	}*/

	return 0;
}