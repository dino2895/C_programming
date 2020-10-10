#include <stdio.h>
int main(){
    int p[10] = {0};
    for(int i=1;i<=16;i++){
        int in;
        scanf("%d", &in);
		printf(i%4==1?"%2d":"%3d",in);
        if(i % 4 == 0){
           printf("\n");
        }
        p[(i-1)/4] += in;
        p[4 + (i-1)%4] += in;
        if(i % 5 == 1){
            p[8] += in;
        }
        if(i == 4 || i == 7 || i == 10 || i == 13){
            p[9] += in;
        }
    }
    printf("\nRow sums:");
    for(int i=0;i<4;i++){ 
		printf("%3d", p[i]); 
	}
    printf("\nColumn sums:");
    for(int i=0;i<4;i++){ 
		printf("%3d", p[i+4]);
	}
	printf("\nDiagonal sums: %d %d",p[8],p[9]);
    return 0;
}
