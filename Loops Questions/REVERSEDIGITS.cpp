#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    int a=n;
    int rev=0;
    int sum=0;
    while (n!=0)
    {
        int ld=n%10;
        n/=10;
        rev=rev*10+ld;
        sum=rev+a;
    }
    
cout<<"Reverse of number is:"<<rev<<endl;
cout<<"Sum of the reverse and Number input by the user is:"<<sum;

}