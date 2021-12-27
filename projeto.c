#include <stdio.h>


//Declarando as varáveis globais.
int qnt_box, qnt_truck, c1, c2, tamb, tamt, resto[20];

int mass_box[], limit_truck[];

int scan_values();

int choose_box();

int zerarvetor();

int main(){

    printf("\n\t\tPROJETO TRANSPORTADORA\n\n\n\n");
        for(int i = 0; i < 2; i++)
            printf("");
    system("cls");

    zerarvetor();

    scan_values();

    choose_box();

    printf("\n%i %i\n", c1, c2);


return 0;
}

int zerarvetor(){
    for(int i=0; i<=20; i++)
        resto[i]=1000;
}

int scan_values(){


    //Recebendo a quantidade e peso das caixas.
    printf("Digite a quantidade de caixas: ");
        scanf("%i", &qnt_box);
    tamb = qnt_box - 1;
    mass_box[tamb];
    int j = 1;

    for(int i = 0; i <= tamb; i++){
        printf("\nDigite o peso da caixa %i: ", j++);
            scanf("%i", &mass_box[i]);
    }
    system("cls");


    //Recebendo a quantidade e limite de carga dos caminhões.
    printf("Digite a quantidade de caminhoes: ");
        scanf("%i", &qnt_truck);
    tamt = qnt_truck - 1;
    limit_truck[tamt];
    j = 1;

    for(int i = 0; i <= tamt; i++){
        printf("\nDigite o limite de carga do caminhao %i: ", j++);
            scanf("%i", &limit_truck[i]);
    }
}

int choose_box(){
    c1 = 100;

    for(int i = 0; i <= tamt; i++){
        //Testando uma caixa para o caminhão.
        for(int j = 0; j <= tamb; j++){
            if(mass_box[j] <= limit_truck[i]){
                resto[j] = limit_truck[i] - mass_box[j];

                for(int k=0; k<=20; k++)
                    if(resto[k] < c1){
                        c1 = resto[k];
                        c2 = k;
                    }
            }
        }

        //Testando duas caixas para o caminhão.


    }

}
