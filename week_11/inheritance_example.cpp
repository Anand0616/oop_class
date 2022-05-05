#include <iostream>
using namespace std;

class Pet{
protected:
	string Name;
	string Breed;
	int Age;

	Pet(string name, string breed, int age)
	{
		Name = name;
		Breed = breed;
		Age = age;
	}

public:
	void Introduce()
	{
		cout << "He is the " << Age << " year old " << Breed << " called " << Name << ".\n";
	}
};

class Dog : public Pet{
protected:
	string Characteristic;
	// string Dname;
public:
	Dog(string name, string breed, int age, string characteristic) : Pet(name, breed, age)
	{
		Characteristic = characteristic;
		// Dname = name;
	}
	void Information(){
		cout << "He is " << Characteristic << ".\n";
	}
};

// class Cat : public Dog, public Pet{
// protected:
// 	string Cname;

// public:
// 	Cat(string name, string breed, int age) : Pet(name, breed, age){
// 		Cname = name;
// 	}

// 	void Info(){
// 		cout << Dname << " is " << Characteristic << " towards " << Cname << ".\n";
// 	}
// };

int main()
{
	Dog arslan = Dog("arslan", "Mastiff", 2, "very aggresive");
	arslan.Introduce();
	arslan.Information();
	// Cat lily = Cat("Lily", "Savannah cat", 1);
	// lily.Introduce();
	// lily.Info();
}
