#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        if (ld%2!=0)
        {
            continue;
        }
        sum = sum + ld;
        
        
    }
    cout << sum;
}
