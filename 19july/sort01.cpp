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
void sortone(int a[],int n)
{
    int left = 0;
    int right = n-1;
    int step = 0;
    while(left < right)
    {
        cout<< "step-"<<step++<<endl;
        printarray(a,n);
        while(a[left] == 0 && left<right)
        {
            left++;
        }
        while(a[right] == 1 && left<right)
        {
            right--;
        }
        if(left<right)
        {
            swap(a[left],a[right]);
        } 
    }
   
}



int main()
{
    int arr[8]={1,0,0,1,1,0,0,0};

    printarray(arr,8);
    sortone(arr,8);
    cout<<"sorted array:"<<endl;
    printarray(arr,8);

}