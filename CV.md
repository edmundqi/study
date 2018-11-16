#### Name
La
#### hobit
sleep
#### time
| time   |     thing      |
|----------|:-------------:|
| 7:30-7:45| sleeping|
| 7:46 | wake up |
| rest of the time | play|
#### connect
[Gethub](https://github.com/edmundqi)

![我的图片](md.jpg "图片的样例")

```cpp
#include<cstdio>
int main(){
	char a;
	int sum=0;
	while(a!='\n'){
		scanf("%c",&a);
		if(a==' '){
			sum--;
		}
		sum++;
	}
	printf("%d",sum-1);
	return 0;
} 

```