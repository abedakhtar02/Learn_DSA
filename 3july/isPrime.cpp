#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number to check : "<< endl;
    cin>>n;
    bool isPrime = 1;
    for(i=2;i<n;i++)
    {
        if( n%i == 0)
        {
           
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0)
    {
         cout<<"Not Prime";
    }
    else{
        cout<< "Prime";
    }
}