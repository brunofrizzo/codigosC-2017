#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//#include "funcoes.h"

typedef struct{
    int dia,mes,ano;
}data;

struct pagina{
    int indice;
    data *diaPag;
    char *texto;
    struct pagina *proxima;
};

struct pagina paginaX;

//typedef struct{
//    pagina *primeiraPagina;
//}diario;

struct usuario{
    char nome[256];
    char senha[256];
}cadastro;

//typedef struct usuario cadastro;   


//Aloca espa?o para uma data e atribui os valores de acordo com o vetor e retorna o ponteiro.
//diaMesAno[0] ? o dia, [1] ? o m?s, [2] ? o ano.
//data *criaData(int diaMesAno[3]);

//Aloca mem?ria para uma p?gina, atribui os valores de acordo com os par?metros e retorna o ponteiro.
//pagina *criaPagina(int indice,int diaMesAno[3],char *txt);

//Aloca espa?o na mem?ria para um novo di?rio e retorna um ponteiro para o tal.
//diario *criaDiario();

//Retorna um vetor contendo a data no formato vet[0] ? o dia,[1] ? o m?s, [2] ? o ano.
//int *getData(data *dia);

//L? o arquivo contendo o di?rio e retorna um ponteiro para o diario.
//Cria um novo di?rio  usando a fun??o caso o arquivo n?o exista.
//diario *carregaDiario(FILE *arqDiario);

//Imprime uma p?gina do di?rio em um arquivo ou na tela do usu?rio caso *arquivo= NULL
//void imprimePag(pagina *pag,FILE *arquivo);

//Procura no di?rio uma p?gina com o ?ndice passado como par?metro e a retorna;
//Retorna NULL se n?o encontrou a p?gina.
//pagina *buscaPagina(int indice,diario *d);

//Procura o usu?rio e a senha no arquivo de logins e retorna o nome do arquivo contendo o di?rio deste usu?rio.
//char *fazLogin(char nome[256],char senha[256],FILE *logins);

//L? do usu?rio as informa??es sobre uma nova p?gina (data e texto) e adiciona ao di?rio do usu?rio.
//O ?ndice da p?gina deve ser controlado automaticamente.
//void novaPagina(diario *d);

//Exclui a p?gina do di?rio que cont?m o ?ndice passado como par?metro
//diario *rasgaPagina(int indice,diario *d);

FILE *logins, *arq_diario;
int escolha, i;

char *fazLogin(char nome[], char senha[], FILE *logins) {
	fclose(logins);
    char nomeArq[256], senhaArq[256], *arquivoUser, nome_arquivo_diario[256], nome_arquivo_login[256], senha_arquivo_login[256];
    bool achou_nome=false;
    strcpy(nome_arquivo_diario, nome);
    strcpy(nome_arquivo_login, nome);
    strcpy(senha_arquivo_login, senha);
    strcat(nome_arquivo_login, "\n");
    logins = fopen("logins.txt", "r");
    if (logins != NULL) {
    	i=1;
	    while(fgets(nomeArq, 256, logins) != NULL) {
	    	if (i%2!=0) {
	    		if (strcmp(nome_arquivo_login, nomeArq) == 0) {
	    			achou_nome=true;
		            break;
		        }
			}
			i++;
	    }
	    if (achou_nome) {
	    	fgets(senhaArq, 256, logins);
			strcat(senha_arquivo_login, "\n");
		    if (strcmp(senha_arquivo_login, senhaArq) == 0) {
				strcat(nome_arquivo_diario, ".txt");
				arquivoUser = nome_arquivo_diario;
    			// strcpy(arquivoUser, nome_arquivo_diario);

			} else {
				arquivoUser = "nomeigual";
    			// strcpy(arquivoUser, "nomeigual");

			}
		
		} else {
			arquivoUser = NULL;
    		// strcpy(arquivoUser, "NULL");

		}
    } else {
    	arquivoUser = NULL;
    	// strcpy(arquivoUser, "NULL");

    }

	fclose(logins);
	// printf("%s\n", arquivoUser);
    
    return arquivoUser;
}

//void mostraDiario(char *nome_arq_diario) {
//
//	printf("%s", nome_arq_diario);
////	exit(1);
//	arq_diario = fopen(nome_arq_diario, "r");
//	if (arq_diario == NULL) {
//		printf("Erro ao abrir diario\n");
//	} else {
//		i=1;
//		while(fgets(pagina.texto, 256, arq_diario) != NULL) {
//			printf("%s\n", pagina);
//		}
//		fclose(arq_diario);
//	}
//	
//}

void menu(char *nome_arq_diario) {
	// int num=0;
	// char *texto, ch;
	arq_diario = fopen(nome_arq_diario, "a+");
	if (arq_diario == NULL) {
		printf("Erro ao abrir arquivo.\n");
	} else {
		fclose(arq_diario);
		printf("--------MENU--------\n");
		printf("1-Ver diario\n2-Ver pagina especifica\n3-Escrever nova pagina\n4-Remover pagina\n5-Salvar o diario\n6-Sair\n");
		scanf("%d", &escolha);
		switch (escolha) {
			case 1: 
//				mostraDiario(nome_arq_diario); 
				// printf("%s\n", nome_arq_diario);
				arq_diario = fopen(nome_arq_diario, "r");
				if (arq_diario == NULL){
					printf("erro ao abrir arquivo\n");
				} else {
					// printf("oo\n");
					// while( (ch=fgetc(arq_diario))!= EOF ) {

					// 	if(ch == '\n')
			  // 				num++;
					// }
					// printf("%d\n", num);

					// while(fgets(paginaX.texto, 256, arq_diario) != NULL) {
					while( (fscanf(arq_diario, "%s\n", paginaX.texto)) != EOF) {
						printf("pagina = %s\n", paginaX.texto);
					}	
				}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4: 
				break;
			case 5: 
				break;
			case 6: exit(1); 
				break;
			default: printf("Opcao invalida");
		}
	}
	fclose(arq_diario);

}

int main() {
   
	char *nome_arq_diario;
	bool entraMenu=false;
    printf("--------LOGIN-------\n");
    printf("Informe seu usuario: ");
	scanf("%s", cadastro.nome);
	printf("Informe sua senha: ");
	scanf("%s", cadastro.senha);

	logins = fopen("logins.txt", "a+");
	nome_arq_diario = fazLogin(cadastro.nome, cadastro.senha, logins);
	while(nome_arq_diario == "nomeigual") {
		printf("Senha errada ou usuario ja existente. Informe novamente seu usuario: ");
		scanf("%s", cadastro.nome);
		printf("Informe novamente sua senha: ");
		scanf("%s", cadastro.senha);
		logins = fopen("logins.txt", "a+");
		nome_arq_diario = fazLogin(cadastro.nome, cadastro.senha, logins);

	}

    if(nome_arq_diario == NULL) {
       	logins = fopen("logins.txt", "a");
       	if (logins == NULL){
       		printf("Erro ao abrir arquivo.");
       	}else {
       		fprintf(logins, "%s\n%s\n", cadastro.nome, cadastro.senha);
			printf("Novo cadastro criado!\n");
       	}
		
		if (strcmp(cadastro.nome, "gremio") == 0) {
			printf("EH O GREMIOOOOOOOOOOOOOOOOOOOOO!!!!\n");
		}
		nome_arq_diario = fazLogin(cadastro.nome, cadastro.senha, logins);
	}
	entraMenu=true;

	if (entraMenu) {
		menu(nome_arq_diario);
	}

    return 0;
}
