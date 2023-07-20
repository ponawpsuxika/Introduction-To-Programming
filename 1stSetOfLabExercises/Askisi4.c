#include <stdio.h>

int main()
 {
     //thetw sum=1 epeidh sthn ekfwnhsh exw s=1^2 + ... + n^2

    int n , counter , prwtos, sum=1;

    //zhtame apo ton xrhsth na eisagei ton arithmo

    printf("Dwse enan thetiko akeraio arithmo\n");
    scanf("%d", &n);

  /*tsekarw gia kathe arithmo anamesa sto 1 kai sto n
   poioi einai prwtoi wste na tous xrhsimopoihsw sto sum.
    opou 1=true , opou 0=false  */

    for(counter = 2; counter <= n; counter++)
    {
        prwtos = 1;

        for(int i = 2; i <=(counter/2); i++)
    {
    /* ean o n diaireitai apo enan tyxaio i anamesa sto 2 kai sto n/2 , tote den einai prwtos.
        o prwtos arithmos diaireitai MONO apo ton eafto tou kai to 1 */

            if(counter%i==0) {
                prwtos=0;
                break;
            }
        }


        if(prwtos==1)
        // exw thesei parapanw sum=1 kai afou thelw n^2 tote kanw counter*counter
            sum += counter*counter;
    }

    printf("To athroisma twn tetragwnwn twn prwtwn arithmwn (apo to 1 mexri to %d) tha einai : %d",n,sum);
    return 0;

}
