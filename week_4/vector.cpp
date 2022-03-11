#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> myVector){
		
	cout << '{'	;
	for(int i = 0; i < myVector.size(); i++) // for (int item in myVector) in dart in is : in cpp
	{
		int item = myVector[i];
		if(i == myVector.size() - 1) {
			cout << item;
			break;
		}
		cout << item << ", ";
	}
	cout << '}' << '\n';
	
}

int main() {
	
	vector<int> myVector = {2, 4, 5};
	printVector(myVector);
	//add nlast
	myVector.push_back(9);
	printVector(myVector);
	//remove last
	myVector.pop_back();
	printVector(myVector);
	//insert
	myVector.insert(myVector.begin() + 1, 99);
	printVector(myVector);
	//remove
	myVector.erase(myVector.begin() + 1);
	printVector(myVector);
	
	return 0;
}
