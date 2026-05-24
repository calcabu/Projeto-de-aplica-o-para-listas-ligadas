#include <stdio.h>
#include "lista.h"

int main() {
    t_lista fila;
    inicializa_lista(&fila);
    int opcao;
    int senha_comum = 1;
    int senha_vip = 100;
    int senha_atendida;

    do {
        printf("\n--- Simulador de Fila ---\n");
        printf("1. Emitir nova senha\n");
        printf("2. Emitir senha VIP\n");
        printf("3. Chamar proximo\n");
        printf("4. Ver fila atual\n");
        printf("5. Quantas pessoas estao na fila?\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                insere_fim(senha_comum, &fila);
                printf("Senha emitida: %d\n", senha_comum);
                senha_comum++;
                break;
            case 2:
                insere_inicio(senha_vip, &fila);
                printf("Senha VIP emitida: VIP%d\n", senha_vip);
                senha_vip++;
                break;
            case 3:
                if (lista_vazia(&fila)) {
                    printf("A fila esta vazia.\n");
                } else {
                    remove_inicio(&fila, &senha_atendida);
                    if (senha_atendida >= 100) {
                        printf("Atendendo senha: VIP%d\n", senha_atendida);
                    } else {
                        printf("Atendendo senha: %d\n", senha_atendida);
                    }
                }
                break;
            case 4:
                if (lista_vazia(&fila)) {
                    printf("A fila esta vazia.\n");
                } else {
                    printf("Fila atual: ");
                    exibe_lista(&fila);
                }
                break;
            case 5:
                printf("Pessoas na fila: %d\n", tamanho_lista(&fila));
                break;
            case 6:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 6);
    return 0;
}