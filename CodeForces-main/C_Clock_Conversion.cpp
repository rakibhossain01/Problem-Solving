#include<bits/stdc++.h>
using namespace std;
 
string CTime(string t1) {
    int h=stoi(t1.substr(0,2));
    string p = h<12 || h==24 ? "AM" : "PM";
 
    if(h==0){
        h=12;
    }
    else if(h>12){
        h-=12;
    }
 
    string s=h<10?"0"+to_string(h):to_string(h);
 
    return s+t1.substr(2,3)+" "+p;
}
 
int main() {
    int t;
    cin>>t;
 
    for(int i=0;i<t;i++) {
        string t1;
        cin >> t1;
 
        string time = CTime(t1);
        cout << time << endl;
    }
 
    return 0;
}
