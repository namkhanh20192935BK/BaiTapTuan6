#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int FS(int n){
    if (n < 0) 
        return 0;
    if(n == 0) 
        return 1;
    if(n==1)
    	return 2;
    if(n>1)
        return FS(n-1) + FS(n-2);
};
char *ToUpper(char *c){
	int n=strlen(c);
	for(int i=0;i<n;i++)
		if(c[i]>=97)
			c[i]-=32;
	return c;
}
char *Dec2Bin(int x){
	int i;
	char *b=new char;
	while(x!=0){
		b[i]=x%2 + '0';
		++i;
		x=x/2;
	} 
	delete b;
	return b; 
}
void Freq(const char *s){
	int n=strlen(s);
	char c[n];
	strcpy(c,s);
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=1;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
			if(c[i]==c[j]){
				strcpy(&c[j],&c[j+1]);
				n--;
				j--;
				++a[i];	
			}
		}
	for(int i=0;i<n;i++)
		cout<<"Ki tu "<<c[i]<<" co so lan xuat hien la "<<a[i]<<endl; 
}
int main(){
	for(int i=0;i<5;i++)
		cout<<FS(i)<<" ";
	int x=10;
	char d[]="NNN Khanh 20192935";
	cout<<"\n"<<ToUpper(d)<<endl;
	Freq(d);
	cout<<Dec2Bin(x);
}



