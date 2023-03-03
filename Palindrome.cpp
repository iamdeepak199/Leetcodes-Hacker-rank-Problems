#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
	
	string P = S;

	reverse(P.begin(), P.end());

	
	if (S == P) {
		
		return "Yes it is palindrome";
	}
	
	else {
	
		return "No it's not a palindrome";
	}
}

int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S);

	return 0;
}
