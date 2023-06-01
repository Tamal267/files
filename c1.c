#include<stdio.h>
int main(){
	int n = 3;
	int arr[n][n] = {1,2,3,4,5,6,6,7,8};
	for(int *i = arr[n]; i != arr + n; i++){
		for(int *j = *i; j != *i + n; j++){
			printf("%d ", *j);
		}
		printf("\n");
	}
}
