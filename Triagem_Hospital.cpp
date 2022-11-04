#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>
#include<time.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>

struct paciente{
	char nome[50];
	int cpf;
	int fone;
};

struct paciente pacientes[200];
int sequencia,total;
char perguntas[5][100]=
{"possui febre?"
,"possui nausea?"
,"possui dor em algum lugar ?"
,"possui sangramento?"
,"Está espirrando loucamente?"};

void cadastro(){
	system("cls");
	printf("\nDigitie o nome do paciente: ");
	fflush(stdin);
	gets(pacientes[sequencia].nome);
	printf("\nDigite o cpf: ");
	scanf("%d",&pacientes[sequencia].cpf);
	printf("\nDigite o fone: ");
	scanf("%d",&pacientes[sequencia].fone);
	sequencia++;
}
void pergunta(){
	int x;
	total=0;
	char resp;
	for(x=0;x<5;x++){
		printf("%s",perguntas[x]);
		fflush(stdin);
		scanf("%c",&resp);
		if(resp=='S'||resp=='s'){
			total+=5;	
		}
	}
}

void classificacao(){
	if(total==25){
		printf("\nAla vermelha - Risco alto\n");
		system("pause");
	}else if(total<=10){
		printf("\nAla verde - Risco baixo\n");
		system("pause");
	}else {
		printf("\nAla amarela - Risco médio\n");
		system("pause");
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Triagem Hospital Organizações Tabajara\n");
	cadastro();
	pergunta();
	classificacao();
}
