#include <stdio.h>
int main(){
    int num;
    //to size tou array anagrafetai ston periorismo
    int sunolo[30], i, j, temp;
//zhtame apo ton xrhsth na dwsei tous arithmous
    printf("Posous arithmous thes na eisageis ?  ");
    scanf("%d" , &num);
//to programma diavazei tous arithmous apo ton xrhsth ,mexri na ftasei sto dwsmeno size
    for(i = 0; i < num; i++)
        {
            printf("Dwse ton %do arithmo : " , i+1);
            scanf("%d", &sunolo[i]);
        }
// bubblesort
    for(i = 0; i < num - 1; i++)
    {
         for(j = 0; j < num - i - 1; j++)

            {
                if(sunolo[j] > sunolo[j+1])
                    {
                        temp = sunolo[j];

                        sunolo[j] = sunolo[j+1];

                        sunolo[j+1] = temp;

                    }

        }

    }
//ektypwsh
    printf("\nH seira meta thn bubblesort tha einai : ");

    for(i = 0; i < num; i++)
        {

            printf(" %d ", sunolo[i]);

        }
    printf("\n");
    return 0;
}

