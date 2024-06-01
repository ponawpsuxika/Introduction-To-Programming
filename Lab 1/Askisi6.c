#include<stdio.h>

int main(){
    /* orizoume ena array me apeiro size to opoio tha diathrei ton arithmo n pou kataxwroume
    kai int to upoloipo pou tha xrhsimopoihsoume se sunthikh */

    int arrayArithmos[]={0}, n, upoloipo;
    //to array den exei sugkekrimeno megethos

 //zhtame ton arithmo apo ton xrhsth
    printf("Dwse enan thetiko akeraio arithmo n :  \n");
    scanf("%d", &n);

    while(n>0)
{
    //apothikeuw to upoloipo tou arithmou modulo 10
        upoloipo = n % 10;

    /* ean uparxei to idio upoloipo ston arithmo(to opoio emeis to kwdikopoioume me 1 mesa sto array)
    tote uparxei hdh to pshfio mesa ston arithmo  */


        if(arrayArithmos[upoloipo] == 1)
            break;

        //Break to programma kai katevainw sthn if sunthikh


        /* an den uparxei hdh to pshfio, thetoume to upoloipo iso me 1
        kai epanalambanoume thn diadikasia mexri na broume pithano idio pshfio*/

        else
            arrayArithmos[upoloipo] = 1;
    /* xrhsimopoiw thn diairesh me 10 wste na "afairesw" to teleftaio pshfio
    kai na sunexisw na elegxw ta upoloipa pshfia sta aristera tou */

        n = n / 10;
    }
// sunthikh "if" me n boolean kai ektupwsh mhnumatos
    if(n)
        printf("Epanalhpsh pshfiou!!! \n");
    else
        printf("Kamia epanalhsph pshfiou. \n");

    return 0;
}
