#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        cout<<a[(n-1)-i]<<" ";
    }

    return 0;
}
