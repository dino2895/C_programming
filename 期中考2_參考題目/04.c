#include<stdio.h>
#include<string.h>
int main(){
	char arr[200];
	int shift,leng=0;
	int c;
	printf("Enter message to be encryped: ");
	gets(arr);
	printf("Enter shift amount(1-25): ");
	scanf("%d",&shift);
	leng = strlen(arr);
	for (int i=0;i<leng;i++){
		if (arr[i]>64&&arr[i]<92||arr[i]>96&&arr[i]<124)
			if (arr[i]+shift>91&&arr[i]+shift>123)
				printf("%c",arr[i]+shift-26);
			else
				printf("%c",arr[i]+shift);
		else 
			printf("%c",arr[i]);
	}
}