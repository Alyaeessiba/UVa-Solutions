#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	while(cin>>t && t){
		int n,m; cin>>n>>m;
		while(t--){
			int x,y; cin>>x>>y;
			if(x==n || y==m) cout<<"divisa";
			else{
				if(x>n){
				if(y>m) cout<<"NE";
				else cout<<"SE";
				}
				else{
					if(y>m) cout<<"NO";
					else cout<<"SO";
				}
			}cout<<endl;
		}
	}
	return 0;
}
