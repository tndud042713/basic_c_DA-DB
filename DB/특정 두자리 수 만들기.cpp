#include<stdio.h>

int main(){
	int a,b,c,cnt=0;
	scanf("%d",&c);
	for(a=1;a<=c/10;a++){
		for(b=1;b<=a;b++){
			if(a<=b)
			continue;
			if(10*a+b>c)
			break;
			printf("%d\n",10*a+b);
			cnt++;
		}	
	}
	printf("%d\n",cnt);
	return 0;
}
