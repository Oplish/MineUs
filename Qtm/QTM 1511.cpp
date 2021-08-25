#include<iostream>
using namespace std;
int main(){
    int Minecraft;
    cin>>Minecraft;
    int a,s,d,f,h;
    a=Minecraft/10000;
	s=Minecraft%10000/1000;
    d=Minecraft%1000/100;
    f=Minecraft%100/10;
    h=Minecraft%10;
    if(a==5||s==5||d==5||f==5||h==5){
    	cout<<a+s+d+f+h;
	}
	else cout<<Minecraft;
}