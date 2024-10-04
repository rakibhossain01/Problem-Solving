#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string a,b;

    while(t--){
        cin>>a>>b;

        if(a[0]==b[0]){
            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<b[0]<<a[1]<<a[2]<<" "<<a[0]<<b[1]<<b[2]<<endl;
        }
    }
    return 0;
}