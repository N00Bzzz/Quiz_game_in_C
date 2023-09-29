// Libs do C
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
// Include
#include "JogoQuiz_data.h"


void espera_apertar() {
	// Essa função deixa o console parado até o usuario digitar algo
	printf("\nAperte Enter para continuar... \n");
	fflush(stdin);getchar();
}

int pergunta(int per, int dif, int *points) {
	// Args [per - Id da pergunta sorteada; dif - Dificuldade atual 0-facil,1-Media,2-Expert
	// *points ponteiro para pontuação]
	// Essa função exibe a pergunta calcula a pontuação da rodada com base no tempo
	// Retorna 1 caso jogador acerte e 0 caso erre [Erro resulta em pontuação -150]
	
	int resposta_do_usuario;
	int tempo_restante = 30;

	// Temporizador
	while (tempo_restante > 0) {
		printf("%s \n", Database_Perguntas[dif - 1][per].enunciado);
		printf("%s", Database_Perguntas[dif - 1][per].alternativas);
		printf("\nTempo Restante: %d segundos", tempo_restante);
		Sleep(1000);
		tempo_restante--;
		
		system("cls");

		if (_kbhit()) {
			char key = _getch();
			if (key == 13) { // Verifica se a tecla pressionada é o Enter
				break;
			}
		}
	}

	system("cls");

	if (tempo_restante == 0) {
		printf("Tempo Esgotado...\n");
		system("timeout 2");
		return 0;
	}

	printf("Digite a resposta: ");
	scanf("%d", &resposta_do_usuario);

	if (resposta_do_usuario == Database_Perguntas[dif - 1][per].reposta_certa) {
		printf("Voce acertou...\nParabens!\n");
		system("timeout 2");
		*points = *points + (10 * tempo_restante);
		return 1;
	} else {
		printf("Voce errou...\nMelhor estudar mais!\n");
		system("timeout 2");
		*points = *points - 150;
		return 0;
	}
}

void jogar(){
	// Variavéis do Jogo (Dados,pontuação etc...)
	char nomeJogador [25];
	int lifes = 3;
	int repostas_certas = 0;
	int pontucao = 0;
	int lv_atual = 1;
	int next_level = 0;
	
	// Variaveis de Controle (Lõgica e funções)
	int i;
	int sorteada;
	int resultado_da_resposta;
	int ja_sorteadas[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	int pos = 0;
	int validar_1;

	// Inicialização das variaveis
				lifes = 3;
				repostas_certas = 0;
				pontucao = 0;
				lv_atual = 1;
				next_level = 0;
				
				system("cls");
				printf("Comecando Novo Jogo.\n");
				printf("Digite o Nome do Jogador: \n");
				scanf("%s", nomeJogador);
				
				do {
					system("cls");
					printf("Proxima Rodada...");
					system("timeout 2");
					
					// Sorteio da pergunta (Lógica para evitar sorteio de pergunta repetida)
					do {
						validar_1 = 0;
						sorteada = rand() % 15;
						for (i = 0; i < 10; i++) {
							if (ja_sorteadas[i] == sorteada) {
							validar_1 = 1;
							}
						}
						}while(validar_1 != 0);
					ja_sorteadas[pos] = sorteada;
					pos = pos + 1;

					// Chamada da função pergunta (Exibir a pergunta e trata resposta)
					system("cls");
					resultado_da_resposta = pergunta(sorteada, lv_atual, &pontucao);

					// Checar se a reposta foi certa ou errada [Progressão ou Perca de Vida]
					if (resultado_da_resposta == 1) {
						repostas_certas = repostas_certas + 1;
						next_level = next_level + 1;
						} else {lifes = lifes - 1;}
					
					// Checar se houve 5 acertou para passa para proximo nivel
					if (next_level == 5 && lv_atual < 3) {
						lv_atual = lv_atual + 1;
						system("cls");
						printf("Parabens! Voce subiu de nivel.\n\nVamos tentar algo mais dificil agora.");
						espera_apertar();
						next_level = 0;
						// Zera as variaveis de controle do sorteio
						for (i = 0; i < 10; i++) {
							ja_sorteadas[i] = -1;
							}
						pos = 0;
						}

					// Situação do jogador a cada rodada
					system("cls");
					printf("Como estamos ate agora:\n");
					printf("Nome do Jogador   = %s \n", nomeJogador);
					printf("Vidas             = %d \n", lifes);
					printf("Repostas Corretas = %d \n", repostas_certas);
					printf("Pontos            = %d \n", pontucao);
					if (lv_atual == 1) {
						printf("Level atual       = Facil");
					} else if (lv_atual == 2) {
						printf("Level atual       = Medio");
					} else if (lv_atual == 3) {
						printf("Level atual       = Expert");
					}
					espera_apertar();
						
					// Zerou o Jogo.
					if (repostas_certas == 15) {
						system("cls");
						printf("Parabens, voce terminou o jogo!!!\n");
						printf("Sua Pontuacao foi de %d", pontucao);
						espera_apertar();
						break;
					}

				} while (lifes > 0);
				//Salvamento automático do nome, pontuação e quantidade de acertos do usuário
				salvarPontuacao(nomeJogador, &pontucao, &repostas_certas);

				// GameOver
				if (lifes <= 0) {
					pontucao = 0;
					system("cls");
					printf("Voce perdeu!\n");
					espera_apertar();
				}
}

void instrucoes(){
	// instruções do Jogo
	system("cls");
	printf("\t\t\tINSTRUCOES DE COMO JOGAR\n");
	printf("\tAssim que a pergunta aparecer, voce tera 30 segundos para responder.\n\n");
	printf("\tVoce precisa apertar Enter e digitar o numero correspondente a sua resposta.\n\n");
	printf("\tCada segundo nao usado para responder sera multiplicado por 10 e resultara na sua pontuaçao nessa rodada.\n\n");
	printf("\tCaso voce erre a pergunta havera um decrescimo de 150 pontos.\n\n");
	printf("\tVoce pode errar ate 3 vezes e precisa acerta 15 perguntas para zerar o jogo.\n\n");
	printf("\tA cada 5 acertos a dificuldade ira aumentar, sendo as dificuldades facil - medio - expert.\n\n");
	espera_apertar();
	system("cls");
}

void salvarPontuacao(const char* nomeJogador, int *pontucao, int *acertos) {
    FILE* arquivo = fopen("historico.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de historico.\n");
        return;
    }

    fprintf(arquivo, "Jogador: %s\n", nomeJogador);
    fprintf(arquivo, "Total de pontos: %d\n", *pontucao);
	fprintf(arquivo, "Acertos: %d\n", *acertos);
    fprintf(arquivo, "---------------------------\n");

    fclose(arquivo);
	espera_apertar();
	system("cls");
}

void mostrarHistorico() {
    FILE* arquivo = fopen("historico.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de histórico.\n");
        return;
    }

    char linha[100];
    while (!feof(arquivo)) {
        if (fgets(linha, sizeof(linha), arquivo) != NULL) {
            printf("%s", linha);
        }
    }

    fclose(arquivo);
	espera_apertar();
	system("cls");
}

int menu(){
	int es;
//Menu principal
	printf("1 - Jogar\n");
	printf("2 - Historico\n");
	printf("3 - Instrucoes\n");
	printf("4 - Sair\n\n");
	scanf("%d", &es);
	system("cls");
	return(es);
}

int main(void) {
	
	// Configurações do C
	setlocale(LC_ALL, "Portuguese");
	//(Por algum motivo que desconheço meu terminal não aceita essa função de jeito nenhum, então deixei as partes que usam printf sem acentuação)
	srand(time(NULL));
	int esc;
		// Inicio
		printf("Bem-Vindo ao Jogo do Quiz\n");
		printf("\nVersao: 1.0");
		espera_apertar();
		system("cls");
	do{
		esc = menu();
		switch (esc)
		{
			case 1:
				jogar();
				break;
			case 2:
				mostrarHistorico();
				break;
			case 3:
				instrucoes();
				break;
			case 4:
				// Fim do Programa
				printf("Fim do Jogo.\n");
				exit(0);
			default:
				break;	
		}
	}while(1);
return 0;
}
