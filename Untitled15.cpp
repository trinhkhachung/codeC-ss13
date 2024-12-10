#include <stdio.h>

int main (){
	int n,i,choice,count;
	int arr[100];
	int currentIndex = 0;
	do{
		printf("**********MENU**********\n");
		printf("1.nhap so phan tu va cac phan tu\n");
        printf("2.in ra mang\n");
        printf("3.them 1 phan tu vao vi tri chi dinh\n");
        printf("4.sua 1 phan tu o vi tri chi dinh\n");
        printf("5.xoa 1 phan tu o vi tri chi dinh\n");
        printf("6.xap xep cac phan tu\n");
        printf("7.tim kiem phan tu\n");
        printf("8.thoat\n");
        printf("nhap lua chon ");
        scanf("%d", &choice);
        switch (choice){
        	
        case 1: 
        	
        	printf("Nhap so phan tu cua mang ");
            int n;
            scanf("%d", &n);
            if ((n + currentIndex) > 100)
            {
                printf("loi khong hop le");
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    printf("arr[%d]=", currentIndex);
                    scanf("%d", &arr[currentIndex]);
                    currentIndex++;
                }
            }
            break;
        case 2:
            for (int i = 0; i < currentIndex; i++){
                printf("arr[%d]=%d\n", i, arr[i]);
            }
            break;
		}
	}while(choice!=8);
}
