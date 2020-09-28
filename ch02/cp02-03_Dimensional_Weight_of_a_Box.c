#include <stdio.h>
int main(void) {
	int height = 12, length = 14, width = 11, volume = height * length * width, inchs_per_pound = 100;
	
	//printf("Dimensions: %dx%dx%d\n" , length, width, height);
	printf("%d" ,(volume/inchs_per_pound)+1);
	
	return 0;
}