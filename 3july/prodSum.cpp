#include<iostream>
using namespace std;
int main()
{
    int n ,digit ,prod=1 ,sum=0;
    cout<<"Enter the number : "<< endl;
    cin>>n;

    while(n!=0)
    {
        digit = n % 10;

        prod = prod * digit;
        sum = sum + digit;
        
        n = n/10;
    }
    int ans = prod - sum;
    cout << ans << endl;
}