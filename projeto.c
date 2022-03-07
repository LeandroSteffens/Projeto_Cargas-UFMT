
#include <stdio.h>


//Declarando as varáveis globais.
int qnt_box, qnt_truck, tamb, tamt, resto1=1000, box_resto1=0, resto2=1000, box_resto2[1];

int i=0, j=0, k=0;

int mass_box[50], limit_truck[50];

int scan_values();

int choose_box();

int zerarvetor();

int main(){



    zerarvetor();

    scan_values();

    choose_box();



return 0;
}

int zerarvetor(){

}
int scan_values(){


    //Recebendo a quantidade e peso das caixas.
        scanf("%i", &qnt_box);
    tamb = qnt_box - 1;
    mass_box[tamb];
    int j = 1;

    for(i = 0; i <= tamb; i++){
            scanf("%i", &mass_box[i]);
    }


    //Recebendo a quantidade e limite de carga dos caminhões.
        scanf("%i", &qnt_truck);
    tamt = qnt_truck - 1;
    limit_truck[tamt];
    j = 1;

    for(i = 0; i <= tamt; i++){
            scanf("%i", &limit_truck[i]);
    }
}

int choose_box(){

    for(i = 0; i <= tamt; i++){
        resto1 = 1000;
        resto2 = 1000;
        //testando limite para 01 caixa por caminhao
        for(j = 0; j <= tamb; j++){
            if(mass_box[j] <= limit_truck[i]){
                if((limit_truck[i] - mass_box[j]) < resto1){
                    resto1 = limit_truck[i] - mass_box[j];
                    box_resto1 = j;
        }
            }
                }

        //testando limite para 02 caixas por caminhao
        for(j=0; j<=tamb; j++){
            k = j+1;
            for(k; k<=tamb; k++){
                if(((mass_box[j] + mass_box[k]) <= limit_truck[i]) && ((limit_truck[i] -mass_box[j] - mass_box[k]) < resto2)){
                    resto2 = (limit_truck[i] - mass_box[j] - mass_box[k]);
                    box_resto2[0] = j;
                    box_resto2[1] = k;
                }
            }
        }

        //testando o resultado
        if(resto1 > resto2){
            printf("caminhao %i - %i %i carga:%i\n", (i+1), (box_resto2[0]+1), (box_resto2[1]+1), (mass_box[box_resto2[0]]+mass_box[box_resto2[1]]));
            mass_box[box_resto2[0]] = 1000;
            mass_box[box_resto2[1]] = 1000;
        }
            else if(resto2 > resto1){
                printf("caminhao %i - %i carga:%i\n", (i+1), (box_resto1+1), mass_box[box_resto1]);
                mass_box[box_resto1] = 1000;
            }
                else
                    printf("caminhao %i - carga:0\n", (i+1));

    }
}

