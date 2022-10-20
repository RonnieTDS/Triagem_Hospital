#include<stdio.h>
#include<stdlib.h>
struct pessoa{
	char paciente[50];
	char endereco[50];
	long long cpf;
	int rg;
	int nCasa;
};
struct pessoa pessoas[20];
int sequencia=0;
void cadastro(){
	system("cls");
	printf("\nDigite o paciente:");
	fflush(stdin);
	gets(pessoas[sequencia].paciente);
	printf("\n\nDigite o CPF: ");
	fflush(stdin);
	scanf("%d",&pessoas[sequencia].cpf);
	printf("\nDigite o RG:");
	scanf("%d",&pessoas[sequencia].rg);
	printf("\nDigite o Endereco:");
	fflush(stdin);
	gets(pessoas[sequencia].endereco);
	printf("\nDigite o casa: ");
	scanf("%d",&pessoas[sequencia].nCasa);	
	sequencia++;
	system("pause");
}
void listar(){
	system("cls");
	int y;
	if(pessoas[0].cpf!=NULL){
		for(y=0;y<sequencia;y++){
		printf("\nnome: %s\n",pessoas[y].paciente);
		printf("\nCPF : %d\n",pessoas[y].cpf);
		printf("\nRG : %d\n",pessoas[y].rg);
		printf("\nEndereco : %s\n",pessoas[y].endereco);
		printf("\nCasa : %d\n",pessoas[y].nCasa);
		
		}
	}else{
		printf("\nnenhum cadastro realizado\n");
	}
	
	system("pause");
}
int main(){
	
	int op;
	do{
		system("cls");
		printf("\nDigite a opcao desejada: ");
		printf("\n1- cadastro\n2-listar\n0- sair\n:");
		scanf("%d",&op);
		switch(op){
			case 1:
				cadastro();
			break;
			case 2:
				listar();
			break;
			case 0:
				printf("\nsaindo da aplicacao\n");
			break;
			default:
				printf("\nopcao invalida\n");
				system("pause");
		}
	}while(op!=0);
	
	
	
	
	
	return 0;
}

