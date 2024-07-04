#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i == 13 || i == 93)continue;

        cout << i << " ";
    }
}