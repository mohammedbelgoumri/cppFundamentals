#include <bits/stdc++.h>
#include<math.h>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[])
{
    int x;
    cout << "Enter a number" << endl;
    cin >> x;
    bool isPrime = true;
    int factor = 2;
    while (factor <= sqrt(x))
        {
            int quotient = x / factor;
            if (factor * quotient == x)
            {
                cout << "Found factorization " << factor << " * " << quotient << endl;
                isPrime = false;
                break;
            } 
            factor++;
        } 
        cout << x;
        if(isPrime) cout << " is a prime number" << endl;
        else cout << " is not a prime number" << endl;
    return EXIT_SUCCESS;
}