#include<iostream>
#include<string.h>
using namespace std;
int Oplish(char Sort[76]){
	int a=strlen(Sort);
	for(int i=a-1;i>=0;i--){
		cout<<Sort[i];
	}
}
int main(){
	char Fn[76];
	cin>>Fn;
	Oplish(Fn);
}
