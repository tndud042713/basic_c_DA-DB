#include<stdio.h>

int main(){  
	int i, j, k;
	for(i=1; i<=3; i++){
		for(k=i; k<3; k++){
			printf(" ");
		}
		for(j=1; j<=i*2-1; j++){
		printf("*");
		}
	 printf("\n");
	}
	return 0;
}
