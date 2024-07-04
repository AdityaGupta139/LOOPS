// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int count=0;
//     while (n>0)
//     {
//         n=n/10;
//         count++;
//     }
//     cout<<count;

// }

#include <iostream>

using namespace std;
int main()
{
    int n;
    int i;
    cout << "Enter the Number: ";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        if (n > 0)
        {
            n = n / 10;
        }
    }

    cout << "\nTotal Digits = " << i;
    cout << endl;
    return 0;
}