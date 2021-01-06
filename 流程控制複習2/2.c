#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	switch(a){
		case 100:case 90:case 80:case 70:case 60:
			printf("Pass");
			break;
		case 50:case 40:case 30:case 20:case 10:case 0:
			printf("Fail");
			break;
	}
}