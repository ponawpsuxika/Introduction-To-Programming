#include <stdio.h>

int main()
{

    /* dhlwnoume metavlhtes mikro=mikro mpoukali kai megalo=megalo mpoukali
    to sunolo anaferetai ston synoliko arithmo mpoukaliwn
    to sum einai to sunoliko kostos se euro(prin apo kapoia pithanh ekptwsh) kai to teliko_kostos einai to poso pou tha plhrwsei
    to atomo pou kanei thn paraggelia en telei */

    int mikro, megalo, sunolo;
    float sum, teliko_kostos;

    // zhtame apo ton xrhsth na eisagei tis posothtes

    printf("Posa mikra mpoukalia tha thelate sthn paraggelia sas ? \n");
    scanf("%d", &mikro);
    printf("Posa megala mpoukalia tha thelate sthn paraggelia sas ? \n");
    scanf("%d", &megalo);

    // upologizoume ta sunolika temaxia kathws kai to arxiko kostos prin thn ekptwsh

    sunolo = mikro + megalo;
    sum = 0.008 * mikro + 0.02 * megalo;
    printf("Plhrwteo poso : %.2f euro \n", sum);

    // sunthikes gia na eksetasoume an uparxei ekptwsh kai se periptwsh pou uparxei upologizoume to teliko poso meta thn ekptwsh

    if (sum > 200 || sunolo > 3000)
    {
        teliko_kostos = sum - 0.08 * sum;
        printf("To teliko kostos katopin ektpwshs tha einai : %.2f euro \n", teliko_kostos);
    }

    else if (sum > 600)
    {
        teliko_kostos = sum - 0.2 * sum;
        printf("To teliko kostos katopin ektpwshs tha einai : %.2f euro \n ", teliko_kostos);
    }
    return 0;
}
