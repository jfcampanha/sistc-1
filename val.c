#include <stdio.h>
#include <unistd.h>
int main() {
int dvdendo, dvsor, q, r;
while (1){
	printf("Dividendo=");
	scanf("%d", &dvdendo);
		if (dvdendo==0)
			break;
			
	printf("\nDivisor=");
	scanf("%d", &dvsor);
		if (dvsor==0)
			break;

	minha_divisao(dvdendo, dvsor, &q, &r);

	printf("\n\nQuociente da divisao de %d por %d = %d", dvdendo, dvsor, q);
	printf("\nResto da divisao de %d por %d = %d\n\n", dvdendo, dvsor, r);
}
}

void minha_divisao(int dividendo, int divisor, int *ptr_quociente, int
*ptr_resto){
	*ptr_quociente=dividendo/divisor;
	*ptr_resto=dividendo%divisor;
}
