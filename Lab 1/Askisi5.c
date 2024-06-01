#include <stdio.h>

int main()
{
    /* dhlwnoume thn metavlhth n , pou einai o arithmos pou eisagei o xrhsths , thn i pou tha xrhsimopoihthei
    ston counter gia na brw to paragontiko kai to counter pou tha bgalei ws apotelesma to factorial tou n */

    int n, i, counter;
    // zhtame apo ton xrhsth na dwsei ton arithmo
    printf("Dwse mou enan akeraio arithmo n : \n");
    scanf("%d", &n);
    // eksetazoume periptwseis(mias kai einai gnwsto pws 1!=1 kai 0!=1)

    if (n > 1)
    {
        counter = 1;
        //"trexoume" to i mexri na ftasei sto n
        for (i = 1; i <= n; i++)
        {
            counter = counter * i;
        }

        printf("To paragontiko tou arithmou %d tha einai : %d ", n, counter);
    }

    else if (n == 1 || n == 0)
    {
        printf("To paragontiko tha einai iso me 1 \n ");
    }
    return 0;
}
