#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, result, result2, base, expoente, num1, num2, delta1, cateto1, cateto2, catetot, hipotenusa, hipotenusa1;
    int op, ndv, opc;

    printf("do you want make what?\n1 - pitagoras\n2 - baskhara\n3 - rad or pot\n4 - 'normal'\ninsert: ");
    scanf("\n%d", &opc);

    //começo da programação vou fazer o baskhara
    while (opc == 2) {
        printf("first, insert the a, b and c: (if you don't know, a is together the x^2; b is together x and c is the number alone)\n");
        printf("digite a: ");
        scanf("\n%f", &a);
        printf("digite b: ");
        scanf("\n%f", &b);
        printf("digite c: ");
        scanf("\n%f", &c);
        delta1 = -4 * a * c;
        expoente = pow(b, 2);
        delta = expoente + delta1;
        result = (b + delta)/(2 * a);
        result2 = (b - delta)/(2 * a);
        printf("x = %.2f\n", result);
        printf("x' = %.2f\n", result2);
        printf("do you want continue? Y = 2 and N = 9: ");
        scanf("\n%d", &opc);
        }
    //agora a gente vai fazer pitagoras
    while (opc == 1) {
        printf("do you want find hypotenuse or cateto: (1 for hypotenuse or 2 for cateto)\n");
        printf("type your chose: ");
        scanf("\n%d", &ndv);
        if (ndv == 1) {
            printf("input the two cateto\n");
            printf("cateto 1: ");
            scanf("\n%f", &cateto1);
            printf("cateto 2: ");
            scanf("\n%f", &cateto2);
            hipotenusa1 = pow(cateto1, 2) + pow(cateto2, 2);
            hipotenusa = sqrt(hipotenusa1);
            printf("\n%f", hipotenusa);
            printf("do you want continue? Y = 1 and N = 9: ");
            scanf("\n%d", &opc);
        }
        if (ndv == 2) {
            printf("input the hypotenusa and the cateto\n");
            printf("hypotenuse: ");
            scanf("\n%f", &hipotenusa);
            printf("cateto: ");
            scanf("\n%f", &cateto1);
            catetot = pow(hipotenusa, 2) - pow(cateto1, 2);
            cateto2 = sqrt(catetot);
            printf("\n%f", cateto2);
            printf("do you want continue? Y = 1 and N = 9: ");
            scanf("\n%d", &opc);
        }
    }
    //lest goooo tamo indo firme e forte agr é rad e pot (facil)
    while (opc == 3) {
        printf("do you want make potentiation or rooting: (1 to potentiation or 2 to rooting)\n");
        printf("your chose: ");
        scanf("\n%d", &ndv);
        if (ndv == 1) {
            printf("type your base: ");
            scanf("\n%f", &base);
            printf("type your expoent: ");
            scanf("\n%f", &expoente);
            result = pow(base, expoente);
            printf("\n%f", result);
            printf("\n");
            printf("do you want continue? Y = 3 and N = 9: ");
            scanf("\n%d", &opc);
        }
        if (ndv == 2) {
            printf("type your base: ");
            scanf("\n%f", &base);
            printf("type your root: ");
            scanf("\n%f", &expoente);
            result = pow(base, 1/expoente);
            printf("\n%f", result);
            printf("\n");
            printf("do you want continue? Y = 3 and N = 9: ");
            scanf("\n%d", &opc);
        }
    }
    //esse aqui é gambiarra mas fds nn gosto de fazer isso
    while (opc == 4) {
        printf("1 - ad, 2 - minus, 3 - mult, 4 - div\n");
        printf("how many numbers do you want: ");
        scanf("\n%d", &ndv);
        for (int i = 0; i < ndv; i++) {
            printf("type the number: ");
            scanf("\n%f", &num1);
            if (i != ndv - 1) {
                printf("type the op: ");
                scanf("\n%d", &op);
            }
            if (i = ndv - 1) {
                printf("type the number: ");
                scanf("\n%f", &num2);
            }
            if ((op == 1) && (result != 0)) {
                result = result + num1;
            }
            if ((op == 2) && (result != 0)) {
                result = result - num1;
            }
            if ((op == 3) && (result != 0)) {
                result = result * num1;
            }
            if ((op == 4) && (result != 0)) {
                result = result / num1;
            }
            if ((op == 1) && (result == 0)) {
                result = num1 + num2;
            }
            if ((op == 2) && (result == 0)) {
                result = num1 - num2;
            }
            if ((op == 3) && (result == 0)) {
                result = num1 * num2;
            }
            if ((op == 4) && (result == 0)) {
                result = num1 / num2;
            }
            }
            printf("\nthe numb is: %f", result);
            printf("\n");
            printf("do you want continue? Y = 3 and N = 9: ");
            scanf("\n%d", &opc);
        }
    while (opc == 9) {
        printf("do you want continue: 1 - yes and 2 - no\n");
        scanf("\n%d", &ndv);
        if (ndv == 2) {
                return 0;
        }
        if (ndv == 1) {
            printf("do you want make what?\n1 - pitagoras\n2 - baskhara\n3 - rad or pot\n4 - 'normal'\ninsert: ");
            scanf("\n%d", opc);
        }
    }
}
