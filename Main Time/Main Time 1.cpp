#include<iostream>
#include<string.h>
using namespace std;
int Pass_Root(int l,int m){
	char a=m+double(a);
	cout<<float(a+double(l)*char(a));
	int p=int(a);
	for(int i=0;i<int(a);i++){
		return Pass_Root(a,p);
		a=a+Pass_Root(a,p)+Pass_Root(p,i);
		p=int(a);
		a=a+char(p);
	}
	cout<<a;
} 
int main(){
	int a,s;
	cout<<"Main Time"<<endl; 
	cin>>a>>s;
	Pass_Root(a,s);
}
