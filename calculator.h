#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static double calculate(char *equation) {
    char value1;
    char value2;
    char *operation;

    int counter = 1;
    for (char *p = strtok(equation," "); p != NULL; p = strtok(NULL, " ")){
        puts(p); //for dubugging purposes
        switch (counter) {
            case 1:
                value1 = atof(p);
            case 2:
                strcpy(operation, p);
            case 3:
                value2 = atof(p);
        }
        counter++;
    }

    printf("V1: %d, operator: %s, V2: %d", value1, operation, value2);
    return 0;
}

int initCalculator() {
    char equation[100];

    printf("In the format of number space operator space number, eg. 3 + 5\nPlease enter your calculation: ");
    scanf("%[^\n]", &equation);

    printf("%s ", equation);

    double result = calculate(equation);

    return 0;
}