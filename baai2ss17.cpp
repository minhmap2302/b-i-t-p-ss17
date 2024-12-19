#include<stdio.h>
#include<string.h>
void input(int *a,int *length);
int main(){
	int a[100];
	int choice;
	int length;
	do{
		printf("------MENU----\n");
		printf("1.Nhap vao so phan tu va tung phan tu\n");
		printf("2.In ra cac phan tu la so chan\n");
		printf("3.In ra cac phan tu la so nguyen to\n");
		printf("4.Dao nguoc mang\n");
		printf("5.Sap xep mang (Khi chon thi menu con hien thi)\n");
		printf("6.Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
		printf("Moi Ban Nhap Lua Chon Cua Minh\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				input(a,&length);
				break;
		}
	}while(choice!=7);
	return 0;
}
void input(int *a,int *length){
	printf("moi ban nhap so phan tu de tao mang: \n");
	scanf("%d",&*length);
	for(int i = 0;i<*length;i++){
		printf("moi ban nhap tung phan tu a[%d]: ",i);
		scanf("%d",&*(a+i));
	}
}
