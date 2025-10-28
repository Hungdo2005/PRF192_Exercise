#include<stdio.h>
#include<string.h>

int main(){
	char c[9999];
	fgets(c, 9999, stdin);
	int count1 = 0, count2 = 0, count3 = 0;
	c[strlen(c) - 1] = '\0';
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= '0' && c[i] <= '9'){
			count1++;
		}else if(c[i] >= 'a' && c[i] <= 'z'){
			count2++;
		}else{
			count3++;
		}
	}
	c[strlen(c) - 1] = '\0';
	printf("%d %d %d", count2, count1, count3);
	return 0;
}