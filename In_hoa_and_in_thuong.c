#include<stdio.h>
#include<string.h>

int main(){
	char c[9999];
	fgets(c, 9999, stdin);
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= 'a' && c[i] <= 'z'){
			c[i] -= 32;
		}else if(c[i] >= 'A' && c[i] <= 'Z'){
			c[i] += 32;
		}
	}
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= 'A' && c[i] <= 'Z'){
			printf("%c", c[i]);
		}
	}
	printf(" ");
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= 'A' && c[i] <= 'Z'){
			printf("%c", c[i]);
		}
	}
	printf("\n");
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= 'a' && c[i] <= 'z'){
			printf("%c", c[i]);
		}
	}
	printf(" ");
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= 'a' && c[i] <= 'z'){
			printf("%c", c[i]);
		}
	}
	return 0;
}