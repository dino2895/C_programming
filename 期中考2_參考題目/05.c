#include<stdio.h>
int main(){
	int arr[52] = {0};
	char str[999];
	char c;
	
    while ((c = getchar()) != '\n') {
		int num = (int)c;
		//printf("\t%d\n", num);
		++arr[num - (num>=65 && c<=90 ? 65 : 97)];
	}
	while((c = getchar()) != '\n'){
		int num = (int)c;
		//printf("\t%d\n", num);
		--arr[num - (num>=65 && c<=90 ? 65 : 97)];
	}
	for(int i=0;i<52;++i){
		//printf("\t%d\n", arr[i]);
		if(arr[i]!=0){
			printf("The words are not anagrams.\n");
			return 0;
		}
	}
	printf("The words are anagrams.\n");
	return 0;
}
/*
#include<stdio.h>
int main(){
	int arr[52] = {0};
	char str[999];
	char c;
	gets(str);
	for(int i=0;str[i]!='\0';++i){
		int num = c;
		printf("%c - %d\n", c, num);
		++arr[num - (num>=65 && c<=90 ? 65 : 97)];
	}
	gets(str);
	for(int i=0;str[i]!='\0';++i){	
		int num = c;
		++arr[num - (num>=65 && c<=90 ? 65 : 97)];
	}
	for(int i=0;i<52;++i){
		
		if(arr[i]!=0){
			printf("The words are not anagrams.\n");
			return 0;
		}
	}
	printf("The words are anagrams.\n");
	return 0;
}
*/