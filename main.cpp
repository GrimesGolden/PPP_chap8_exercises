#include "main.h";
int main() {

	// Utilize print() to cout a vector of ints and accompanying string message.
	string message = "Here's some numbers!";
	vector<int> numbs = { 1, 2, 3, 4, 5 };
	print(message, numbs);

	// Question 3/4
	// Create the fibbonaci() function
	// Print a vector filled using fibonnaci(), using print
	// Approximate the max int using this function.

	// After that, create two versions of reverse()
	// One creates a new vector, the other modifies an existing vector.
	// Both effectively reverse a vector
	// They are demonstrated below

	vector<int> fibbo;
	fibbonaci(1, 1, fibbo, 45);
	int approx_max = 1836311903;
	print("Fibbonaci sequence", fibbo);

	vector<int> rev_fibbo = reverse_v(fibbo);

	reverse_r(fibbo);

	print("Reversed fibb sequence by value: ", rev_fibbo);
	print("Reversed fibb sequence by reference: ", fibbo);

	vector<string> names;
	vector<double> ages;
	int size = 0;

	// We are now at excercise 7/8
	// Ask the user how many names they will enter, arbitrary size.
	cout << "How many names will you enter?";
	cin >> size;
	
	// Read and then sort these ages.

	read_age_name(names, ages, size);
	sort_age_name(names, ages);

	// Print out the now sorted age/name pairs, I chose to not make this a function, its a simple task. 

	for (int i = 0; i < names.size(); ++i) {
		cout << "NAME: " << names[i] << " AGE: " << ages[i] << "\n";
	}

	//exercise 9 comes next....
	vector<double> price = { 1, 2, 3, 4, 5 };
	vector<double> weight = { 10, 10, 10, 10, 10 };

	double index = price_weight(price, weight);
	cout << "The index is: " << index << " \n";

	// Now exercise 10
	vector<double> v_numbs = { 99, 3, 2, 4, 2, 1, 4, 4, 3, 5, 100, 6, 6, 5, 4, 3, 2, 1, 3, 2, 1, 0, 2, 1, 1, 2, 3, 57, 57, 57, 58, 32, 1, 32, 4, 27, 26, 25.4, 1, 99.8, 52};
	
	double small = 0;
	double large = 0;
	double mean = 0;
	double median = 0;

	stats(v_numbs, large, small, mean, median);

	cout << "Here are the statistics, largest number is: " << large << "\n";
	cout << "Smallest number is: " << small << "\n";
	cout << "The mean is: " << mean << "\n";
	cout << "The median is: " << median << "\n";

	// Exercise 11, testing print_until_s

	vector<string> case_one = { "Hello World", "this is a string", "test", "it got this far!" };
	vector<string> case_two = { "test", "this is a string", "test", "it got this far!" };
	vector<string> case_three = { "this is a test", "simply a test", "of the print_until_s() function", "it got this far!", "test", "error if reading"};
	vector<string> case_four = { "read one", "read two", "test", "read three", "read four", "test complete!", "test", "do not read" };
	print_until_s(case_one, "test");
	print_until_s(case_two, "test");
	print_until_s(case_three, "test");
	print_until_ss(case_four, "test");

	vector<string> size_test = { "1", "to", "tre", "four", "fivee", "sixxxx", "sevennn" };
	vector<int> chars = chars_in_string(size_test);

	for (int i = 0; i < chars.size(); ++i) {
		cout << chars[i] << " \n";
	}

	//Exercise 13

	string longest;
	string shortest;

	vector<string> length_test = { "longg!", "pretty long", "kinda long", "an extremely, almost absurdly long string", "not so long", "quite short", "short" };

	long_short(length_test, longest, shortest);

	cout << "The longest string is " << longest << " \n";
	cout << "The shortest string is " << shortest << "\n";

	vector<string> lexo = { "zebra", "kangaroo", "koala", "bear", "rabbit", "cat", "aardvark", "octopus" };

	string first;
	string last;

	first_last(lexo, first, last);

	cout << "The first string is " << first << " \n";
	cout << "The last string is " << last << "\n";

	// Exercise 14 testing.

	int one = 1;
	int two = 2;

	f(one);
	f(two);
}


