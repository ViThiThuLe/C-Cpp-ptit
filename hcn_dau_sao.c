#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d%d",&a,&b);
	for(i=1; i<=b; i++){
		for( j=1;j<=a;j++){
			if(i==1 || i==b || j==1 || j==a) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
