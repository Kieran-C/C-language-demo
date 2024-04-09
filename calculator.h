#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static double runCalculation(double value1, double value2, char* operation) {
    printf("num1: %f num2: %f, op: %s", value1, value2, operation);
    double result;
    switch (*operation) {
        case '+':
            printf("plus");
            result = (value1 + value2);
            return result;
        case '-':
            printf("minus");
            result = (value1 - value2);
            return result;
        case '*':
            printf("multiply");
            result = (value1 * value2);
            return result;
        case '/':
            printf("divide");
            result = (value1 / value2);
            return result;
    }
}

static double calculate(char *equation) {
    char *value1;
    char value2;
    char *operation;

    //This splits up the equation into individual elements
    int counter = 1;
    for (char *p = strtok(equation," "); p != NULL; p = strtok(NULL, " ")){
        printf("loop: p: %s", p);
        switch (counter) {
            case 1:
                printf("here");
                strcpy(value1, p);
                printf("here23123 val1: %s", value1);
                //define char array here and then move it out
            case 2:
                strcpy(operation, p);
            case 3:
                strcpy(value2, p);
        }
        counter++;
    }

    printf("here2");

    double decVal1 = atof(value1);
    double decVal2 = atof(value2);

    double result = runCalculation(decVal1, decVal2, operation);

    printf("\n----------------------------\n");
    printf("Answer: %d", result);

    return result;
}

int initCalculator() {
    char equation[100];

    printf("In the format of number space operator space number, eg. 3 + 5\nPlease enter your calculation: ");
    scanf("%[^\n]", &equation);

    printf("%s ", equation);

    double result = calculate(equation);

    return 0;
}