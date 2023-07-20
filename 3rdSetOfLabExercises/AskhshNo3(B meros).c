#include <stdio.h>

/* opws sto prwto part afths ths askhshs , etsi kai edw h function einai AKRIVWS to idio pragma me to "for loop" tou prwtou part.
 Dhladh exoume ena array , kai sumfwna me thn bubblesort, kanoume elegxo kathe stoixeiou tou array
 kai to sugkrinoume me to prohgoumeno tou . Sto telos exoume ousiastika tous arithmous taktinomhmenous kata auksousa seira */

void bubblesortfunc(int pinakas[], int arithmos)
{   int i, j, temp;

    for(i=0;i < arithmos-1;i++)
        {
            for(j=0;j<arithmos-i-1;j++)
                {
                    if(pinakas[j] > pinakas[j+1])
                    {
                        temp = pinakas[j];

                        pinakas[j] = pinakas[j+1];

                        pinakas[j+1] = temp;

                    }
                }
    }
}
int main(){
    int pinakas[30], plhthos, i;
    //o xrhsths eisagei to plhthos twn arithmwn pou thelei na taksinomhsei
    printf("Posous AKERAIOUS arithmous tha thelate na taksinomhsete ? \n ");
    scanf("%d", &plhthos);

//dexomaste tous arithmous pros taksinomhsh
    for(i = 0; i < plhthos; i++)
        {
            printf("Parakalw eisagete ton %do arithmo : ",i+1);
            scanf("%d", &pinakas[i]);
        }
    //call thn function pou exei oristei parapanw wste na ektupwsei tous arithmous meta thn bubblesort
    bubblesortfunc(pinakas, plhthos);
    printf(" \nMeta thn xrhsh ths bubblesort:");

    for(i = 0;i<plhthos;i++)
        {
            printf(" %d ",pinakas[i]);
        }
printf("\n");
    return 0;

}

