#include<iostream>
#include <string>
using namespace std;
main(){
	char t;
	int ok=0;
	while(scanf("%c",&t)==1){
		if(t=='"' && ok){
			cout<<"''";
			ok=0;
		}else if(t=='"' && ok==0){
			cout<<"``";
			ok=1;
		}else cout<<t;
	}
}
