#include <stdio.h>
int findMaxNumbers(int arr[],int size){
	int max = arr[0];
	for (int i = 0; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int numbers[] = {2,4,6,33,1,9};
	int size = sizeof(numbers)/sizeof(int);
	printf("so lon nhat trong mang la %d",findMaxNumbers(numbers,size));
}
