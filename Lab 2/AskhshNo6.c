
#include <stdio.h>
#include <stdlib.h>
int main(){
/*  ***     epekshghsh metavlhtwn     ***
    be= bathmos ergasthriou
    bee=bathmos eksetashs ergasthriou
    base=bathmos aksiologhshs summetoxhs sto ergasthrio
    paradoteaA= ta fail paradotea ths Á kathgorias
    paradoteaB=ta fail paradotea B kathgorias
    paradotea=o sunolikos arithmos twn paradotewn mesa sto eksamhno */


float vathmoseksetashs,be,bee,base,genikoterh_parousia, telikos , sum,fail;
int paradoteaA,paradoteaB,paradotea,apousies;

/* an oi apousies einai parapanw apo 2 ,tote o foithths pairnei strong fail
ara kai apokleismo apo tis eksetaseis
gia olo to trexon akadhmaiko etos */

printf("Poses apousies exeis parei ? \n");
scanf("%d" , &apousies);
while(apousies>2)
{
    printf("Exeis STRONG FAIL => NS gia olh thn akadhmaikh xronia :( \n");
    exit(0);
}
printf("Poso egrapses sthn telikh eksetash ? \n");
scanf("%f" , &vathmoseksetashs);

printf("Poso egrapses sthn eksetash ergasthriou ? \n");
scanf("%f" , &bee);

printf("Posa paradotea eixate olo to eksamhno ? \n");
scanf("%d" , &paradotea);

printf("Apo afta , posa FAIL paradotea ths kathgorias A exeis ? \n");
scanf("%d" , &paradoteaA);

printf("Kai posa FAIL paradotea ths kathgorias B exeis ? \n");
scanf("%d" , &paradoteaB);

printf("Ti vathmo genikoterhs parousias exeis ? \n");
scanf("%f",&genikoterh_parousia);

//ftiaxnoume tis eksiswseis sumfwna me ton kanonismo

base=0.6*(10-(paradoteaA*1)-(paradoteaB*2))+0.4*genikoterh_parousia;

be=0.6*base+0.4*bee;

telikos=0.6*vathmoseksetashs + 0.4*be;

fail=(paradoteaA+paradoteaB);

sum=0.4*paradotea;

if (fail>=sum)
    /* thetoume to base=0 epeidh etsi leei o kanonismos
    tou ergasthriou sxetika me ta fail paradotea */
{   base=0;
    be=0.4*bee;
   telikos=0.6*vathmoseksetashs + 0.4*be;
    printf("O BASE einai 0 \n");
    printf("o telikos sou vathmos me BASE=0 tha einai %.1f \n" , telikos);

}
else
{   printf("o telikos sou vathmos tha einai %.1f \n" , telikos);
}

return 0;
}
