#include "stdafx.h"
#include "VectorDriver.h"

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

	//my code

	cout << "  Working Code:" << endl << endl;

	vector<short> test_vector(10);
	cout << "New vector: ";
	print(test_vector);
	cout << endl;

	cout << "Testing add_numbers function: ";
	add_numbers(test_vector);
	cout << endl << "filled vector: ";
	print(test_vector);

	cout << endl << "What happens if we call add_numbers twice: ";
	add_numbers(test_vector);
	add_numbers(test_vector);
	print(test_vector);

	cout << endl << endl << " End of Working Code" << endl << endl;

	//end of my code


	system("pause");
	return 0;
}
