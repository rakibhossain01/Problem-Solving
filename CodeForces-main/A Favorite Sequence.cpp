#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,j=0;
		cin>>n;
		int a[n],s=0;

		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(n<=2){
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else if(n%2==0){
			for(int i=1;i<=(n/2);i++){
				cout<<a[i]<<" "<<a[n-(i-1)]<<" ";
			}
			cout<<endl;
		}
		else{
			for(int i=1;i<=(n/2);i++){
				cout<<a[i]<<" "<<a[n-(i-1)]<<" ";
				s = a[(n/2)+1];
			}
			cout<<s<<endl;
		}
		
	}
	return 0;
}
