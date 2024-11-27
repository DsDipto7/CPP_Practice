// This program will take a number and print a multiplication table
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number :" << endl;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << "*" << i << " = " << n * i << endl;
        
    }
}
