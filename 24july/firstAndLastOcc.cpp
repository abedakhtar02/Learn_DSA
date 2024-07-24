#include<iostream>
using namespace std;
int firstOcc(int a[],int n,int k)
{
    int low = 0,
    high = n-1,
    ans = -1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==k)
        {
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]>k)
        {
            high=mid-1;
        }
          else if(a[mid]<k)
        {
            low=mid+1;
        }
    }
    return ans;
}
int lastOcc(int a[],int n,int k)
{
    int low = 0,
    high = n-1,
    ans = -1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==k)
        {
            ans=mid;
            low=mid+1;
        }
        else if(a[mid]>k)
        {
            high=mid-1;
        }
          else if(a[mid]<k)
        {
            low=mid+1;
        }
    }
    return ans;
}
int main()
{
    int a[9]={1,2,5,5,5,5,5,5,6};

    int p = firstOcc(a,9,5);
    cout << "First Occurence is at " << p << "index" << endl;
    cout << "Last Occurence is at " << lastOcc(a,9,5) << "index" << endl;
    
}