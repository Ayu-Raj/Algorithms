// Time complexity : O(N)
#include <stdio.h>
#include<string.h>
void main() {
	int n,c,k,space=1;
	n=10;
	space = n-1;
	for(k=1;k<=n;k++){
		for(c=1;c<=space;c++)
		printf(" ");
		space--;
		for(c=1;c<=2*k-1;c++)
		printf("*");
		printf("\n");
	}
	space =1;
	for(k=1;k<=n-1;k++){
		for (c=1;c<=space;c++)
		printf(" ");
		space++;
		for(c=1;c<=2*(n-k)-1; c++)
		printf("*\n");
		
	}
}
