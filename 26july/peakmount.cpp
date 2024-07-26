#include<iostream>
using namespace std;

int peakelement(int a[],int n)
{
    int s = 0,
    e = n-1,mid;
    while(s<e)
    {
        mid = s + (e-s)/2;
        if(a[mid]<a[mid+1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main()
{
    int a[5]={0,6,5,4,1};

    int p = peakelement(a,5);
    cout << "Peak element is at index " << p << endl;
}