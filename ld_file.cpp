#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include <ctime>
using namespace std;

#define MAX_LENGTH 719

int min3(int a, int b, int c) {
	return (a < b) ?
		((a < c) ? a : c) :
		((b < c) ? b : c) ;
}

int levenshtein(string a, string b) {
	int dp[MAX_LENGTH + 1][MAX_LENGTH + 1];
	int len_a = a.size();
	int len_b = b.size();
	
	// pad the strings so it become 1-based string
	a = "#" + a;
	b = "#" + b;
	
	// dp(string, empty) = length of the string
	for (int i = 0; i < len_a; i++) {
		dp[i][0] = i;
	}
	for (int j = 0; j < len_b; j++) {
		dp[0][j] = j;
	}
	
	// dp table building steps
	for (int i = 1; i < len_a; i++) {
		for (int j = 1; j < len_b; j++) {
			if (a[i] == b[j]) {
				dp[i][j] = dp[i-1][j-1];
			} else {
				dp[i][j] = min3(
					dp[i-1][j] + 1,
					dp[i][j-1] + 1,
					dp[i-1][j-1] + 1
				);
			}
		}
	}
	
	/*
	// print the dp table
	for (int i = 0; i < len_a; i++) {
		for (int j = 0; j < len_b; j++) {
			cout << dp[i][j];
			if (j + 1 == len_b) {
				cout << endl;
			} else {
				cout << " ";
			}
		}
	}
	*/
	
	return dp[len_a - 1][len_b - 1];
}

string readfile(string filename) {
	string retval;
	ifstream is(filename.c_str());
	while (is.good()) {
		char c = is.get();
		if (!isspace(c)) retval += c;
	}
	is.close();
	return retval;
}

int main(int argc, char** argv) {
	
	if (argc < 3) {
		string name(argv[0]);
		cout << "usage: " << name << " <file1> <file2>" << endl;
	} else {
		string file1(argv[1]);
		string file2(argv[2]);
		
		string a = readfile(file1);
		string b = readfile(file2);
		
		if (a.length() >= MAX_LENGTH || b.length() >= MAX_LENGTH) {
			cout << "Length of a=" << a.length() << " or b=" << b.length() << " is too long." << endl;
		} else {
			clock_t clkstart = clock();
			int distance = levenshtein(a, b);
			clock_t clkend = clock();
			int max_distance = max(a.length(), b.length());
			float percentage = (1.0f - ((float)distance / (float)max_distance)) * 100.0f;
			cout << "Length of " << file1 << " : " << a.length() << endl;
			cout << "Length of " << file2 << " : " << b.length() << endl;
			cout << "Levenshtein distance : " << distance << endl;
			cout << "Maximum distance     : " << max_distance << endl;
			cout << "Similarity           : " << setprecision(3) << percentage << "%" << endl;
		}
	}
}