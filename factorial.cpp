#include <iostream>
#include <thread>
#include <future>
#include "factorial.h"

using namespace std;

void factorial(std::promise<int>&& fact, int n) {
	int factVal = 1;
	for (int i = 1; i <= n; i++) {
		factVal *= i;
	}
	fact.set_value(factVal);
}