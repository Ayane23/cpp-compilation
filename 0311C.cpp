#include <stdio.h>
#include <string.h>

int main(){
	char input[1000];
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", &input);
		strrev(input);
		printf("Case #%d : %s\n",i,input);
	}
}
