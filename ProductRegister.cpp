#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
int code;
float val;
char prod[40];
}lista;

int main(){
	setlocale(LC_ALL, "");
	int quant,busca,i;

	//Definindo quantidade 
	printf("Quantos produtos serão cadastrados?: ");	
	scanf("%d",&quant);
	fflush(stdin);
	lista cont[quant];
	//registros dos produtos.
	for(i=1;i<=quant;i++){
		printf("\nDigite o produto: ");
		scanf("%s",&cont[i].prod);
		fflush(stdin);
		printf("\nDigite o Valor do produto: ");
		scanf("%f",&cont[i].val);
		fflush(stdin);
		cont[i].code= i;
		}
		//chamando produtos.
		printf("\n-----------Produtos-------------\n");
		
	for(i=1;i<=quant;i++){
		printf("\nCodigo: %d\t Nome do produto: %s\n",cont[i].code,cont[i].prod);
	}
	//busca de preço pelo code
	printf("\nQual o codigo do produto que deseja o preço?: ");
		scanf("%d",&busca);
		fflush(stdin);
		printf("\nPreço do(a) %s : %.2f",cont[busca].prod,cont[busca].val);
	
}

