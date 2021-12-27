#include <stdio.h>


//Declarando as varáveis globais.
int qnt_box, qnt_truck, c1, tamb, tamt;

int mass_box[], limit_truck[];

int scan_values();

int choose_box();


int main(){

    printf("\n\t\tPROJETO TRANSPORTADORA\n\n\n\n");
        for(int i = 0; i < 2; i++)
            printf("");
    system("cls");

    scan_values();

    for(int i = 0; i <= tamt; i++)
        printf("%i", limit_truck[i]);
        system("pause");

    choose_box();

    printf("\n%i\n", c1);


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

int choose_box(){

int resto = 100, c1;

    for(int i = 0; i <= tamt; i++){
        //Testando uma caixa para o caminhão.
        for(int j = 0; j <= tamb; j++)
            if((mass_box[j] <= limit_truck[i]) && ((limit_truck[i] - mass_box[j]) < resto)){
                resto = limit_truck[i] - mass_box[j];
                c1 = j;
                printf("%i %i %i", c1, limit_truck[i], mass_box[j]);
            }
            


        //Testando duas caixas para o caminhão.

    }

}
