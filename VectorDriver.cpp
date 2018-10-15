#include "stdafx.h"
#include "VectorDriver.h"
#include <algorithm>	//so we can use sort

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);


	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;

	//////////////////////////////////my code//////////////////////////////////////

	cout << "  Working Code:" << endl << endl;


	//allocating new vector
	vector<short> test_vector(10);
	cout << "New vector: ";
	print(test_vector);
	cout << endl;


	//testing add_numbers
	cout << "Testing add_numbers function: ";
	add_numbers(test_vector);
	cout << endl << "filled vector: ";
	print(test_vector);
	cout << endl;


	//testing  what happens when add_numbers is called twice
	cout << endl << "What happens if we call add_numbers twice: ";
	add_numbers(test_vector);
	add_numbers(test_vector);
	print(test_vector);
	cout << endl;


	//testing print_even
	cout << endl << "Testing print_even function: ";
	print_even(test_vector);
	cout << endl;


	//testing is_present
	cout << endl << "Testing is_present function (0 for false, 1 for true): ";
	cout << endl << "Is 3 present in ";
	print(sample_vector);
	cout << "? " << endl;
	is_present(sample_vector, 3);
	cout << endl;


	//new vector for testing sort on
	vector<short> test_vector2(5);

	//testing sort
	cout << endl << "Testing std::sort on ";
	print(test_vector2);
	cout << endl << "Sorted vector: ";
	
	cout << endl;

	cout << endl << endl << " End of Working Code" << endl << endl;

	////////////////end of my code/////////////////////////////////////


	system("pause");
	return 0;
}
