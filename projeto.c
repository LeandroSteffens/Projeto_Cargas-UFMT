#include <stdio.h>

int qnt_box, qnt_truck;

int scan_values();

int main(){

    printf("\n\t\tPROJETO TRANSPORTADORA\n\n\n\n");
        for(int i = 0; i < 2000000000; i++)
            printf("");
    system("pause");
    system("cls");

    scan_values();

return 0;
}

int scan_values(){


    //Recebendo a quantidade e peso das caixas.
    printf("Digite a quantidade de caixas: ");
    scanf("%i", &qnt_box);
    int tamb = qnt_box - 1;
    int mass_box[tamb];
    int j = 1;
    
    for(int i = 0; i <= tamb; i++){
        printf("\nDigite o peso da caixa %i: ", j++);
        scanf("%i", &mass_box[i]);
    }
    system("cls");
    

    //Recebendo a quantidade e limite de carga dos caminhões.
    printf("Digite a quantidade de caminhoes: ");
    scanf("%i", &qnt_truck);
    int tamt = qnt_truck - 1;
    int limit_truck[tamt];
    j = 1;
    
    for(int i = 0; i <= tamt; i++){
        printf("\nDigite o limite de carga do caminhao %i: ", j++);
        scanf("%i", &limit_truck[i]);
    }
}

