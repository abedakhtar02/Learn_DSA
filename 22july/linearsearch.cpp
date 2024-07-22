#include<iostream>
using namespace std;
int Lsearch(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i] == key)
        {
            return 1;
        }
    } 
    return -1;
}
int main()
{
    int a[6]={2,3,6,23,-5,4},key;

    cout<<"enter the element to be searched"<<endl;
    cin >> key;

    int p = Lsearch(a,6,key);

    if(p==1)
    cout<<"Found"<<endl;
    else
    cout<<"Not Found"<<endl;
}