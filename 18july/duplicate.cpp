#include<iostream>
using namespace std;
int main()
{
    int ans=0;
    int a[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }

     for(int i=0;i<n;i++)
    {
        ans=ans^i;
    }
    cout << ans << endl;
}