#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j;

    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout<< "Entered array:"<<endl;
    for(i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    for(i=0,j=i+1;i<n;i+=2,j+=2)
    {
        if(j<n)
        {
        swap(a[i],a[j]);
        }
    }
    for(i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
}