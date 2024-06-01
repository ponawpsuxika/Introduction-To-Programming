#include <stdio.h>
int main() {
    int num1,num2, upoloipo;
    //zhtame tous 2 arithmous
    printf("Dwse ton prwto akeraio arithmo: ");
    scanf ("%d", &num1);
    printf("Dwse ton deftero akeraio arithmo : ");
    scanf("%d" , &num2);

/* sumfwna me ton algorithmo tou eukleidh gia ton megisto koino diaireth ,
    se kathe epanalhpsh mexri na ftasw num2=0, thetw ton prwto arithmo iso me ton deftero
    kai ton deftero ton thetw iso me to upoloipo pou afhnei h diairesh tou  num1 me ton num2.
    Afth h diadikasia ginetai mexri na exoume num2=0
    An num2=0 eks' arxhs , tote ennoeitai pws o MKD tha einai o num1 */

    while (num2 > 0)
    {   upoloipo = num1%num2;
        num1 = num2;
        num2 = upoloipo;
    }
    printf ("O Megistos Koinos Diaireths (MKD) tha einai %d.\n",num1);
    return 0;
}
