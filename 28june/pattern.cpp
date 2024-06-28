#include<iostream>
using namespace std;
int main(){
    int i,n,j,count = 1;;
    cout <<"Enter number of rows" << endl;
    cin >> n; 
    for(i=1 ; i<=n ; i++)
    {
        // for(j=1;j<=n;j++)
        // {
        //     // cout<<j;
        //     // cout<< "*";
        //     // cout<<n-j+1;
        //     // cout<<i;
            
        // }
        j=1;
        while(j<=n)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
    }
}