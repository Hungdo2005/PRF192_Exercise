#include<stdio.h>

int main (){
	int n;
	printf("n = ");
	scanf("%d", &n);
	int sum = 0;
	if(n >= 1){
		for(int i = 1; i <= n; i++){
			if(n % i == 0){
				sum += 1;
			}
		}
		printf("%d", sum);
	}
	return 0;
} 