#include<iostream>
using namespace std;

int search(int a[], int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return 1;
        }
    }   
    return -1;
}

int main()
{
    int s,i, n,a[10],key;
    cout << "enter the number of elements" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element to be searched" << endl;
    cin >> key;
    s = search(a,n,key);

    if(s==1)
    {
        cout<< "Found"<< endl;
    }else
    {
        cout << "Not Found" << endl;
    }
}