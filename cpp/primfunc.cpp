#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}
bool isPossible(int N)
{
    if (isPrime(N) && isPrime(N - 2))
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout<<"Enter element: ";
    cin>>n;

    if(isPossible(n))
    {
        cout<<"Yes, "<<n<<" can be expressed as sum two prime numbers";
    }
    else
    {
        cout<<"No, it can't be";
    }
}
