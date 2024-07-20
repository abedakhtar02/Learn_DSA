#include<iostream>
using namespace std;
void printarray(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< a[i] << " ";
    }
    cout<< endl;
}
void sort012(int a[],int n)
{
    int i = 0;
    int j=n-1;
    int step = 0;
    while(i<j)
    {
        cout<<"Step-"<<step++<<endl;
        printarray(a,n);
        while(a[i]==0 && i<j)
        {
            i++;
        }
        while(a[j]==1 || a[j]==2 && i<j)
        {
            j--;
        }
        //if(a[i]==1 || a[i]==2 && a[j]==0)
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }

cout<<"//sorting 1's and 2's"<<endl;

    j=n-1;
    while(i<j)
    {
        cout<<"Step-"<<step++<<endl;
        printarray(a,n);
        while(a[i]==1 && i<j)
        {
            i++;
        }
        while(a[j]==2 && i<j)
        {
            j--;
        }
        //if(a[i]==1 or a[i]==2 and a[j]==0)
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
}

int main()
{
    int a[10]={0,1,1,0,2,2,0,2,1,1};
    printarray(a,10);
    sort012(a,10);

    cout<<"sorted array:"<<endl;
    printarray(a,10);
}