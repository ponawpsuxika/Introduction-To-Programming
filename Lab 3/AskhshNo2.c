#include <stdio.h>
int main(){

int pinakas[][20]={'-----','.----','..---','...--',
                    '....-','.....', '-....','--...',
                    '---..','----.'};
int array[20];
int digit[10];
int n,i;
//zhtame apo ton xrhsth na eisage to length tou arithmou
printf("APO POSA PSHFIA APOTELEITAI O ARITHMOS SOU ? ");
scanf("%d" , &n);
//o xrhsths edw eisagei kathe pshfio ena pros ena. Ta pshfia apothikeuontai se ena array gia arxh
    for (i=1;i<=n;i++)
    {
        printf("Eisagete to %do pshfio : " , i);
        scanf("%d" ,&array[i]);
// epeidh emeis omws theloume na elegksoume poio einai to pshfio mesa sto array , kanoume akeraia diairesh tou array me to 10 kai apothikeuoume to upoloipo ths
// ustera diakrinoume periptwseis kai gia kathe pshfio (pou einai to upoloipo tou array mod 10) , o kwdikas ektupwnei ton antistoixo kwdika morse.
        digit[i]=array[i]%10;
           switch (digit[i])
           {
               case 0:
                   printf("-----\n");
                   break;
               case 1:
                    printf(".----\n");
                    break;
               case 2:
                   printf("..---\n");
                   break;
               case 3:
                   printf("...--\n");
                   break;
               case 4:
                   printf("....-\n");
                   break;
                case 5:
                   printf(".....\n");
                   break;
                case 6:
                   printf("-.... \n");
                   break;
                case 7:
                    printf("--... \n");
                    break;
                case 8:
                    printf("---..\n");
                    break;
                case 9:
                    printf("----.\n");
                    break;
            }

    }
return 0;
}
