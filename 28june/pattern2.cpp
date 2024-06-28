#include<iostream>
using namespace std;
int main(){
    int i,j,n,count=1;
    cout << "Enter the number of rows:"<<endl;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        int value=i;
        for(j=1;j<=i;j++)
        {
            // cout << "*";
            // cout<< i;
            // cout << j;

            // cout << count << " ";
            // count++;

            cout << value;
            value++;
            

        }
        cout<<endl;
            count--;
    }
}
