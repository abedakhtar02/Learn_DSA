#include<iostream> 
using namespace std;
int main() {
   /* int a,b;
    cout<<"Enter the value of a and b"<<endl;

    cin>>a;
    cin>>b;
    if(a>b)
    cout << "a is greater than b"<<endl;
    // if(b>a)
    else
    cout << "b is greater than a"<<endl;

int a ;
cout << "Enter a number" << endl;
cin >> a;
if(a>0)
cout << "a is positive";
else if(a<0)
cout << "a is negative";
else if(a==0)
cout << "a is zero";

int i=0,sum=0,n;
cout << "Enter number" << endl;
cin >> n;
while(i<=n)
{
    sum+=i;
    i++;
}
cout << "Sum is :" << sum << endl;
***CheckPrime***
int n , i = 2,c;
cout << "Enter number to check prime or not" << endl;
cin >> n;
while(i<n)
{
    if(n%i!=0 )
        c=0;
    else
    {
        c=1;
        break;
    }
    i++;
}
if(c!=0)
cout << "not prime";
else 
cout << "prime";
*/
// ***Pattern***

int n,i=1;
cout <<"enter the number of rows" << endl;
cin >> n;
while(i<n)
{
    int j=i;
    while(j<n){
    cout <<n-j;
    j++;
    }
    cout<<endl;
    i++;
}



}