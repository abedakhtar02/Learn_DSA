#include<iostream>
using namespace std;
#include<conio.h>

void reverse(int a[], int n)
{
    int start = 0;
    int end = n;

    for (int start = 0, end = n - 1; start <= end; start++,end--)
    {
        swap(a[start],a[end]);
    }
    cout << "reversed array is:" << endl;
      for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{

    int a[10], n;
    cout << "enter the number of elemnts" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    reverse(a, n);
}