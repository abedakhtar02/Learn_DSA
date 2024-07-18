#include<iostream>
using namespace std;
int Isunique(int a[],int n)
{
    int element=0;
    for(int i=0;i<n;i++)
    {   
        element = element ^ a[i];
    }
    return element;
}
int main()
{
    int n,a[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
        cout<<"input array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int element = Isunique(a,n);
    cout << element << endl;
}