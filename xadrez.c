#include <stdio.h>
//Estou declarando variaveis dentro de void para cada peça.
void movertorre(int casas){
    if(casas > 0){
        printf("Direita!\n");
        movertorre(casas-1);
    }
}

void moverbispo(int casas){
    if(casas > 0){
        printf("Cima direita!\n");
        moverbispo(casas-1);
    }
}

void moverrainha(int casas){
    if(casas > 0){
        printf("Esquerda!\n");
        moverrainha(casas-1);
    }
}

int main(){
    //Declarei variavel para opção do menu do do while!
    int opcao;
   
    do {
        //Menu interativo para usuario escolher a opção de peçã que ira mexer.
        printf("\n ***Menu***:\n");
        printf("Escolha Qual peça você quer mover: \n");
        printf("1. Torre 5 casas para a direita.\n");
        printf("2. Bispo 5 casas para cima a direita diagonal.\n");
        printf("3. Rainha 8 casas a esquerda.\n");
        printf("4. Cavalo 2 casas acima e 1 a direita.\n");
        printf("5. Sair do jogo.\n");
        
        scanf("%d", &opcao);
       
        //Conforme oque o usuario escolher ira imprimir umas das opções abaixo.
        switch(opcao) {
            case 1:
                printf("Você escolheu Torre\n");
               movertorre(5);
                break;
            case 2:
                printf("Você escolheu Bispo\n");
              moverbispo(5); 
                break;
            case 3:
                printf("Você escolheu Rainha\n");
               moverrainha(8);
                break;
            case 4:
                printf("Você escolheu Cavalo\n");
                for (int i = 0; i < 1; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        printf("Cima\n");
                    }
                    printf("Direita\n");
                }
                
                break;
            case 5:
                printf("Saindo do jogo...\n");
                break;    
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao !=5);//Caso usuario queira sair do jogo e finalizar vai escolher opção 5 que sera while.

    return 0;
}