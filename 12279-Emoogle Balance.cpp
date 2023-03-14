#include<iostream>
using namespace std;
main(){
	int t,i=1; 
	while(cin>>t && t!=0){
		int c=0;
		while(t--){
			int a; cin>>a;
			if(a==0) c--;
			else c++;
		}
		cout<<"Case "<<i<<": "<<c<<endl; i++;
	}
}
