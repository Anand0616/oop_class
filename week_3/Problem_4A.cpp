#include <iostream>
using namespace std;
//https://codeforces.com/problemset/problem/4/A
int main()
{
    int weight{100};
    cout << "Give the weight of a watermelon: ";
    cin >> weight;
    if(weight <= 100)
    {
        if(weight == 2)
        {
            cout << "NO\n";
        }
        else if(weight % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "Exceeds the amount\n";
    }
}
