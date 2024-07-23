#include<iostream>
using namespace std;

// using Linear search
//edge case not covered

void FandL_occurance(int a[],int n,int k)
{
    int j;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            j=i;
            while(a[i]==k)
            {
                i++;
            }
            cout<< j <<" and " << i-1;
            break;
        }    
    }
}
int main()
{
    int a[9]={1,2,4,5,5,5,5,5,6};
    
    FandL_occurance(a,8,5);

}