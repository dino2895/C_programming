#include<stdio.h>
int main(){
	char a;
	scanf("%c", &a);
	if (a > 90){
		a = a-32;
	}
	switch(a) { 
        case 65: 
			printf("Apple");
            break;
		case 66: 
			printf("Banana");
            break; 
		case 67: 
			printf("Cherry");
            break; 
		case 68: 
			printf("Durian");
            break; 
		case 69: 
			printf("Egg");
            break; 
		case 70: 
			printf("Fish");
            break; 
		default: 
            printf("Error"); 
            break;
	}
}
// A,a   →  Apple
// B,b   →  Banana
// C,c   →  Cherry
// D,d   →  Durian
// E,e   →  Egg
// F,f   →  Fish
// 其他  →  Error