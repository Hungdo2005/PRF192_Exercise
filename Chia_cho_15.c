#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n <= 1000 && n >= 0){
		if(n % 15 == 0 && n % 5 == 0 && n % 3 == 0){
			printf("YES");
		}else{
			printf("NO");
		}
	}
	return 0;
} 