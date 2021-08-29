#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char fos[276];
	gets(fos);
	char s,a;
	cin>>s>>a;
	for(int i=0;i<276;i++){
		if(fos[i]==s) fos[i]=a;
	}
	cout<<fos;
}
