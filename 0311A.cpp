#include <stdio.h>

int main(){
	int sum, jojo, lili, bibi, N, nilai;
	scanf("%d", &N);
	scanf("%d %d %d", &jojo, &lili, &bibi);
	sum = jojo + lili + bibi;
	for(int i=0; i<N; i++){
		scanf("%d", &nilai);
		sum+=nilai;
	}
	if(jojo>=(sum/(N+3))){
		printf("Jojo lolos\n");
	}else{
		printf("Jojo tidak lolos\n");
	}
	if(lili>=(sum/(N+3))){
		printf("Lili lolos\n");
	}else{
		printf("Lili tidak lolos\n");
	}
	if(bibi>=(sum/(N+3))){
		printf("Bibi lolos\n");
	}else{
		printf("Bibi tidak lolos\n");
	}
}
