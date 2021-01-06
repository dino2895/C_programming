#include<stdio.h>
int main(){
	int m=0,d=0;
	//scanf("%d",&m);
	//d = m%100;
	//m = m/100;
	while(1){
		scanf("%d",&m);
		d = m%100;
		m = m/100;
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
			if(d<=31&&d>0){
				printf("confirm");
				break;
			}
			else
				printf("illegal\n");
		}
		else if(m==4||m==6||m==9||m==11){
			if(d<=30&&d>0){
				printf("confirm");
				break;
			}
			else
				printf("illegal\n");
		}
		else if(m==2){
			if(d<=28&&d>0){
				printf("confirm");
				break;
			}
			else
				printf("illegal\n");
		}
		else
			printf("illegal\n");
	}
}