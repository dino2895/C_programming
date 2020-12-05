#include<stdio.h>
void print_count(int n){
	printf("T minutes %d and counting\n",n);
}
int main(){
	for (int i=10;i>0;--i){
		print_count(i);
	}
}