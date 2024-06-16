#include <iostream>
#include <thread>
#include <future>
#include "sumSquares.h"

using namespace std;

void sumsquares(std::promise<int>&& sum,int n) {
	int sumsq = 0;
	for (int i = 1; i <= n; i++) {
		sumsq += i * i;
	}
	sum.set_value(sumsq);
}