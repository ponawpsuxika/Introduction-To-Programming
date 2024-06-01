#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//orizoume domh student pou tha dexetai ta dedomena pou mas zhtountai sthn ekfwnhsh ths askhshs
struct student
{
    char name[50];
    char last_name[50];
    char arithmos_mhtrwou[10];
    char arithmos_thlefwnou[10];
    char birthday[10];
    int apousies[20];
    float telikh_eksetash[5];
    float bathmos_eksetashs_ergasthriou[5];
    int fail_paradotea_A[10];
    int fail_paradotea_B[10];
    float vathmos_genikhs_parousias[5];
};
int main()
{

    int i, n, j;
    int paradotea;
    float sum;
    float base[20];
    float telikos_bathmos[20];
    float bathmos_ergasthriou[20];
    int fail[20];
    struct student s1;

    printf("Parakalw eisagete ton arithmo twn foithtwn pou summetexoun sthn aksiologhsh tou mathimatos : \n");
    scanf("%d", &n);
    printf("\n");
    printf("Posa PARADOTEA eixate valei olo to eksamhno ? \n");
    scanf("%d", &paradotea);
//upologizoume thn sunthikh me ta paradotea , tha thn aksiopoihsoume meta
    sum = 0.4 * paradotea;

    printf("\n");
// me for loop pairnoume ta dedomena pou theloume apo ton xrhsth
    for (i = 1; i <= n; i++)
    {
        printf("\t%dos foithths \n", i);
        printf("ONOMA: ");
        scanf("%s", &s1.name[i]);

        printf("EPWNUMO: ");
        scanf("%s", &s1.last_name[i]);

        printf("ARITHMOS THLEFWNOU : ");
        scanf("%d", &s1.arithmos_thlefwnou[i]);

        printf("HMEROMHNIA GENNHSHS: ");
        scanf("%s", &s1.birthday);

        printf("APOUSIES pou ekane o foithths : ");
        scanf("%d", &s1.apousies[i]);
/*opws einai hdh gnwsto , an oi apousies einai parapanw apo 2 , tote den mporoume na summetasxoume sthn eksetash ergasthriou kai
dikaioumaste mono to 60% ths grapths telikhs eksetashs
 thn epomenh akadhmaikh xronia exoume upoxrewsh na epanalavoume to ergasthrio kai na eksetastoume ekei */
        if (s1.apousies[i] <= 2)
        {
            printf("ARITHMOS MHTRWOU : ");
            scanf("%d", &s1.arithmos_mhtrwou[i]);

            printf("VATHMOS TELIKHS GRAPTHS EKSETASHS : ");
            scanf("%f", &s1.telikh_eksetash[i]);

            printf("VATHMOS EKSETASHS ERGASTHRIOU : ");
            scanf("%f", &s1.bathmos_eksetashs_ergasthriou[i]);

            printf("VATHMOS GENIKOTERHS PAROUSIAS MESA STO ERGASTHRIO : ");
            scanf("%f", &s1.vathmos_genikhs_parousias[i]);

            printf("FAIL PARADOTEA KATHGORIAS A : ");
            scanf("%d", &s1.fail_paradotea_A[i]);

            printf("FAIL PARADOTEA KATHGORIAS B : ");
            scanf("%d", &s1.fail_paradotea_B[i]);

            // sunthikes gia na upologistei o telikos vathmos me vash ton kanonismo tou ergasthriou

            base[i] = 0.6 * (10 - (s1.fail_paradotea_A[i] * 1) - (s1.fail_paradotea_B[i] * 2)) + 0.4 * s1.vathmos_genikhs_parousias[i];

            bathmos_ergasthriou[i] = 0.6 * base[i] + 0.4 * s1.bathmos_eksetashs_ergasthriou[i];

            telikos_bathmos[i] = 0.6 * s1.telikh_eksetash[i] + 0.4 * bathmos_ergasthriou[i];

            fail[i] = (s1.fail_paradotea_A[i] + s1.fail_paradotea_B[i]);

            if (fail[i] >= sum)
            {
                base[i] = 0;
                bathmos_ergasthriou[i] = 0.4 * s1.bathmos_eksetashs_ergasthriou[i];
                telikos_bathmos[i] = 0.6 * s1.telikh_eksetash[i] + 0.4 * bathmos_ergasthriou[i];
                printf("BASE=0 ------ TELIKOS VATHMOS: %.1f \n", telikos_bathmos[i]);
            }
            else
            {
                printf("TELIKOS VATHMOS: %.1f \n", telikos_bathmos[i]);
            }
        }

        else
        {
            printf("ARITHMOS MHTRWOU : ");
            scanf("%d", &s1.arithmos_mhtrwou[i]);
            printf("VATHMOS TELIKHS GRAPTHS EKSETASHS : ");
            scanf("%f", &s1.telikh_eksetash[i]);
            printf("\t!!! STRONG FAIL GIA OLH THN XRONIA STO ERGASTHRIO !!!\n");
            telikos_bathmos[i] = 0.6 * s1.telikh_eksetash[i];
            printf("O TELIKOS VATHMOS (ME VATHMO ERGASTHRIOU=0) tha einai : %.1f \n", telikos_bathmos[i]);
        }


    }

    return 0;
     }


