#include<iostream>
using namespace std;
int main(){
    int row=1,n;

    cout<<"enter the number of rows:"<<endl;
    cin >> n;
    char ch ='A';
    for(row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {   
            cout<< ch;
            ch++;
        }
        
        cout<<endl;
    }

}
