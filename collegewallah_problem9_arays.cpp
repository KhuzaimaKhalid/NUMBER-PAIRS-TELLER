#include<stdio.h>

int main()
{
	printf("\t NUMBER PAIRS TELLER \n ");
	int arr[8] = {1,2,3,4,5,6,7,8};
	int n,count = 0;
	printf("\nEnter the number: ");
	scanf("%d", &n);
	for(int i = 0; i < 8; i++){
		for(int j = i+1; j < 8; j++){
			if(arr[i] + arr[j] == n){
				count++;
				printf("(%d,%d)\n", arr[i],arr[j]);
				
			}
		}
	}
	
	printf("The total no of pairs is %d \n", count);
	
	return 0;
}
