#pragma once
#include "std_lib_facilities.h";

void print(string label, const vector<int>& v);
void print_names(string label, const vector<string>& v);

void fibbonaci(int x, int y, vector<int>& v, int n);

vector<int> reverse_v(const vector<int>& v);
void reverse_r(vector<int>& v);
vector<string> reverse_str_v(const vector<string>& v);
void reverse_str_r(vector<string>& v);

void read_age_name(vector<string>& n, vector<double>& a, int size);
void sort_age_name(vector<string>& n, vector<double>& a);

double price_weight(const vector<double>& price, vector<double>& weight);

double maxv(const vector<double>& v);

void stats(const vector<double>& v, double& largest, double& smallest, double& mean, double& median);


