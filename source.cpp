#include "main.h";

void print(string label, const vector<int>& v) {
	// Simply prints a label and a vector.
	// Passes by constant reference due to no modification.
	// Saves memory due to this method (no vector copying)
	cout << label << ": \n";
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << "\n";
	}
	return; 
}

void print_names(string label, const vector<string>& v) {
	// Similar to the print() functin but operating on a vector<string>
	cout << label << ": \n";
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << "\n";
	}
	return;
}

void fibbonaci(int x, int y, vector<int>& v, int n) {
	// Starting at arbitrary integer x and y
	// Fills empty vector with a seeded fibbonaci sequence up to n.
	// As per chapter 8 exercise 3.
	
	v.push_back(x);
	v.push_back(y);

	for (int i = 2; i < n; ++i) {
		int value = (v[i - 1] + v[i - 2]);
		v.push_back(value);
	}

}

vector<int> reverse_v(const vector<int>& v) {
	// Reverse by value
	// Recieves a vector<int> by constant reference.
	// Creates a new vector. 
	// Copies the reversed data into this new vector and returns it.  
	vector<int> rev; 

	for (int i = v.size(); i > 0; --i) {
		int k = v[i - 1];
		rev.push_back(k);
	}

	return rev;

}

void reverse_r(vector<int>& v) {
	// Reverse by reference
	// Recieves a vector<int> by reference.
	// Swaps the data from beginning to end, effectively reversing the vector.
	// Returns void as the vector is modified. 
	
	// Why -1 - i? Because we must go from beginning to end swapping...
	// Recall: the last element is not v[v.size()] but [v.size() - 1]
	// When all the values are swapped, i == v.size() - 1 - i
	// Try on paper if you don't understand
	for (int i = 0; i < (v.size() - 1 - i); ++i) {
		swap(v[i], v[v.size() - 1 - i]);
	}
}

vector<string> reverse_str_v(const vector<string>& v) {
	// Recieves a vector<string> by constant reference/value.
	// Creates a new vector. 
	// Copies the reversed data into this new vector and returns it.  
	vector<string> rev;

	for (int i = v.size(); i > 0; --i) {
		string s = v[i - 1];
		rev.push_back(s);
	}

	return rev;

}

void reverse_str_r(vector<string>& v) {
	// Recieves a vector<string> by reference.
	// Swaps the data from beginning to end, effectively reversing the vector.
	// Returns void as the vector is modified. 

	for (int i = 0; i < (v.size() - 1 - i); ++i) {
		swap(v[i], v[v.size() - 1 - i]);
	}
}


void read_age_name(vector<string>& n, vector<double>& a, int size) {

	// The purpose of this function is to take in a vector<string> to store names.
	// A vector<double> to store ages.
	// A int to store the size of these vectors.

	// Then read in names from cin, storing then in the accompanying vector.
	// After that read in ages from the user, storing them accordingly. 

	// Passes by reference, choosing to modify the vectors directly.

	for (int i = 0; i < size; ++i) {
		string name;
		cout << "Enter a name: ";
		cin >> name;
		n.push_back(name);
	}

	cout << "Now enter ages: \n";

	for (int i = 0; i < size; ++i) {
		double age = 0;
		cout << "Enter an age: ";
		cin >> age;
		a.push_back(age);
	}
}

void sort_age_name(vector<string>& n, vector<double>& a) {
	// The purpose of this function is to read in a vector<string> of names
	// As well as a vector<double> of ages.

	// Sort the names by alphabetical order and then sort the ages vector so each age matches with the respective name. 

	// First take a copy of the original (unsorted) names. 
	vector<string> names_copy = n;
	// Now sort these names by alphabetical order.
	sort(n.begin(), n.end());
	// Create a new vector that will store the sorted ages.
	vector<double> sorted_ages;
	
	// Look through the sorted names vector (n)
	// Find a matching name in the original copy (names_copy)
	// Use the element index at which this match occured (j)
	// Push the age from the original vector index (j) into the sorted_ages. 
	for (int i = 0; i < n.size(); ++i) {
		for (int j = 0; j < names_copy.size(); ++j) {
			if (n[i] == names_copy[j]) {
				sorted_ages.push_back(a[j]);
				break;
			}
		}
	}

	// Copy sorted ages into a (modifying ages vector/sorting)
	for (int i = 0; i < sorted_ages.size(); ++i) {
		a[i] = sorted_ages[i];
	}

	// Note nothing is returned, we modify the vectors rather than creating arbitrarily large copies. (pass by value vs pass by ref)

}

double price_weight(const vector<double>& price, vector<double>& weight) {
	// Write a function that given two vector<double> computes a value...
	// An index, that is the sum of all price[i]*weight[i]. Make sure to have weight.size()==price.size()

	// I chose to use constant reference, as we are reading from the vectors, not modifying.
	// Again, a copy (pass by value) would waste memory. 
	double index = 0;

	if (price.size() == weight.size()) {
		for (int i = 0; i < price.size(); ++i) {
			double product = price[i] * weight[i];
			index += product;
		}
	}
	else {
		error("Error: the price and weight vectors must have equal size.");
	}

	return index;
}

double maxv(const vector<double>& v) {
	// Write a function that returns the largest element of a vector argument.
	// The storage type of the vector has oddly, not been specified.
	// I chose to use doubles.

	// When we begin reading the function, the first element will naturally be the largest encountered thus far. 
	double largest = v[0];

	for (int i = 0; i < v.size(); ++i) {
		if (v[i] >= largest) {
			largest = v[i];
		}
	}

	return largest;
}

void stats(const vector<double>& v, double& largest, double& smallest, double& mean, double& median) {
	// Write a function that finds the smallest and largest element of a vector. 
	// Also computes the mean and median. Do not use global variables.
	// Either return a struct containg the result or pass them back through reference arguments.
	// A struct seems needlessly complicated, I will just pass ref arguments. 

	// Calculate largest.
	largest = maxv(v);
	// Calculate smallest.
	smallest = v[0];
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] <= smallest) {
			smallest = v[i];
		}
	}

	// Calculate median.
	// Sort first
	vector<double> sort_v = v;
	sort(sort_v.begin(), sort_v.end());

	// If the number of data points is odd.
	if ((v.size() % 2) != 0) {
		// Median equal the middle of the data sets. 
		int i = ((v.size() + 1) / 2);
		median = sort_v[i - 1];
	}
	else if ((v.size() % 2 == 0)) {
		// If number of data points are even. 
		// Take the average of the two middle data points.
		int i = ((v.size() / 2));
		median = (sort_v[i] + sort_v[i - 1]) / 2;

	}

	// Calculate mean.
	double sum = 0;
	for (int i = 0; i < v.size(); ++i) {
		sum += v[i];
	}

	mean = sum / v.size(); 

}

void print_until_s(const vector<string>& v, string quit) {
	// For exercise 11/12 prints a vector of strings until the given string is read.
	for (string s : v) {
		if (s == quit) return;
		cout << s << "\n";
	}
}

void print_until_ss(const vector<string>& v, string quit) {
	// This version does not quit until string is read twice. 
	int count = 0;

	for (string s : v) {
		
		if (s == quit) ++count;
		if (count >= 2) return;
		cout << s << "\n";
	}
}

vector<int> chars_in_string(const vector<string>& s) {
	// Returns a vector of ints, containing the sizes of each respective string in s.
	// As per exercise 13.
	vector<int> sizes;

	for (int i = 0; i < s.size(); ++i) {
		int size = s[i].size();
		sizes.push_back(size);
	}

	return sizes;
}

void long_short(const vector<string>& s, string& longest, string& shortest) {
	// Obtain the longest and shortest string from a vector of strings. 

	int smallest_size = s[0].size();
	int largest_size = s[0].size();

	// Need integers to keep track of the size.
	// Now, continuously update the string using these tracked ints.

	for (int i = 0; i < s.size(); ++i) {
		if (s[i].size() <= smallest_size) {
			smallest_size = s[i].size();
			shortest = s[i];
		}

		if (s[i].size() >= largest_size) {
			largest_size = s[i].size();
			longest = s[i];
		}
	}
}

void first_last(const vector<string>& s, string& first, string& last) {
	// Find the lexicographically first and last string.
	//Exercise 13

	// Create a sorted copy of s.
	// Now modify the arguments with this now lexicographically accurate vector.

	vector<string> sorted_s = s;

	sort(sorted_s.begin(), sorted_s.end());

	int lst_elmnt = sorted_s.size() - 1;

	first = sorted_s[0];
	last = sorted_s[lst_elmnt];




}

void f(const int x) {
	if (x == 1) {
		cout << "Yes, the number is one";
	}
	else {
		cout << "No, it's not one";
	}
}
