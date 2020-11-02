#include<stdio.h>
int main(){
	char ch;
	int count=0;
	printf("Enter a word: ");
	while (ch != '\n'){
		ch = getchar();
		if(ch>96)
			ch = ch - 32;
		switch(ch){
			case 65 : case 69 : case 73 : case 76 : case 78 : case 79 : case 82 ... 85:
				count = count+1;
				break;
			case 68 : case 71:
				count = count+2;
				break;
			case 66 : case 67: case 77: case 80:
				count = count+3;
				break;
			case 70 : case 72: case 86: case 87: case 89:
				count = count+4;
				break;
			case 75:
				count = count+5;
				break;
			case 74: case 88:
				count = count+8;
				break;
			case 81: case 90:
				count = count+10;
				break;
		}
	}
	printf("Scrabble value: %d",count);
}
// 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ