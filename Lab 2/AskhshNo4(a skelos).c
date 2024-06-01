#include <stdio.h>
int main(){
int i=1,n,sum=0;
//o xrhsthw dinei ton akeraio arithmo pou thelei
printf("Dwse akeraio : ");
scanf("%d" , &n);
//me mia loupa ektupwnoume kathe apotelesma opws mas zhteitai sthn ekfwnhsh
while(i<=n)
{
    sum=sum+i;
    printf("To athroisma gia ton %do  oro einai : %d \n" , i,sum);
    i++;
}
return 0;
}
