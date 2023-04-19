#include <stdio.h>
int main(){
	
	int a, b, c;
	printf("Digite um numero: ");
	scanf("%d", &a);

	printf("Digite outro numero: ");
	scanf("%d", &b);

	if(a == b){
		c = a + b;
		printf("%d + %d = %d\n", a,b,c);
		} else{
			c = a * b;
			printf("%d * %d = %d\n", a, b, c);
			}
	return 0;
}