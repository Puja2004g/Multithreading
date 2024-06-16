#pragma once
#ifndef  SUMSQUARES_H
#define SUMSQUARES_H

#include <future>

void sumsquares(std::promise<int>&& sum,int n);

#endif // ! SUMSQUARES_H
