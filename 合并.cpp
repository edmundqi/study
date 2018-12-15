#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
extern char *strdog(char *dest,char *src){
	int a=0,b=0,c=0;
	printf(" dest:	%s\n",dest);
	printf(" src : %s\n",src);
	while(dest[a]!='\0'){
		a++;
	} 
	while(src[b]!='\0'){
		b++;
	} 
	for(int i=a;i<b+a;i++){
		dest[i]=src[c];
		c++;
	}
	dest[b+a]='\0';
	printf(" dest:	%s\n",dest);
	
	return dest;
	//while(dest[a]v)
}
int main(){
	int o,h, y,e,s;
	o=0;
	h=0;
	char t,m,p;
	char a[150],b[150],c[300];
	
	memset(a,150,0);
	memset(b,150,0);
	memset(c,150,0); 
	//\n
	gets(a);
	gets(b);
	strdog(a,b);
	printf("%s",a);
	return 0;
} 
