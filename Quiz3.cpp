#include <stdio.h>
#include <string.h>

int main(){
	int N, sum=1;
	scanf("%d",&N);
	int limit = N;
	for(int i=2; i<N/2; i++){
		if(i>=limit) break;
		if(N%i==0){
			sum +=i;
			if(i != N/i){
				sum+=(N/i);
				limit = N/i;
			}
		}
	}
	if(sum==N){
		printf("Perfect Number\n");
	}else{
		printf("Not Perfect Number\n");
	}
}
