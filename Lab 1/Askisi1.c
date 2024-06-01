#include <stdio.h>

int main()
{
    /* dhlwnoume tis metavlhtes a , b , c pou antiproswpeuoun kathe pleura tou trigwnou
    kathws kai ta sum1=a+b , sum2=a+c, sum3=b+c gia na ergastoume parakatw */

    float a, b, c, sum1, sum2, sum3;
    // zhtame apo ton xrhsth na eisagei tis pleures
    printf("Dwse thn pleura a tou trigwnou \n");
    scanf("%f", &a);
    printf("Dwse thn pleura b tou trigwnou \n");
    scanf("%f", &b);
    printf("Dwse thn pleura c tou trigwnou \n ");
    scanf("%f", &c);

    sum1 = a + b;
    sum2 = a + c;
    sum3 = b + c;

    // pairnoume thn sunthikh pou apaiteitai wste na elegksoume an einai egkuro to trigwno h oxi

    if (sum1 > c && sum2 > b && sum3 > a)
        printf("To trigwno einai egkuro \n");

    else
        printf("To trigwno den einai egkuro \n");

    return 0;
}
