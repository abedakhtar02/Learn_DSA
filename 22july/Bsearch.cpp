#include<iostream>
using namespace std;
int Bsearch(int a[],int n,int key)
{
    int low = 0,
    high = n-1,
    mid;

    for(int i=0;i<n;i++)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int a[10]={2,3,6,9,12,23,45,56,78,89},key;

    cout<<"enter the element to be searched"<<endl;
    cin >> key;

    int p = Bsearch(a,10,key);
    if(p==-1)
        cout << "not found" << endl;
    else 
        cout << "found at index :" << p << endl;
}