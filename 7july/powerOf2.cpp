#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int ans=1,i,n,c;
    cin >> n;

    for(i=0 ; i <= 30 ;i++)
    {
        if(ans == n)
        {
           c=1;
        }
        ans=ans*2;
    }
    if(c==1)
    cout << "true"<<endl;
    else
    cout << "false"<<endl;
    

}