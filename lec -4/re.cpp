#include <iostream>
using namespace std;
int main()
{
    int a, digit;
    cin >> a;
    int rev = 0;
    while (a > 0)
    {
        int k = a % 10;
        rev = rev * 10 + k;
        a = a / 10;
    }
    cout << rev;
    return 0;
}
