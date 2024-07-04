// YE TO HAI EK TARIKA 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     int f;
//     for (int i = 1; i <=n/2; i++)
//     {
//         if (n % i == 0)
//         {

//             f = i;
//         }
//     }
//     cout << f << endl;
// }


// USING BREAK WE CAN ALSO SOLVE THIS
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    for (int i = n/2; i >=1; i--)
    {
        if (n%i==0)
        {
            cout<<i<<" ";
            break;
        }
        
    }
    
}