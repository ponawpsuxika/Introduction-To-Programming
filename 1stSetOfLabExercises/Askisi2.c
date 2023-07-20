#include <stdio.h>
int main()
{   /* dhlwnoume san metavlhtes to hh pou dexetai thn wra
    to mm pou dexetai ta lepta kai ss ta defterolepta. parakatw tha doume pws orizontai oi metavlhtes wres,
    lepta , defterolepta */

    int hh,mm,ss, wres, lepta, defterolepta;

    /* profanws zhtame apo ton xrhsth na kataxwrhsei ta dedomena
    kai kanoume elegxo an einai apodekta. an den einai ,
    xarh sto while , zhtame apo ton xrhsth na kanei pali eisagwgh.
    h diadikasia sunexizetai mexri o xrhsths na eisagei apodekta dedomena */


    printf("Dwse thn wra se morfh 24 wrwn : \n");
    scanf("%d",&hh);

    while (hh>24)
    {
        printf("Mh egkurh kataxwrhsh :( Dokimase pali : \n");
        scanf("%d" , &hh);
    }

    printf("Dwse ta lepta \n");
    scanf("%d" , &mm);

    while(mm>59)
    {

        printf("Mh egkurh kataxwrhsh :( Dokimase pali : \n");
        scanf("%d" , &mm);
    }

    printf("Dwse ta defterolepta \n");
    scanf("%d",&ss);

    while (ss>59)
    {
        printf("Mh egkurh kataxwrhsh :( Dokimase pali : \n");
        scanf("%d" , &ss);
    }
 // ektupwnoume sthn othonh thn wra pou kataxwhrhse o xrhsths

    printf("H wra einai %d:%d:%d \n" , hh,mm,ss);

    /* se afto to shmeio orizoume tis metavlhtes wste na einai apodekta ta apotelesmata.
    afto ginetai dioti , an thewrhsoume pws exoume 23:59:59 , den theloume to programma
    na bgalei pws apomenei mia wra ,ena lepto kai 1 defterolepto mexri tis 12 afou profanws
    kati tetoio einai lathos */

    wres=24-(hh+1);

    lepta=60-(mm+1);

    defterolepta=60-ss;

    printf(" \n \* Mexri tis 12 ta mesanuxta (24:00:00) apomenoun : %d wres , %d lepta , %d defterolepta  */ \n" , wres,lepta,defterolepta);

    return 0;
    }
