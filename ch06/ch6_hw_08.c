#include<stdio.h>
int main(){
	int a ,b;
	//printf("Enter number of days in month: \n");
	scanf("%d",&a);
	//printf("Enter starting day of the week (1=Sun, 7=Sat): \n");
	scanf("%d",&b);
	for(int i=1;i<b;++i){
        printf(i==1?"  ":"   ");
    }
    for(int i=1;i<=a;++i){
        if(i % 7 == (9-b)%7){
            printf("%2d", i);
        }else{
            printf("%3d", i);
        }
        if(i % 7 == (8-b)%7){
            printf("\n");
        }
    }
    return 0;
}