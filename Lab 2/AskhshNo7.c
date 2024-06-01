#include <stdio.h>
int main()
{   int prosthesh , afairesh , pollaplasiasmos , diairesh;
;
int a,b;
//char metavlhtes wste na anagnwrisei to susthma thn epilogh tou xrhsth
char praksh,morfh;
 // zhtame apo ton xrhsth na dwsei tous arithmous
printf("Dwse ton prwto arithmo \n");
scanf("%d" , &a);

printf("Dwse ton deftero arithmo \n");
scanf("%d" , &b);

//zhtame apo ton xrhsth na grapsei me ENAN MONO xarakthra ti praksh kai morfh thelei
printf("Ti praksh thes na ektelesei to programma? \nGrapse +,-,*,/  : ");
scanf(" %c" , &praksh);

printf("Me poia morfh thes na emfanistei to apotelesma? \nApanta me O(8adiko),D(10diko), H(16diko) : ");
scanf(" %c" , &morfh);

//prakseis
prosthesh=a+b;
afairesh=a-b;
pollaplasiasmos=a*b;
diairesh=a/b;
//sunthikes gia ta characters
if ((praksh=='+') && (morfh=='D'))
{
    printf("\nTo apotelesma einai : %d \n" , prosthesh);

}
 else if ((praksh=='+') && (morfh=='O'))
{
    printf(" \nTo apotelesma %d se 8adiko einai : %o \n" ,prosthesh , prosthesh);

}
else if ((praksh=='+') && (morfh=='H'))
{
    printf("\nTo apotelesma %d se 16adiko einai : %X \n" , prosthesh , prosthesh);

}

if ((praksh=='-') && (morfh=='D'))
{
    printf("\nTo apotelesma einai : %d \n" , afairesh);

}
 else if ((praksh=='-') && (morfh=='O'))
{
    printf("\nTo apotelesma %d se 8adiko einai : %o \n", afairesh, afairesh);

}
else if ((praksh=='-') && (morfh=='H'))
{
    printf("To apotelesma %d se 16adiko tha einai : %X \n" , afairesh,afairesh);

}

 if ((praksh=='*') && (morfh=='D'))
{
    printf("\nTo apotelesma einai : %d \n" , pollaplasiasmos);

}
 else if ((praksh=='*') && (morfh=='O'))
{
    printf("\nTo apotelesma %d se 8adiko einai tha einai : %o \n" ,pollaplasiasmos, pollaplasiasmos);

}
else if ((praksh=='*') && (morfh=='H'))
{
    printf("\nTo apotelesma %d se 16adiko einai : %X \n" , pollaplasiasmos, pollaplasiasmos);
}

if ((praksh=='/') && (morfh=='D'))
{
    printf("\nTo apotelesma einai : %d \n" , diairesh);

}
 else if ((praksh=='/') && (morfh=='O'))
{
    printf("\nTo apotelesma %d se 8adiko einai : %o \n" ,diairesh, diairesh);

}
else if ((praksh=='/') && (morfh=='H'))
{
    printf("\nTo apotelesma %d se 16adiko einai : %X \n" ,diairesh, diairesh);
}

return 0;
}
