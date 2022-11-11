#include <stdio.h>

int main(){
	int T, N;
	char S[100], K[100];
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		scanf("%d", &N);
		int correct = 0;
		for(int j=1; j<=N; j++){
			scanf(" %c", &S[j]);
		}
		for(int j=1; j<=N; j++){
			scanf(" %c", &K[j]);
		}
		for(int j=1; j<=N; j++){
			if(S[j]==K[j])
				correct++;
		}
		printf("Case #%d: %d\n", i, correct*100/N);
	}
	
}
