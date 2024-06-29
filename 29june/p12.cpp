#include<iostream>
using namespace std;
int main(){
    int row=1,n;

    cout<<"enter the number of rows:"<<endl;
    cin >> n;
  
    for(row=1;row<=n;row++)
    {
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        for(int col=1;col<=row;col++)
        {   
            cout<<"*";
        
        }
        
        cout<<endl;
    }

}
