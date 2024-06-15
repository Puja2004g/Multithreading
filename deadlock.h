#pragma once
#ifndef DEADLOCK_H
#define DEADLOCK_H

/*
Write a program that simulates a deadlock scenario using two threads 
and two mutexes. Ensure that the program actually reaches a deadlock 
condition. Then, modify the program to avoid the deadlock.
*/

//Question 7

//cause deadlock
void deadlockCheck1();
void deadlockCheck2();

//no deadlock
void nodeadlock1();
void nodeadlock2();

#endif 
