#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		n=(n*63+7492)*5-498;
		cout<<abs((n%100)/10)<<endl;
	}
	return 0;
}
