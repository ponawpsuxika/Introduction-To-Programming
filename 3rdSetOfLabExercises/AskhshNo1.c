#include <stdio.h>
int main()
{   int num,i,j;

    printf("Mexri poion arithmo epithumeite na ektupwsw tous prwtous arithmous?\n ");
    scanf("%d",&num);
//to size tou array eksartatai apo to plhthos twn arithmwn pou thelw na elegksw
//kai to dhlwnw afotou eisagei o xrhsths ton arithmo wste na dhlwsei to megethos aftomata xwris lathi

    int prwtoi[num+1];
//katagrafw olous tous arithmous apo to 2 mexri ton arithmo tou xrhsth se mia lista
    for(i=2;i<=num;i++)
        prwtoi[i] = i;
 i=2;
    /*oso o arithmos i einai mikroteros apo thn tetragwnikh riza h isos me afth
    tou arithmou n, tote diagrafoume ta pollaplasia aftou tou arithmou .
     Sunexizoume mexri na teleiwsoun oi arithmoi mas*/

    while ((i*i)<= num)
        {
            if (prwtoi[i] != 0)
            { // elegxos gia ta pollaplasia tou prwtou arithmou
                for(j=2;j<num;j++)
                {
                    if (prwtoi[i]*j>num)
                        break;
                    else
                       {    //thetw ta pollaplasia twn prwtwn arithwmn isa me to mhden mesa sto array
                           prwtoi[prwtoi[i]*j]=0;
                       }
                    }
                }
        i++;
            }


    printf("\nSymfwna me to KOSKINO TOU ERATOSTHENH oi prwtoi arithmoi apo to 1 mexri to %d einai: \n" , num);

    for(i=2;i<=num;i++)
        {   //o,ti array element den einai orismeno apo prin iso me to 0 , to ektupwnw kai etsi exw thn lista twn prwtwn arithmwn
            if (prwtoi[i]!=0)
              {
                   printf(" %d  ",prwtoi[i]);
              }
        }
    printf("\n");
    return 0;
}
