#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[]) {
int dvdendo, dvsor, q, r;
	dvdendo=atoi (argv[1]);
	printf("Dividendo= %d", dvdendo);
		if (dvdendo==0)
			return 0;
	
	dvsor=atoi (argv[2]);		
	printf("\nDivisor= %d", dvsor);
		if (dvsor==0)
			return 0;

	minha_divisao(dvdendo, dvsor, &q, &r);

	printf("\n\nQuociente da divisao de %d por %d = %d", dvdendo, dvsor, q);
	printf("\nResto da divisao de %d por %d = %d\n\n", dvdendo, dvsor, r);
}

void minha_divisao(int dividendo, int divisor, int *ptr_quociente, int
*ptr_resto){
	*ptr_quociente=dividendo/divisor;
	*ptr_resto=dividendo%divisor;
}
