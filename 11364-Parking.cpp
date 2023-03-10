#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,max=0,min=0,x; cin>>n;
		
		cin>>x; max=min=x;
		n--;
		
		while(n--){
			cin>>x;
			if(x>max) max=x;
			if(x<min) min=x;
		}
		cout<<(max-min)*2<<endl;
	}
	return 0;
}
