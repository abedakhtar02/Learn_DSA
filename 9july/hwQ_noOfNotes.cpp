#include<iostream>
using namespace std;
int main()
{
    int n,v;
    cout<<"Input the amount:"<<endl;
    cin >> n;

    cout << "enter the note value" <<endl;
    cin >> v; 

    switch(v)
    {
        case 100 : cout<<(n/100) << endl;
                    n = n%100;
        case 50 : cout<<(n/50) << endl;
                    n = n%50;
        case 20 : cout<<(n/20) << endl;
                    n = n%20;
        case 1 : cout<<(n/1) << endl;
                    n = n%1;
                    break;
        default : cout <<"note value invalid"<<endl;
    }

}