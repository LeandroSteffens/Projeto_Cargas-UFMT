
#include <stdio.h>


//Declarando as varáveis globais.
int qnt_box, qnt_truck, tamb, tamt, resto1=1000, box_resto1=0, resto2=1000, box_resto2[1];

int i=0, j=0, k=0;

int mass_box[], limit_truck[];

int scan_values();

int choose_box();

int zerarvetor();

int main(){

    printf("\n\t\tPROJETO TRANSPORTADORA\n\n\n\n");
        for(i = 0; i < 2; i++)
            printf("");
    system("cls");

    zerarvetor();

    scan_values();

    choose_box();

    printf("caminhao 1 - %i %i\t %i %i %i", resto1, box_resto1, resto2, box_resto2[0], box_resto2[1]);


return 0;
}

int zerarvetor(){

}
int scan_values(){


    //Recebendo a quantidade e peso das caixas.
    printf("Digite a quantidade de caixas: ");
        scanf("%i", &qnt_box);
    tamb = qnt_box - 1;
    mass_box[tamb];
    int j = 1;

    //mudei aqui para testar o scanf buff
    printf("\nDigite o peso da caixa %i: ", j++);
            scanf("%i", &mass_box[i]);
    for(i = 1; i <= tamb; i++){
        printf("\nDigite o peso da caixa %i: ", j++);
            scanf(" %i", &mass_box[i]);
    }
    system("cls");


    //Recebendo a quantidade e limite de carga dos caminhões.
    printf("Digite a quantidade de caminhoes: ");
        scanf("%i", &qnt_truck);
    tamt = qnt_truck - 1;
    limit_truck[tamt];
    j = 1;

    for(i = 0; i <= tamt; i++){
        printf("\nDigite o limite de carga do caminhao %i: ", j++);
            scanf("%i", &limit_truck[i]);
    }
}

int choose_box(){

    for(i = 0; i <= tamt; i++){

        //testando limite para 01 caixa por caminhao
        for(j = 0; j <= tamb; j++){
            if(mass_box[j] <= limit_truck[i]){
                if(limit_truck[i] - mass_box[j] < resto1){
                    resto1 = limit_truck[i] - mass_box[j];
                    box_resto1 = j;
        }
            }
                }

        //testando limite para 02 caixas por caminhao
        for(j=0; i<=tamb; j++){
            k = j+1;
            for(k; k<=tamb; k++){
                if((mass_box[j] + mass_box[k]) <= limit_truck[i] && (mass_box[j] + mass_box[k]) < resto2){
                    resto2 = limit_truck - mass_box[j] + mass_box[k];
                    box_resto2[0] = j;
                    box_resto2[1] = k;
                }
            }
        }
    }
}
