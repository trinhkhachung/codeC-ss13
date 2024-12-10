#include <stdio.h>
   void processNumbers(int n){
   	 printf ("giai doan:tinh tong \n");
		int sum=0,temp=n;
		while (temp != 0) {
        sum += temp % 10;
        temp /= 10; 
    }
		printf ("tong cac chu so cua %d la %d\n",n,sum);
   } 
   int main(){
   		int numbers;
		   printf ("nhap so nguyen: ");
		   scanf ("%d",&numbers);
		   processNumbers;
		   return 0;   
   } 
