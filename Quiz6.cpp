#include <stdio.h>

int main(){
	char input[1000];
	int count = 0;
	scanf("%[^\n]%*c", &input);
	while(input[count]!=NULL){
		if(count%2==0 && input[count]>=97 && input[count]<=122){
			printf("%c", input[count]-32);			
		}else if(count%2==1 && input[count]>=65 && input[count]<=90){
			printf("%c", input[count]+32);			
		}else{
			printf("%c", input[count]);
		}
		count++;
	}
	printf("\n");
}
