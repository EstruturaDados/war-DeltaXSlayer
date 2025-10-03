#include <stdio.h>
#include <string.h>
typedef struct 
{
    char nome[50];
    int numerotropas;
    char cor[10];
  
} Territorio ;

int main() {

    //aqui, criei um vetor de 5 posições para território, recebendo entrada até completar os 5 continentes
    Territorio t[5];

    for (int i = 0; i<5; i++)
    {
    printf("Digite o nome do continente: \n");
    fgets(t[i].nome, sizeof(t[i].nome), stdin);
    printf("Digite a cor do continente: \n");
    fgets (t[i].cor, sizeof(t[i].cor), stdin);
    printf("Digite o numero de tropas do continente: \n");
    scanf ("%d", &t[i].numerotropas);
    getchar();
    
    }
    
    printf("==================== Estes são os territórios cadastrados ================= \n");
    printf(" Nome: %s Cor: %s Numero de tropas: %d \n", t[0].nome, t[0].cor, t[0].numerotropas);
    printf(" =========================================== \n");
    printf(" Nome: %s Cor: %s Numero de tropas: %d \n", t[1].nome, t[1].cor, t[1].numerotropas);
    printf(" =========================================== \n");
    printf(" Nome: %s Cor: %s Numero de tropas: %d \n", t[2].nome, t[2].cor, t[2].numerotropas);
    printf(" =========================================== \n");
    printf(" Nome: %s Cor: %s Numero de tropas: %d \n", t[3].nome, t[3].cor, t[3].numerotropas);
    printf(" =========================================== \n");
    printf(" Nome: %s Cor: %s Numero de tropas: %d \n", t[4].nome, t[4].cor, t[4].numerotropas);

    return 0;
}

