#include<iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r)
{
    int ans = fact(n)/(fact(r)* fact(n-r));
    return ans;
}

int main()
{
    int fact,n,r;

    cout<<"n and r"<<endl;
    cin>>n>>r;

    cout<< "nCr = "<< nCr(n,r) <<endl;

}