#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VEHIC_MAXPLEN 81
typedef struct {
 char plate[6];
 char owner[VEHIC_MAXPLEN];
 double value;
} vehic_t;

int main(){
vehic_t v1;
vehic_read(&v1);
vehic_print(&v1);
return 0;
}

void vehic_print(vehic_t *v){
	
	printf("\n\tVER DADOS DO VEICULO:\n");
	printf("\nMatricula: %.6s\n", (*v).plate);
		/* igua a:
		printf("\nMatricula: ");
		for (int i=0; i<6; i++)
		{
			printf("%c",(*v).plate[i]);
		}*/
		
	int j=0;
	printf("\nProprietario: ");
	while((*v).owner[j]!='\0')
	{
		printf("%c",(*v).owner[j]);
		j++;
	}
	
	printf("\nValor comercial: %.2lf\n", (*v).value);	 
}

void vehic_read(vehic_t *v){
	int t;
	printf("\n\tINSERIR DADOS DO VEICULO:\n");
	fflush(stdin);	
	printf("\nProprietario: ");
	fgets((*v).owner,VEHIC_MAXPLEN, stdin);
	t=sizeof ((*v).owner);
	(*v).owner[t-1]='\0';
	
	char aux[15];
	printf("\nMatricula: ");
	fflush(stdin);
	fgets(aux, 15, stdin);
	memcpy((*v).plate, aux, 6);
	
	printf("\nValor comercial: ");
	fflush(stdin);
	fgets(aux, 15, stdin);
	(*v).value=atof(aux);
	
	
}

