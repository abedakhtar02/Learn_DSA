#include<iostream>
using namespace std;
int main(){
    int row=1,n;

    cout<<"enter the number of rows:"<<endl;
    cin >> n;
    
    for(row=1;row<=n;row++)
    {
        int space = row -1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int col = n;
        while(col >= row)
        {
            cout<<"*";
            col--;
        }
        cout<<endl;
    }

}