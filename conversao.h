#include <stdio.h>

int potencia(int num, int exp)
{
    int resultado = num;

    for (int contador = 0; contador <= exp; contador++)
    {
        if (contador == 0)
        {
            resultado = 1;
        }
        else if (contador == 1)
        {
            resultado = num;
        }
        else
        {
            resultado *= num;
        }
    }

    return resultado;
}

// Binário para decimal
int converterBinarioDecimal(int binario)
{
    int resultado, resto;

    resultado = 0;
    for (int contador = 0; binario >= 1; contador++)
    {
        resto = binario % 10;
        if (resto != 0 && resto != 1)
        {
            printf("Número inválido\n");
            break;
        }
        resultado += resto * (potencia(2, contador));
        binario /= 10;
    }

    return resultado;
}

// Binário para hexadecimal

int converterBinarioHexadecimal(int num)
{
    int num2, numtamanho, resto, resultado, tamanhoVetor, cont2;
    int numTamanho = num;

    resultado = 0;
    tamanhoVetor = 0;

    // Descobrir o tamanho do vetor
    while (numTamanho >= 1)
    {

        cont2 = 1;
        for (int contador = 0; cont2 <= 4; contador++)
        {
            numTamanho /= 10;
            cont2++;
        }
        tamanhoVetor++;
    }

    int vetor[tamanhoVetor];

    // Adiciona os números no vetor
    for (int contador = 0; num >= 1; contador++)
    {
        num2 = 1;
        for (int contador2 = 0; num2 <= 4; contador2++)
        {
            resto = num % 10;
            resultado += resto * (potencia(2, contador2));
            num /= 10;
            num2++;
        }
        vetor[contador] = resultado;
        resultado = 0;
    }

    // Printa os números do vetor e utiliza as letras do hexadecimal.
    for (; tamanhoVetor - 1 >= 0; tamanhoVetor--)
    {

        if (vetor[tamanhoVetor - 1] == 10)
            printf("A");

        else if (vetor[tamanhoVetor - 1] == 11)
            printf("B");

        else if (vetor[tamanhoVetor - 1] == 12)
            printf("C");

        else if (vetor[tamanhoVetor - 1] == 13)
            printf("D");

        else if (vetor[tamanhoVetor - 1] == 14)
            printf("E");

        else if (vetor[tamanhoVetor - 1] == 15)
            printf("F");

        else
            printf("%i", vetor[tamanhoVetor - 1]);
    }
    printf("\n");
}

// Binário para octal
int converterBinarioOctal(int num)
{
    int num2, resultado, resto, total;

    resultado = 0;
    resto = 0;
    total = 0;

    for (int contador = 0; num >= 1; contador++)
    {

        num2 = 1;
        for (int contador2 = 0; num2 <= 3; contador2++)
        {
            resto = num % 10;
            resultado += resto * (potencia(2, contador2));
            num /= 10;
            num2++;
        }
        total += resultado * (potencia(10, contador));
        resultado = 0;
    }
    printf("%i\n", total);
}

// Octal

// Octal para binario
int converterOctalBinario(int num)
{
    int resultado;

    resultado = 0;
    for (int contador = 0; num >= 1; contador++)
    {
        resultado += (num % 10) * potencia(8, contador);
        num /= 10;
    }

    int total, contador;

    contador = 0;
    total = 0;
    while (resultado >= 1)
    {
        contador++;
        total += resultado % 2 * (potencia(10, contador) / 10);
        resultado /= 2;
    }
    printf("%i\n", total);
}

// Octal para decimal
int converterOctalDecimal(int num)
{
    int resultado, resto;

    resultado = 0;
    for (int contador = 0; num >= 1; contador++)
    {
        resto = num % 10;
        resultado += resto * (potencia(8, contador));
        num /= 10;
    }

    printf("%i\n", resultado);
}

// Decimal

// Decimal para binário

int converterDecimalBinario(int num)
{

    int resto, contador;

    contador = 0;
    resto = 0;
    while (num >= 1)
    {
        contador++;
        resto += num % 2 * (potencia(10, contador) / 10);
        num /= 2;
    }
    printf("%i\n", resto);
}

// Decimal para hexadecimal
int converterDecimalHexadecimal(int num)
{
    int resto, tamanhoDoVetor, numTamanho;

    tamanhoDoVetor = 0;
    numTamanho = num;

    while (numTamanho >= 1)
    {
        tamanhoDoVetor++;
        numTamanho /= 16;
    }

    int vetor[tamanhoDoVetor];
    resto = 0;
    for (int contador = 0; num >= 1; num /= 16)
    {
        resto = num % 16;
        vetor[contador] = resto;
        contador++;
    }

    for (; tamanhoDoVetor - 1 >= 0; tamanhoDoVetor--)
    {
        if (vetor[tamanhoDoVetor - 1] == 10)

            printf("A");

        else if (vetor[tamanhoDoVetor - 1] == 11)

            printf("B");

        else if (vetor[tamanhoDoVetor - 1] == 12)

            printf("C");

        else if (vetor[tamanhoDoVetor - 1] == 13)

            printf("D");

        else if (vetor[tamanhoDoVetor - 1] == 14)

            printf("E");

        else if (vetor[tamanhoDoVetor - 1] == 15)

            printf("F");

        else
            printf("%i", vetor[tamanhoDoVetor - 1]);
    }
    printf("\n");
    return 0;
}

// Decimal para Octal
int converterDecimalOctal(int num)
{
    int resto, resultado;

    resultado = 0;
    for (int contador = 0; num >= 1; contador++)
    {
        resto = num % 8;

        resultado += resto * (potencia(10, contador));

        num /= 8;
    }
    printf("%i\n", resultado);
}
