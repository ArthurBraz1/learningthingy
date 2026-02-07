    // calcular o IMC com base no peso e altura lido.
    #include <stdio.h>
    int main(void){

    double weight;
    double height;
    printf("insert height in meters.\n");
    scanf("%lf", &height);
    printf("insert weight in kilograms\n");
    scanf("%lf", &weight);
    // formula for IMC is weight/height^2
    double IMC = weight/(height*height);

    printf("Your IMC is %.2lf.\n", IMC);

    }





    