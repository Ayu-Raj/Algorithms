#include <stdio.h>
void main() {
	int i,j,mid,k;
	int n;
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",arr[i]);
	mid = 3;
	for (i=0;i<n-1;i++){
		for(j=0;j<n-i-1-mid;j++){
			if(arr[j]>arr[j+1])
			swap(&arr[j], &arr[j+1]);
		}
		for(j=mid;j<n-i-1;j++){
			if(arr[j]<arr[j+1])
			swap(&arr[j], &arr[j+1]);
		}
	}
	for(k=0;k<n;k++){
		printf("%d\n", arr[k]);
	}

}
void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  
  
