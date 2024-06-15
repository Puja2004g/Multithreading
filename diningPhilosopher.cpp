#include <iostream>
#include <mutex>
#include <vector>
#include <chrono>
#include "diningPhilosopher.h"

using namespace std;

const int num = 5;
mutex outputMutex;
vector<mutex> chopsticks(num);

void diningPhilospher(int id) {
    int left = id;
    int right = (id + 1) % num;

    while (true) {
        unique_lock<mutex> leftLock(chopsticks[left], defer_lock);
        unique_lock<mutex> rightLock(chopsticks[right], defer_lock);

        // Acquire both chopsticks without deadlock
        lock(leftLock, rightLock);

        // Critical section: Print actions
        {
            lock_guard<mutex> coutLock(outputMutex); // Lock cout for this block
            cout << "Philosopher " << id << " is eating" << endl;
        }

        // Simulate eating
        this_thread::sleep_for(chrono::seconds(1));

        // Critical section: Print actions
        {
            lock_guard<mutex> coutLock(outputMutex); // Lock cout for this block
            cout << "Philosopher " << id << " is thinking" << endl;
        }

        // Simulate thinking
        this_thread::sleep_for(chrono::seconds(1));
    }
}