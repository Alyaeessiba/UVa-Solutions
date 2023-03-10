#include<bits/stdc++.h>
using namespace std;

int main(){
	string n; int i=1;
	while(cin>>n){
		if(n=="#") break;
		cout<<"Case "<<i++<<": ";
		if(n=="ZDRAVSTVUJTE") cout<<"RUSSIAN"<<endl;
		else if(n=="HELLO") cout<<"ENGLISH"<<endl;
		else if(n=="HOLA") cout<<"SPANISH"<<endl;
		else if(n=="HALLO") cout<<"GERMAN"<<endl;
		else if(n=="BONJOUR") cout<<"FRENCH"<<endl;
		else if(n=="CIAO") cout<<"ITALIAN"<<endl;
		else cout<<"UNKNOWN"<<endl;
	}
	return 0;
}
