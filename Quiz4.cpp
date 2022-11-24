#include <stdio.h>
#include <string.h>

int main(){
	int N;
	char a,b;
	scanf("%d %c %c", &N, &a, &b);
	for(int i=1; i<=N; i++){
		for(int j=1; j<=i; j++){
			if(j==1 || j==i || i==N){
				printf("%c", a);
			}else{
				printf("%c", b);
			}
		}
		printf("\n");
	}
}
