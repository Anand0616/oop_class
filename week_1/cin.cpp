
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b = 10;
    cout << "guess my number. it is in range og 1 through 10.  ";
    cin >> a;
    if (a == b) {
        cout << "You are right";
    }
    else {
        cout << "Wrong one";
    }
}
