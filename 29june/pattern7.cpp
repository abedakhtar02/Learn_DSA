#include<iostream>
using namespace std;
int main(){
    int row=1,n;

    cout<<"enter the number of rows:"<<endl;
    cin >> n;

    for(row=1;row<=n;row++)
    {
         char ch ='A' + row - 1;
        for(int col=1;col<=n;col++){
          
           cout<< ch;
           ch++;

        }
        cout<<endl;
      
    }
}