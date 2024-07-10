#include<iostream>
using namespace std;

void printCounting(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"\t";
    }
}

int main()
{
    int n;
    cin>>n;

    printCounting(n);

}