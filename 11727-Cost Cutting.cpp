#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,i=1; cin>>t;
	while(t--){
		int a,b,c; cin>>a>>b>>c;
		cout<<"Case "<<i++<<": ";
		if((a>b && a<c) || (a>c && a<b)) cout<<a<<endl;
		else if((b>a && b<c) || (b>c && b<a)) cout<<b<<endl;
		else cout<<c<<endl;
	}
	return 0;
}
