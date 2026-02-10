#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Escolha um personagem de Wuthering Waves (1-38): ");
    scanf("%i", &num);

    printf("\n");

    switch (num) {
        case 1: printf("O personagem é: Aalto (1) !"); break;
        case 2: printf("O personagem é: Augusta (2) !"); break;
        case 3: printf("O personagem é: Baizhi (3) !"); break;
        case 4: printf("O personagem é: Brant (4) !"); break;
        case 5: printf("O personagem é: Calcharo (5) !"); break;
        case 6: printf("O personagem é: Camellya (6) !"); break;
        case 7: printf("O personagem é: Cantarella (7) !"); break;
        case 8: printf("O personagem é: Carlotta"); break;
        case 9: printf("O personagem é: Cartethyia"); break;
        case 10: printf("O personagem é: Changli"); break;
        case 12: printf("O personagem é: Chixia"); break;
        case 13: printf("O personagem é: Ciaccona"); break;
        case 14: printf("O personagem é: Danjin (14) !"); break;
        case 15: printf("O personagem é: Encore (15) !"); break;
        case 16: printf("O personagem é: Iuno (16) !"); break;
        case 17: printf("O personagem é: Jianxin (17) !"); break;
        case 18: printf("O personagem é: Jinshi (18) !"); break;
        case 19: printf("O personagem é: Jiyan (19) !"); break;
        case 20: printf("O personagem é: Lingyang (20) !"); break;
        case 21: printf("O personagem é: Lumi (21) !"); break;
        case 22: printf("O personagem é: Lupa (22) !"); break;
        case 23: printf("O personagem é: Mortefi (23) !"); break;
        case 24: printf("O personagem é: Phoebe (24) !"); break;
        case 25: printf("O personagem é: Phrolova (25) !"); break;
        case 26: printf("O personagem é: Roccia (26) !"); break;
        case 27: printf("O personagem é: Rover (27) !"); break;
        case 28: printf("O personagem é: Sanhua (28) !"); break;
        case 29: printf("O personagem é: Taoqi (29) !"); break;
        case 30: printf("O personagem é: Shorekeeper (30) !"); break;
        case 31: printf("O personagem é: Verina (31) !"); break;
        case 32: printf("O personagem é: Xiangli Yao (32) !"); break;
        case 33: printf("O personagem é: Yangyang (33) !"); break;
        case 34: printf("O personagem é: Yunlin (34) !"); break;
        case 35: printf("O personagem é: Youhu (35) !"); break;
        case 36: printf("O personagem é: Yuanwu (36) !"); break;
        case 37: printf("O personagem é: Zani (37) !"); break;
        case 38: printf("O personagem é: Zhezhi (38) !"); break;
        default: printf("Nenhum arum"); break;
    }
    return 0;
}
