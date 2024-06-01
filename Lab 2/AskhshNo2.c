#include <stdio.h>
int main()
{ /* Dhlwnoume metavlhtes opou n o arithmos tou xrhsth
i mia int gia epanalhpsh kai flag san boolean orismeno me 0 */
int n,i=1,flag=0;
printf("Dwse mou enan akeraio arithmo : ");
scanf("%d" , &n);
/*loop gia na doume an o n diaireitai MONO apo to 1 kai ton eafto tou ,
dhladh an einai prwtos */
  for (i = 2; i <= n / 2; i++)
{   if (n % i == 0)
{   flag = 1;
      break;
}
    }
  if (flag == 0)
{   printf("O arithmos %d einai prwtos \n", n);
        }
//sunthikh gia na broume tous diairetes tou arithmou n
for(i = 1; i <= n; i++)
{   if((n%i) == 0)
{   printf("\nDiaireitai apo ton %d \n", i);
        }
}
return 0;
}
