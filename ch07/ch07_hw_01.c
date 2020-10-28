#include<stdio.h>
int main(){
	char ch;
	printf("Enter phone number: ");
	while (ch != '\n'){
		ch = getchar();
		switch(ch){
			case 65 ... 67:
				printf("2");
				break;
			case 68 ... 70:
				printf("3");
				break;
			case 71 ... 73:
				printf("4");
				break;
			case 74 ... 77:
				printf("5");
				break;
			case 78 ... 80:
				printf("6");
				break;
			case 81 ... 83:
				printf("7");
				break;
			case 84 ... 86:
				printf("8");
				break;
			case 87 ... 89:
				printf("9");
				break;
			default:
				printf("%c",ch);
				break;
		}
	}
}