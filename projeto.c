//César Augusto de Araujo Filho RGA:202021901009
//Leandro Steffens de Oliveira RGA:202021901032

#include <stdio.h>


//Declarando as varáveis.
int qnt_box, qnt_truck, sizeb, sizet, rest1=1000, box_rest1=0, rest2=1000, box_rest2[1];

int i=0, j=0, k=0;

int mass_box[50], limit_truck[50];

int scan_values();

int choose_box();


int main(){



    scan_values();

    choose_box();



return 0;
}


int scan_values(){


//Recebendo a quantidade e peso das caixas.
        printf("Digite a quantidade de caixas: ");
            scanf("%i", &qnt_box);
    sizeb = qnt_box - 1;
    mass_box[sizeb];
    int j = 1;

    for(i = 0; i <= sizeb; i++){
        printf("\nDigite o peso da caixa %i: ", j++);
            scanf("%i", &mass_box[i]);
    }


//Recebendo a quantidade e limite de carga dos caminhões.
    printf("\nDigite a quantidade de caminhoes: ");
        scanf("%i", &qnt_truck);
    sizet = qnt_truck - 1;
    limit_truck[sizet];
    j = 1;

    for(i = 0; i <= sizet; i++){
        printf("Digite o limite do caminhao %i :", j++);
            scanf("%i", &limit_truck[i]);
    }
}

//Função que faz a escolha de caixas.
int choose_box(){

    for(i = 0; i <= sizet; i++){
        rest1 = 1000;
        rest2 = 1000;
        
//Testando limite para 1 caixa por caminhão.
        for(j = 0; j <= sizeb; j++){
            if(mass_box[j] <= limit_truck[i]){
                if((limit_truck[i] - mass_box[j]) < rest1){
                    rest1 = limit_truck[i] - mass_box[j];
                    box_rest1 = j;
        }
            }
                }

//Testando limite para 2 caixas por caminhão.
        for(j=0; j<=sizeb; j++){
            k = j+1;
            for(k; k<=sizeb; k++){
                if(((mass_box[j] + mass_box[k]) <= limit_truck[i]) && ((limit_truck[i] -mass_box[j] - mass_box[k]) < rest1) && ((limit_truck[i] -mass_box[j] - mass_box[k]) < rest2)){
                    rest2 = (limit_truck[i] - mass_box[j] - mass_box[k]);
                    box_rest2[0] = j;
                    box_rest2[1] = k;
                }
            }
        }

//Printando o resultado
        if(rest1 > rest2){
            printf("caminhao %i - %i %i carga:%i\n", (i+1), (box_rest2[0]+1), (box_rest2[1]+1), (mass_box[box_rest2[0]]+mass_box[box_rest2[1]]));
            mass_box[box_rest2[0]] = 1000;
            mass_box[box_rest2[1]] = 1000;
        }
            else if(rest2 > rest1){
                printf("caminhao %i - %i carga:%i\n", (i+1), (box_rest1+1), mass_box[box_rest1]);
                mass_box[box_rest1] = 1000;
            }
                else
                    printf("caminhao %i - carga:0\n", (i+1));

    }
}

