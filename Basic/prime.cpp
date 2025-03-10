// A Prime Number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
// We can check whether the number is prime or not by iterating in the range from 1 to n.
// If there are more than 2 divisor (including 1 and n) then the given number n is not prime, else n is prime.
// This method is known as trial division method.
// The trial division approach can be further optimized by checking for divisors only up to the square root of the number
// Because, �The smallest factor of a number greater than one cannot be greater than the square root of that number.�
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "This is not a prime number" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "This is not a prime number" << endl;
            return 0; // Exit immediately if a factor is found
        }
    }

    // If no factors were found, it's prime
    cout << "This is a prime number" << endl;

    return 0;
}
