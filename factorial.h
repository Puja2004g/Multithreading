#pragma once
#ifndef FACTORIAL_H
#define FACTORIAL_H

#include <future>

void factorial(std::promise<int>&& fact,int n);

#endif 