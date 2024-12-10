#include <stdio.h>

int findMaxNumbers(int arr[],int size){
	int max = arr[0];
	for(int i = 0; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int numbers [] = {1,2,3,4,55,3,9};
	int size = sizeof(numbers)/sizeof(int);
	printf("so lon nhat trong mang la %d",findMaxNumbers(numbers,size));
}
