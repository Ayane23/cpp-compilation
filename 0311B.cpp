#include <stdio.h>

int main(){
	int N, sum;
	long long P,b;
	scanf("%d %llu", &N, &P);
	sum = 0;
	for(int i=0; i<N; i++){
		scanf("%llu", &b);
		if(b<P) sum++;
	}
	printf("%d\n",sum);
}
