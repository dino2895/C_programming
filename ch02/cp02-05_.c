//攝氏 = (華氏-32)*5/9
//*1.8+32
#include <stdio.h>
int main(void) {
	float a, c;
	scanf("%f", &a);
	c = a*1.8f+32;
	printf ("%.2f", c);
}