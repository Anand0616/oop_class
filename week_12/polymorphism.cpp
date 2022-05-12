// https://www.youtube.com/watch?v=wN0x9eZLix4

#include <iostream>
#include <regex>

using namespace std;

class AbstractEmployee
{
    // Returns true if got promotion
    virtual bool RequestPromotion() = 0;
    virtual void work() = 0;
};

class Employee : AbstractEmployee
{
	//only this class can access
private:
    string Company;
    int Age;
    //this class and its subclass can access
protected:
    string Name;
	
public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    // Setters and getters
    void setName(string value)
    {

        if (value.length() > 50)
        {
            return;
        }

        auto nameMatch = regex("^[a-zA-Z]+$");
        if (!regex_match(value, nameMatch))
        {
            return;
        }

        Name = value;
    }

    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }

    string getCompany()
    {
        return Company;
    }

    void setAge(int value)
    {
        if (value < 0)
        {
            return;
        }
        Age = value;
    }

    int getAge()
    {
        return Age;
    }

    void Introduce()
    {
        cout << Name << ", age " << Age << ", works at " << Company << ".\n";
    }

    bool RequestPromotion()
    {
        if (Age < 30){
            cout << Name << " did not get promoted.\n";
            return false;
        }else {
            cout << Name << " got promoted.\n";
            return true;
        }
    }

    void work (){
        cout<<Name<<" is working.\n";
    }
};

//subclass of parent is developer
//parent Employeee or superclass
class Developer : public Employee{
string FavoriteLanguage;

	public:
		Developer(string name, string company, int age, string favoriteLanguage) : Employee(name, company, age) {
			FavoriteLanguage = favoriteLanguage;
		}
		
	string getFavoriteLanguage(){
		return FavoriteLanguage;
	}
	void fixBug(){
		  cout << Name << " fixed a bug using "<< FavoriteLanguage<< endl;
	}
	
	void Introduce(){
		cout << Name << "'s favorite language is " <<FavoriteLanguage << ".\n";
	}

    void work (){
        fixBug();
    }
		
};

class Teacher : public Employee{
string Subject;
	public:
		Teacher(string name, string company, int age, string subject) : Employee(name, company, age) {
		Subject = subject;
		}
		
	void prepareLesson(){
		cout << Name << " is preparing a " << Subject << " lesson.\n"; 
	}

    void work (){
        prepareLesson();
    }
};

int main()
{
    Employee bob = Employee("Bob", "Starbucks", 18);
    Employee mary = Employee("Mary", "Facebook", 30);
	Employee me = Developer("Anand", "nowhere", 21, "Python");
	Employee susan = Teacher("Susan", "Super High School", 51, "math");
    //so for using polymorphism we can make emloyee class be any class 
	
    bob.work();
    mary.work();
    me.work();
    me.fixBug();
    //fixBug() won't run.because we made it into employee class

    susan.work();
    susan.prepareLesson();

}
