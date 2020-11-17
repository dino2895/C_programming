#include<stdio.h>
int main(){
	int num_cards,r,s;
	const char suit_code[] = {'c','d','h','s'};
	const char rank_code[] = {'2','3','4','5','6','7','8','9','t','j','q','k','a'};
	const int mySuit[] = {0,2,1,2,2,0,1,1,3,3,2,0,1,2,3,2,0,1,3,0};
	const int myRank[] = {3,1,10,1,5,4,6,2,12,0,11,1,5,7,0,12,2,8,5,10};
	scanf("%d", &num_cards);
	scanf("%d", &s);
	scanf("%d", &r);
	for (int i=0;i<num_cards;i++){
		printf("%c%c", rank_code[myRank[r+i]], suit_code[mySuit[s+i]]);
		if(i<num_cards-1)
			printf(" ");
	}
}