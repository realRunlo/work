#include <stdio.h>
#include "camada_dados.h"
#include "interface.h"
#include "lista.h"




int main() {
    printf("PRONTOS PARA COMECAR O JOGO?\n");
    ESTADO *e = inicializar_estado();
    desenha_tabuleiro(e);
    imprime_estadoI(e);
    interpretador(e);


    printf("JOGO TERMINADO\n");
}