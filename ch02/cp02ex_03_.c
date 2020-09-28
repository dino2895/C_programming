#include <stdio.h>
int main(void) {
	int height = 8, length = 12, width = 10, volume = height * length * width;
	
	printf("Dimensions: %dx%dx%d\n" , length, width, height);
	printf("Volume (cubic inches): %d", volume);
	
	return 0;
}