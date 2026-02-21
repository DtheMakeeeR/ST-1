// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
	if (value < 2) return false;
	for (uint64_t i = 2; i*i <= value; i++)
	{
		if (value % i == 0) return false;
	}
	return true;
}

uint64_t nPrime(uint64_t n) {
	uint64_t res = 0;
	for (uint64_t i = 0; i < n; i++)
	{
		res = nextPrime(res);
	}
	return res;
}

uint64_t nextPrime(uint64_t value) {
	uint64_t res = value+1;
	while (!checkPrime(res))
	{
		res++;
	}
	return res;
}

uint64_t sumPrime(uint64_t hbound) {
	uint64_t res = 0;
	for (uint64_t i = 2; i < hbound; i++)
	{
		if (checkPrime(i)) res += i;
	}
	return res;
}
