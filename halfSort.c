#include <stdio.h>
void main() {
	int i,j,mid,k;
	int arr[6] = {5,2,6,3,9,1};
	mid = 3;
	for (i=0;i<6-1;i++){
		for(j=0;j<6-i-1-mid;j++){
			if(arr[j]>arr[j+1])
			swap(&arr[j], &arr[j+1]);
		}
		for(j=mid;j<6-i-1;j++){
			if(arr[j]<arr[j+1])
			swap(&arr[j], &arr[j+1]);
		}
	}
	for(k=0;k<6;k++){
		printf("%d\n", arr[k]);
	}

}
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
