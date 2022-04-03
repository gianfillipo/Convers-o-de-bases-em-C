#include <stdio.h>
#include "conversao.h"

int main()
{
    int base1, base2, num;

    printf("\nPrograma de conversão de bases: Binario, Decimal, Hexadecimal e Octal\n");
    printf("Digite a base que deseja em forma de número:\n\n \nBinario = 2  Octal = 8  Decimal = 10   Hexadecimal = 16   \n");

    printf("\n\nConverter da base: ");
    scanf("%i", &base1);

    printf("\nPara base: ");
    scanf("%i", &base2);

    if(base1 == 16){ // Caso a primeira base seja 16, o programa escaneia como um número hexadecimal.
        scanf("%x", &num);
    }else{

    printf("\nDigite o número que deseja converter: ");
    scanf("%i", &num);
    }

    switch (base1)
    {

    case 2:
        switch (base2)
        {

        case 8:
            printf("Resultado: ");
            converterBinarioOctal(num);
            break;

        case 10:
            printf("Resultado: ");
            printf("%i\n", converterBinarioDecimal(num));
            break;

        case 16:
            printf("Resultado: ");
            converterBinarioHexadecimal(num);
            break;

        default:
            printf("Segunda base inválida\n");
            break;
        }
    break;

    case 8:
        switch (base2)
        {
        case 2:
            printf("Resultado: ");
            converterOctalBinario(num);
        break;
        case 10:
            printf("Resultado: ");
            converterOctalDecimal(num);
        break;
        case 16:
        break;

        default:
            printf("Segunda base inválida\n");
            break;
        }
    
    break;

    case 10:
        switch (base2)
        {
        case 2:
            printf("Resultado: ");
            converterDecimalBinario(num);
            break;

        case 8:
            printf("Resultado: ");
            converterDecimalOctal(num);
            break;

        case 16:
            printf("Resultado: ");
            converterDecimalHexadecimal(num);
            
            break;

        default:
            printf("Segunda base inválida\n");
            break;
        }
    break;

    case 16:
        switch(base2){
            case 2:
            printf("Resultado: ");
            converterDecimalBinario(num);
            break;

            case 8:
            printf("Resultado: %o", num);
            break;

            case 10:
            printf("Resultado: %d", num);
            break;
        
            default: 
                printf("Segunda base inválida\n");
                break;
        }
    break;

    

    default:
        printf("Primeira base inválida \n");
        break;
    }

    return 0;
}