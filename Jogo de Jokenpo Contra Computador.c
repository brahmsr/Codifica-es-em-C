

#include <stdlib.h>
#include <stdio.h>

#define PEDRA 1
#define PAPEL 2
#define TESOURA 3



    int jogadapc () {
        srand(clock());
        return (rand() % 3) + 1;
    }
    
    int ovencedor(int player, int pc) {

        
        if (player == pc) {
            return 0;
        }
        else if ((player == PEDRA && pc == PAPEL) ||
        (player == PAPEL && pc == TESOURA) ||
        (player == TESOURA && pc == PEDRA)) {
                     return 1;
        }
        else {
            return -1;
        }
    }    
    
int main()
{
    int player=0;
    int pc=0;
    int resultado=0;
    printf("Programa de jokenpo! \n Digite sua jogada escolhendo o numero:\n 1- pedra \n 2 - papel \n 3 - tesoura \n");
    scanf("%d", &player);
    pc = jogadapc();
    printf("jogada do pc: %d \n", pc);
    resultado = ovencedor (player, pc);
    if(resultado == 0) {
        printf("JOGO EMPATADO");
    }
    else if (resultado == 1) {
        printf("COMPUTADOR GANHOU!");
    }
    else {
        printf("VOCÊ GANHOU, PARABÉNS!");
    }
    
    return 0;
}
