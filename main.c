#include <stdio.h>
#include <stdlib.h>

// LARACHI ABDELHAMID - PREMIER CODE EN C ! (BASIC CALCULATOR)
//
int main() {

    char operateur;
    double num1,num2;

    printf("\n pour l'addition, entrer : [+] \n pour la soustraction, entrer : [-]  \n pour la multiplication, entrer : [x] :\n pour la division, entrer : [/]) \n \n Entrez l'operateur : \n ");
    scanf("%c", &operateur);
    if (operateur == '+' || operateur == '-' || operateur == '/'|| operateur == 'x'){

    printf("vous avez choisi : [%c]", operateur);

    printf("\n Entrer deux operandes : \n");
    scanf("%lf", &num1, "\n");
    scanf("%lf", &num2);

        switch(operateur)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",num1, num2, num1 - num2);
            break;

        case 'x':
            printf("%.1lf x %.1lf = %.1lf",num1, num2, num1 * num2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",num1, num2, num1 / num2);
            break;
    return 0;
    }
    }
else {
            printf(" \n Erreur! L'operateur n'est pas correct \n");
                return 0;

    }


}
