#include <stdio.h>
#include <string.h>

int main(){
	int count[100000];
	int N, A;
	int MAX = 0;
	int SUM = 0;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&A);
		count[A]++;
		if(A>MAX) MAX = A;
	}
	for(int i=1; i<=MAX; i++){
		printf("%d can be %d pair\n",i, count[i]/2);
		SUM += count[i]/2;
	}
	printf("Number of pairs of gloves : %d\n",SUM);
}
