#include<iostream>
using namespace std;
int main(){
	int n,s1=1,s2=1,a,b,s;
	s=0;
	cin>>n;
	cin>>a>>b;
	for(int i=1;i<=n;i++){
		if(s1==a+1) s1=1;		
		if(s2==b+1) s2=1;		
		if(s1==s2) s++;		
		s1++;
		s2++;
		
	}
	cout<<s;
}