#include <iostream>
#include <string>
using namespace std;

#define MAX_LENGTH 650

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
	
	return dp[len_a - 1][len_b - 1];
}

int main() {
	string a;
	string b;
	cin >> a;
	cin >> b;
	cout << levenshtein(a, b) << endl;
}