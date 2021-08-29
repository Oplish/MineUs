#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main() {
	char fos[207];
	int a[243];
	int f=0;
	gets(fos);
	for(int i=0; i<276; i++) {
		if(fos[i]==' ') {
			a[f]=fos[i];
			f++;
		}
	}
	int ol=f;
	f=0;
	int lp=strlen(fos);
	for(int i=0;i<lp;i++){
		if(fos[i]==' '){
			if(fos[i+1]==' '){
				continue;
			}
		}
		cout<<fos[i];
	}
}
