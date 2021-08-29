#include<iostream>
#include<cstdio>
#define rg register
#define ll long long
using namespace std;
inline void read(int x){
	int f=1;
	char ch=getchar();
	x=0;
	while(ch<'0'||ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	x=x*f;
}
bool judge(int k){
	for(int i=2;i<k;i++){
		if(k%i==0) return false;
	} 
	return true;
}
int main(){
	int i;
	for(int i=100;i<=999;i++){
		if(judge(i)&&((i/100)==(i%10))) printf("%d\n",i);	}
	return 0;
} 
