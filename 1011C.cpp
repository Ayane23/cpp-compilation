#include <stdio.h>

int func(int n){
	if(n==1) return 1;
	if(n%2==0) return func(n/2);
	else return func(n-1)+func(n+1);
}

int main(){
	int N,T;
	scanf("%d", &T);
	for(int t=1; t<=T; t++){
		scanf("%d", &N);
		printf("Case #%d: %d\n", t, func(N));
	}
	
}
