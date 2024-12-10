#include <stdio.h>
int findMaxValue() {
	int arr[]=0;
	int size;
	int max=arr[0];
	int i; 
	for (i=0;i<size;i++){
		if (arr [i]>max ){
			max =arr[i] ;
		}
	} 
	 return max; 
}
int main (){
	int numbers[]={5,3,9,6,1};
	int numbers2[]={1,2,3,4}; 
	int size = sizeof(numbers)/sizeof (int); 
	printf ("phan tu lon nhat trong mang la %d\n",findMaxValue(numbers,size));
	printf ("phan tu lon nhat trong mang la %d",findMaxValue(numbers2,4)); 
	return 0; 
} 

