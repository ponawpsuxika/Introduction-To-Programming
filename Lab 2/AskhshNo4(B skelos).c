#include <stdio.h>
int main(){
//dhlwnoume to athroisma iso me mhden sthn arxh
int i=1,n,sum=0;

printf("Dwse akeraio : ");
scanf("%d" , &n);
/* oso to i einai mikrotero h iso tou n , eksetazoume
    an o arithmos einai artios h perittos .
    An einai artios (afhnei dhladh upoloipo 0 kata thn diairesh me 2 )
    , tote ton afairoume apo to athroisma
    An einai perittos (Afhnei antistoixa upoloipo 1) , tote ton prosthetoume*/
while(i<=n)
{ if (i%2==1)
    {
        sum+=i;
        printf("To athroisma gia ton %do  oro einai : %d \n" , i,sum);
        i++;
        }
    else if (i%2==0)
    {   sum=sum - i;
        printf("To athroisma gia ton %do  oro einai : %d \n" , i,sum);
        i++;
    }

}
//ektupwnoume to teliko apotelesma
printf("\n To athroisma tha einai %d. \n" , sum);
return 0;
}
