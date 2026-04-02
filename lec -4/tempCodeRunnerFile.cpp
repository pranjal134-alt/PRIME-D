#include <iostream>
using namespace std;
int main()
{
    int n, k,gcd;
    cin >> n >> k;
    for (int i = 1; i <= n && i <= k; i++)
    {
        if (n % i == 0 && k % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
    return 0;
   
}