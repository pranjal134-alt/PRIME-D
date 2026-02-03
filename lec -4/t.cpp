#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int rev = 0;
    while (a != 0)
    {
        int k = a % 10;
        rev = rev + k;
        a = a / 10;
    }
    cout << abs(rev);
    return 0;
}