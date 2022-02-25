#include <iostream>
#include <sstream>
using namespace std;

// https://codeforces.com/problemset/problem/71/A
main()   //way too long word
{
	string word;
	stringstream abbrevation;
	cout << "give a word";
	cin >> word;
	int number = word.length();

	if (number >= 10) {
		abbrevation << word[0] << number - 2 << word.back();
		cout << abbrevation.str();
	}
	else{
		cout << word;
	}
}
