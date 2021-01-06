#include<stdio.h>
int main(){
	int b=0,balance=1000;
	char a;
	scanf("%c",&a);
	scanf("%d",&b);
	while(a!='E'){
		switch(a){
			case 'A':
				if (b>balance){
					printf("error\n");
					break;
				}
				else{
					balance = balance-b;
					break;
				}
			case 'B':
				balance = balance+b;
				break;
			case 'C':
				printf("%d\n",balance);
				break;
		}
		scanf("%c",&a);
		if(a=='A'||a=='B')
			scanf("%d",&b);
	}
}