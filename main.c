#include <stdio.h>

int main () {
    int opcion = 1;
    float var1, var2;
    
    while(opcion != 0){
        
        printf("\n0. Salir \n");
        printf("1. Suma \n");
        printf("2. Resta \n");
        printf("3. Multiplicacion \n");
        printf("4. Division \n\n");

        printf("Selecciona una opcion: ");
        scanf("%d",&opcion);

        if(opcion == 0){    
        } else if(opcion == 1){
            printf("Ha seleccionado la opcion %d. Suma\n", opcion);
            printf("Introduce los datos\n");
            printf("A = ");
            scanf("%f", &var1);
            printf("B = ");
            scanf("%f", &var2);
            printf("A + B = %.4f\n",(var1 + var2));
        } else if (opcion == 2){
            printf("Has seleccionado la opcion %d. Resta\n", opcion);
            printf("Introduce los datos\n");
            printf("A = ");
            scanf("%f", &var1);
            printf("B = ");
            scanf("%f", &var2);
            printf("A - B = %.4f\n",(var1 - var2));
        } else if (opcion == 3){
            printf("Has seleccionado la opcion %d. Multiplicacion\n", opcion);
            printf("Introduce los datos\n");
            printf("A = ");
            scanf("%f", &var1);
            printf("B = ");
            scanf("%f", &var2);
            printf("A * B = %.4f\n",(var1 * var2));
        } else if (opcion == 4){
            printf("Has seleccionado la opcion %d. Division\n", opcion);
            printf("Introduce los datos\n");
            printf("A = ");
            scanf("%f", &var1);
            printf("B = ");
            scanf("%f", &var2);
            printf("A / B = %.4f\n",(var1 / var2));
        } else {
            printf("----Escoja una opcion valida----\n");
        }
    } 

}