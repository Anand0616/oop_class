#include <iostream>

void swap(int &a, int &b) {
	int c;
	c = a;
	a = b;
	b = c;
	
	
}

int main() {

	int a = 1;
	int b = 2;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	swap(a, b);
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b ;
	
	return 0;
}
