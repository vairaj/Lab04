#pragma once
/* File: VectorDriver.cpp
* Athr: Dimitri Zarzhitsky
* Date: October 16, 2002
*
* Desc: provides the basic framework and examples for an introduction to
*       the STL::vector, iterators, and the algorithms facilities.
*
* Edited by: Rafe Cooley
* Date: October 1, 2017 (the future)
*
*/
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <cstdlib> //so we can generate psuedo-random numbers :)

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

// TODO: implement add_numbers
void add_numbers(vector<short> &data)
{
	for (ulong i = 0; i<data.size(); i++) 
	{
		short ran_num = rand();
		data.at(i) = ran_num;
	}
}
// TODO: implement print_even
void print_even(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			if (i % 2 == 0)
			{
				cout << ", " << data.at(i);
			}
		}
		cout << ">";
	}
}
// TODO: implement is_present
bool is_present(const vector<short> &data, short item) {
	std::vector<short>::const_iterator iter = data.begin();
	bool found_it = false;
	while (iter != data.end()) {
		if (*iter == item)
		{
			found_it = true;
			cout << found_it;
			goto found; //goto is lazy, but so am I
		}
		iter++;
	}
	found: ;
	return found_it;
}
// TODO: implement std::sort function
