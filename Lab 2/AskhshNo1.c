#include <stdio.h>
int main()
{
    double plhthusmos, aukshsh, arxh, pososto;
    int counter;
    // eisagwgh twn dedomenwn
    printf("Posos einai o plhthusmos?\n");
    scanf("%d", &plhthusmos);
    printf("Poios einai o ethsios rythmos aukhshs? Grapse epi tois ekato ton arithmo (px 50 tois ekato = 50 , 20 tois ekato=20): \n");
    scanf("%lf", &aukshsh);
    // arxh einai o arxikos plhthusmos kai pososto apla h metatroph se epi tois ekato tou ruthmou aukshshs
    arxh = plhthusmos;
    pososto = aukshsh / 100.0;
    /* oso o plhthusmos einai ligoteros apo ton diplasio , tote auksanoume ton counter twn xronwn kata 1
        mexri na ftasoume sto zhtoumeno ,  dhladh sto plhthusmos=2*arxikos_plhthusmos */
    do
    {
        plhthusmos = plhthusmos + (plhthusmos * pososto);
        counter++;
    } while (plhthusmos < arxh * 2);
    printf("Gia na diplasiastei o plhthusmos, xreiazetai na perasoun %d xronia. \n", counter);
    return 0;
}
