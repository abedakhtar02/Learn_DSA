#include<iostream>
using namespace std;
int main(){
    int i,n,f,s,t;
    cout << "enter the number of terms"<<endl;
    cin >> n;
    f=0;
    s=1;
    t=f+s;
    cout << f<<" "<<s;
    for(i=0;i<=n;i++)
    {
        cout << " " << t <<" ";
        f=s;
        s=t;
        t=f+s;
    }
}