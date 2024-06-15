#pragma once
#ifndef PRODUCERCONSUMER_H
#define PRODUCERCONSUMER_H

/*
Implement a basic producer-consumer problem using threads. 
The producer thread should generate random numbers and add them to a queue. 
The consumer thread should read and print the numbers from the queue. 
Use a condition variable to synchronize access to the queue.
*/

//Question 4
void producer(int n);
void consumer();

#endif 
#pragma once
