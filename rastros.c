#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "camada_dados.h"
#include "interpretador.h"
#include "logica.h"


int main() {
    printf("PRONTOS PARA COMECAR O JOGO?\n");

    ESTADO *e = inicializar_estado();
    desenha_tabuleiro(e);
    while(jogada_possivel(e) == 1) {
        interpretador(e);
    }

    printf("JOGO TERMINADO\n");
}
