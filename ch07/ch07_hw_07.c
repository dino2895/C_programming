#include<stdio.h>
int main(){
	char ch;
	int count=0, words=1;
	float avg=0;
	printf("Enter a sentence: ");
	ch = getchar();
	while(ch !='\n'){
		ch = getchar();
		if (ch==' ')
			words ++;
		else{
		count++;
		}
	}
	avg = (float)count/words;
	printf("Characters: %d\n",count);
	printf("Words: %d\n",words);
	printf("Average word length: %.1f\n",avg);
}