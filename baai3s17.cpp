#include<stdio.h>
#include<string.h>
#include<ctype.h>
void input(char *m);
void reverse(char *m,int *length,char *reverseString);
void word(char *m,int *length);
void compare(char *m);
void upItem(char *m, int *length);
void change(char *m);
int main(){
	int choice = 0;
	char m[100];
	char reverseString[100];
	int length;
	do{
		printf("----MeNu----\n");
		printf("1.Nhap vao chuoi\n");
		printf("2.In ra chuoi dao nguoc\n");
		printf("3.Dem so luong tu trong chuoi\n");
		printf("4.Nhap vao 1 chuoi bat ki va so sanh voi chuoi ban dau\n");
		printf("5.In ra tat ca chu in hoa\n");
		printf("6.Nhap vao chuoi khac va thay the chuoi do vao chuoi ban dau\n");
		printf("MOI BAN NHAP LUA CHON CUA MINH: \n");
		scanf("%d",&choice);
		fflush(stdin);
		switch (choice){
			case 1:
				input(m);
				break;
			case 2:
				reverse(m,&length,reverseString);
				break;
			case 3:
				word(m,&length);
				break;
			case 4:
				compare(m);
				break;
			case 5:
				upItem(m,&length);
				break;
			case 6:
				change(m);
				break;
		}
	}while(choice!=7);
}
void input(char *m){
	printf("Moi ban nhap chuoi: ");
	fgets(m,100,stdin);
}
void reverse(char *m,int *length,char *reverseString){
	
	*length = (int) strlen(m);
	for(int i = 0;i<*length;i++){
		*(reverseString + i) = *(m + *length -1 - i);
	}
	printf("chuoi dao nguoc la : %s\n",reverseString);
}
void word(char *m,int *length){
	int cout = 1;
	*length = (int) strlen(m);
	for(int i = 0;i<*length;i++){
		if(*(m+i)==' '){
			cout++;
		}
	}
	printf("so luong tu cua chuoi ban vua nhap la : %d\n",cout);
}
void compare(char *m){
	int len;
	char m2[100];
	printf("moi ban nhap 1 chuoi so sanh: \n");
	fgets(m2,100,stdin);
	if(strcmp(m,m2)==0){
		printf("Hai chuoi bang nhau\n");
	}else{
		printf("hai chuoi khac nhau\n");
	}
}
void upItem(char *m, int *length){
	*length=(int)strlen(m);
	for(int i =0;i < *length;i++){
		*(m+i) = toupper(*(m+i));
	}
	printf("chuoi da duoc in hoa la : %s\n",m);
}
void change(char *m){
	char m3[100];
	printf("moi ban nhap chuoi muon thay the :  \n");
	fgets(m3,100,stdin);
	strcat(m,m3);
	printf("chuoi ban  thay la %s",m3);
}
























