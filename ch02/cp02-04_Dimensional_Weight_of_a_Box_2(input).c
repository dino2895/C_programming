#include <stdio.h>
#include <math.h>
int main(void) {
	float height, length, width, volume , inchs_per_pound;
	scanf("%f", &height);
	scanf("%f", &length);
	scanf("%f", &width);
	scanf("%f", &inchs_per_pound);
	volume = height * length * width;
	int x = ceil(volume/inchs_per_pound);
	//printf("%d" ,x);
	//x = (int)x;
	printf("%d" ,x);
	return 0;
}