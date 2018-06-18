#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//DECLARAÇAO DAS VARIAVEIS
float hemato, hematocrito, hemoglobina, hemoglo, rbcs, rbc;
//VARIAVEIS DE SAIDA DE DADOS
float hcm, mchc,vcm;
void Calcular_Rbc();
void Calcular_VolumeCorpuscularMedio();
void Calcular_HemoglobinaCorpuscularMedio();
void Calcular_concetracaomediaHC();
int main()
{
    setlocale(LC_ALL, "Portuguese");
    Menu_Inicial();
    printf("\n");
    return 0;
}
//FUNÇÃO Calcular_Rbc

void Calcular_Rbc()
{
//
    float hemato, hematocrito, hemoglobina, hemoglo, rbcs, rbc;
    int esc;
    float semop;
//INICIO DO HEMATOCRITO
    do
    {
        printf("\n====================================\n");
        printf("|\tRBC MASTER |");
        printf("\n====================================\n");

//ESCOLHA DO TIPO DE DADO

        printf("ATENCAO!!!!\n\n");
        printf("ESCOLHA UMA DAS SEGUINTES OPCOES PARA CALCULAR HEMATÓCRITO:\n");
        printf("1 - %% \n2 - FRACAO\n");
        scanf("%d",&esc);
        system("cls");
        if(esc ==1)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMATÓCRITO (B): |");
                printf("\n O valor tem que estar entre 0 e 100!");
                printf("\n====================================\n");
                scanf("%f", &hemato);
                if((hemato >= 0) && (hemato <=100))
                {
                    hematocrito = hemato;
                }
                else
                {
                    system("cls");
                }
            }
            while(hemato <0 || hemato > 100 );
        }
        else if(esc == 2)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMATÓCRITO (B): |");
                printf("\n O valor tem que estar entre 0 e 1!");
                printf("\n====================================\n");
                scanf("%f",&hematocrito);
                if(hematocrito >= 0 && hematocrito <=1)
                {
                    hematocrito = hemato;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(hematocrito <0 || hematocrito >1 );
        }
        else
        {
            system("cls");
        }
    }
    while(esc <= 0 || esc >=3 );
// FIM HEMATOCRITO

//INICIO HEMOGLOBINA
    do
    {
        system("cls");
        printf("\n====================================\n");
        printf("|RBC MASTER |\n");
        printf("\n====================================\n");
        printf("ATENCAO!!!!\n\n");
        printf("ESCOLHA UMA DAS SEGUINTES OPCOES PARA CALCULAR HEMOGLOBINA:\n");
        printf("1 - g/dL\n2 - mmol/L\n");
        scanf("%d",&esc);
        system("cls");
        if(esc ==1)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMOGLOBINA (B): |");
                printf("\nO valor tem que estar entre 0 e 40.");
                printf("\n====================================\n");
                scanf("%f",&hemoglo);
                //ESCOLHA DO TIPO DE DADO
                if((hemoglo >= 0) && (hemoglo <=40))
                {
                    hemoglobina = hemoglo;
                }
                else
                {
                    system("cls");
                }
            }
            while(hemoglo <0 || hemoglo > 40 );
        }
        else if(esc == 2)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMOGLOBINA (B): |");
                printf("\no valor tem que estar entre 0 e 24.8");
                printf("\n====================================\n");
                scanf("%f",&hemoglo);
                if((hemoglo >= 0) && (hemoglo <=24.8))
                {
                    hemoglobina = hemoglo;
                }
                else
                {
                    system("cls");
                }
            }
            while(hemoglo <0 || hemoglo > 24.8 );
        }
        else
        {
            system("cls");
        }
    }
    while(esc <= 0 || esc >=24.9 );
    //FIM HEMOGLOBINA

//INICIO HEMACIAS
    do
    {
        system("cls");
        printf("\n====================================\n");
        printf("|RBC MASTER |\n");
        printf("\n====================================\n");
        printf("ATENCAO!!!!\n\n");
        printf("ESCOLHA UMA DAS SEGUINTES OPCOES PARA CALCULAR HEMÁCIAS:\n");
        printf("1 - cells*10^6/mm3 \n2 - cells*10^12/L\n\n");
        scanf("%d",&esc);
        system("cls");
        if(esc ==1)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMÁCIAS (B): |");
                printf("\no valor tem que estar entre 0 e 100.");
                printf("\n====================================\n");
                scanf("%f",&rbc);
//ESCOLHA DO TIPO DE DADO
                if((rbc >= 0) && (rbc <=100))
                {
                    rbcs = rbc;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(rbc <0 || rbc > 100 );
        }
        else if(esc == 2)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMÁCIAS (B): |");
                printf("n\o valor tem que estar entre 0 e 24.8.");
                printf("\n====================================\n");
                scanf("%f",&rbcs);
                if((rbcs >= 0) && (rbcs <=100))
                {
                    rbcs = rbc;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(rbcs <0 || rbcs > 100 );
        }
        else
        {
            system("cls");
        }
        system("cls");
    }
    while(esc <= 0 || esc >=3 );   //FIM HEMACIAS
    printf("\n====================================\n");
    printf("\n SAIDA DOS VALORES\n\n");
    printf("\n====================================\n");
//CALCULO
    hcm =(hemoglobina/rbcs)*10;
    mchc = (hemoglobina/hematocrito)*100;
    vcm =(hematocrito*10)/rbcs;
    printf("\n====================================\n");
    printf("\n H.G.M............: %.2f\n\n", hcm);
    printf("\n V.G.M............: %.2f\n\n",vcm);
    printf("\n C.H.G.M..........: %.2f \n\n", mchc);
    printf("\n====================================\n");
    do
    {
        printf("\n DESEJA VER VALORES NA TABEMA?\n\n");
        printf("1 - SIM \n2 - NÃO\n\n");
        scanf("%d",&esc);
        system("cls");
        if(esc ==1)
        {
            printf("\n----------------------------------------------------------------------------------------------------------\n");
            printf("\nPARAMETROS DE ENTRADA | ABREVIAÇÃO | VALORES | UNIDADES | CF³ | UNIDADES | VALOR NORMAL |\n");
            printf("\n----------------------------------------------------------------------------------------------------------\n");
            printf("\nHEMATOCRITOS | Hct | %.2f | % | 0.01 | FRAÇÃO | 37-52 |\n", hematocrito);
            printf("\nHEMOGLOBINA | Hb | %.2f | g/dL | 0.6206 | mmol/L | 12-18 |\n", hemoglobina);
            printf("\nGLOBULOS VERMELHOS | RBCs | %.2f | cells*10^6/ mm3 | 1 | cells*10^12/L | 4.2-6.3 |\n", rbcs);
            printf("\n----------------------------------------------------------------------------------------------------------\n");
            printf("\n\n\n");
            printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
            printf("\nPARAMETROS DE SAIDA | ABREVIAÇÃO | VALORES | UNIDADES | CF³ | UNIDADES | VALOR NORMAL | EQUAÇÃO |\n");
            printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
            printf("\nVOLUME CORPUSCULAR MEDIO | Hct | %.2f | fL | 1 | um3 | 83-97 | Hct/RBC |\n", vcm);
            printf("\nHEMOGLOBINA CORPUSCULAR MEDIO | Hb | %.2f | pg/cell | | | 27-31 | Hb/RBC |\n", hcm);
            printf("\nCONCETRAÇÃO MEDIA DE HEMOGLOBINA CORPUSCULAR | RBCs | %.2f | g/dL | | | 32-36 | Hb/Hct |\n", mchc);
            printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
        }
        else if(esc==2)
        {
            printf("\nATÉ A PROXIMA!!!\n\n");
        }
        else
        {
            system("cls");
        }
    }
    while(esc !=2);
} //
void Calcular_VolumeCorpuscularMedio()
{
    int esc;
//INICIO DO HEMATOCRITO
    do
    {
        printf("\n====================================\n");
        printf("| VOLUME CORPUSCULAR MEDIO |\n");
        printf("\n====================================\n");
        //ESCOLHA DO TIPO DE DADO
        printf("ATENCAO!!!!\n\n");
        printf("ESCOLHA UMA DAS SEGUINTES OPCOES PARA CALCULAR HEMATÓCRITO:\n");
        printf("1 - %%\n2 - FRACAO\n");
        scanf("%d",&esc);
        system("cls");
        if(esc ==1)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMATÓCRITO (B): |");
                printf("\no valor tem que estar entre 0 e 100.");
                printf("\n====================================\n");
                scanf("%f", &hemato);
                if((hemato >= 0) && (hemato <=100))
                {
                    hematocrito = hemato;
                }
                else
                {
                    system("cls");
                }
            }
            while(hemato <0 || hemato > 100 );
        }
        else if(esc == 2)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMATÓCRITO (B): |");
                printf("o valor tem que estar entre 0 e 1");
                printf("\n====================================\n");
                scanf("%f",&hematocrito);
                if(hematocrito >= 0 && hematocrito <=1)
                {
                    hematocrito = hemato;
                }
                else
                {
                    system("cls");
                }
            }
            while(hematocrito <0 || hematocrito > 1 );
        }
        else
        {
            system("cls");
        }
        system("cls");
    }
    while(esc <= 0 || esc >=3 );
    do
    {
        printf("\n====================================\n");
        printf("| VOLUME CORPUSCULAR MEDIO |\n");
        printf("\n====================================\n");
        printf("ATENCAO!!!!\n\n");
        printf("ESCOLHA UMA DAS SEGUINTES OPCOES PARA CALCULAR HEMÁCIAS:\n");
        printf("1 - cells*10^6/mm3 \n2 - cells*10^12/L\n\n");
        scanf("%d",&esc);
        system("cls");
        if(esc ==1)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMÁCIAS (B): |");
                printf("o valor tem que estar entre 0 e 100.");
                printf("\n====================================\n");
                scanf("%f",&rbc); //ESCOLHA DO TIPO DE DADO
                if((rbc >= 0) && (rbc <=100))
                {
                    rbcs = rbc;
                }
                else
                {
                    system("cls");
                }
            }
            while(rbc <0 || rbc > 100 );
        }
        else if(esc == 2)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMÁCIAS (B): |");
                printf("o valor tem que estar entre 0 e 24.8");
                printf("\n====================================\n");
                scanf("%f",&rbcs);
                if((rbcs >= 0) && (rbcs <=100))
                {
                    rbcs = rbc;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(rbcs <0 || rbcs > 100 );
        }
        else
        {
            system("cls");
        }
    }
    while(esc <= 0 || esc >=3 );
    system("cls");
    printf("\n====================================\n");
    printf("\n SAIDA DOS VALORES");
    printf("\n====================================\n");
    vcm =(hematocrito*10)/rbcs;
    printf("\n V.G.M............: %.2f\n\n",vcm);
//JANELA VOLUME CORPUSCUALR MEDIO
    printf("\n DESEJA VER VALORES NA TABEMA?\n\n");
    printf("1 - SIM \n2 - NÃO\n\n");
    scanf("%d",&esc);
    system("cls");
    if(esc ==1)
    {
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\nPARAMETROS DE ENTRADA | ABREVIAÇÃO | VALORES | UNIDADES | CF³ | UNIDADES | VALOR NORMAL |\n");
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\nHEMATOCRITOS | Hct | %.2f | % | 0.01 | FRAÇÃO | 37-52 |\n", hematocrito);
        printf("\nGLOBULOS VERMELHOS | RBCs | %.2f | cells*10^6/ mm3 | 1 | cells*10^12/L | 4.2-6.3 |\n", rbcs);
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\n\n\n");
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nPARAMETROS DE SAIDA | ABREVIAÇÃO | VALORES | UNIDADES | CF³ | UNIDADES | VALOR NORMAL | EQUAÇÃO |\n");
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nVOLUME CORPUSCULAR MEDIO | Hct | %.2f | fL | 1 | um3 | 83-97 | Hct/RBC |\n", vcm);
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
    }
    else
    {
        printf("\nATÉ A PROXIMA!!!\n\n");
    }
}
void Calcular_HemoglobinaCorpuscularMedio()
{
    printf("\n====================================\n");
    printf("| HEMOGLOBINA CORPUSCULAR MEDIO |\n");
    printf("\n====================================\n"); //INICIO HEMOGLOBINA
    int esc;
    do
    {
        printf("ATENCAO!!!!\n\n");
        printf("ESCOLHA UMA DAS SEGUINTES OPCOES PARA CALCULAR HEMOGLOBINA:\n");
        printf("1 - g/dL\n2 - mmol/L\n");
        scanf("%d",&esc);
        system("cls");
        if(esc ==1)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMOGLOBINA (B): |");
                printf("o valor tem que estar entre 0 e 40");
                printf("\n====================================\n");
                scanf("%f",&hemoglo);
                //ESCOLHA DO TIPO DE DADO
                if((hemoglo >= 0) && (hemoglo <=40))
                {
                    hemoglobina = hemoglo;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(hemoglo <0 || hemoglo > 40 );
        }
        else if(esc == 2)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMOGLOBINA (B): |");
                printf("o valor tem que estar entre 0 e 24.8");
                printf("\n====================================\n");
                scanf("%f",&hemoglo);
                if((hemoglo >= 0) && (hemoglo <=24.8))
                {
                    hemoglobina = hemoglo;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(hemoglo <0 || hemoglo > 24.8 );
        }
        else
        {
            system("cls");
        }
        system("cls");
    }
    while(esc <= 0 || esc >=24.9 );   //FIM HEMOGLOBINA
//INICIO HEMACIAS
    printf("\n====================================\n");
    printf("| HEMOGLOBINA CORPUSCULAR MEDIO |\n");
    printf("\n====================================\n");
    do
    {
        printf("ATENCAO!!!!\n\n");
        printf("ESCOLHA UMA DAS SEGUINTES OPCOES PARA CALCULAR HEMÁCIAS:\n");
        printf("1 - cells*10^6/mm3 \n2 - cells*10^12/L\n\n");
        scanf("%d",&esc);
        system("cls");
        if(esc ==1)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMÁCIAS (B): |");
                printf("o valor tem que estar entre 0 e 100");
                printf("\n====================================\n");
                scanf("%f",&rbc); //ESCOLHA DO TIPO DE DADO
                if((rbc >= 0) && (rbc <=100))
                {
                    rbcs = rbc;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(rbc <0 || rbc > 100 );
        }
        else if(esc == 2)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMÁCIAS (B): |");
                printf("o valor tem que estar entre 0 e 24.8");
                printf("\n====================================\n");
                scanf("%f",&rbcs);
                if((rbcs >= 0) && (rbcs <=100))
                {
                    rbcs = rbc;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(rbcs <0 || rbcs > 100 );
        }
        else
        {
            system("cls");
        }
        system("cls");
    }
    while(esc <= 0 || esc >=3 );
    printf("\n====================================\n");
    printf("\n SAIDA DOS VALORES\n\n");
    printf("\n====================================\n");
//CALCULO
    hcm =(hemoglobina /rbcs)*10;
    printf("\n H.G.M............: %.2f\n\n", hcm);
//JANELA HEMOGLOBINA CORPUSCUALR MEDIO
    printf("\n DESEJA VER VALORES NA TABEMA?\n\n");
    printf("1 - SIM \n2 - NÃO\n\n");
    scanf("%d",&esc);
    system("cls");
    if(esc ==1)
    {
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\nPARAMETROS DE ENTRADA | ABREVIAÇÃO | VALORES | UNIDADES | CF³ | UNIDADES | VALOR NORMAL |\n");
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\nHEMOGLOBINA | Hb | %.2f | g/dL | 0.6206 | mmol/L | 12-18 |\n", hemoglobina);
        printf("\nGLOBULOS VERMELHOS | RBCs | %.2f | cells*10^6/ mm3 | 1 | cells*10^12/L | 4.2-6.3 |\n", rbcs);
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\n\n\n");
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nPARAMETROS DE SAIDA | ABREVIAÇÃO | VALORES | UNIDADES | CF³ | UNIDADES | VALOR NORMAL | EQUAÇÃO |\n");
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nHEMOGLOBINA CORPUSCULAR MEDIO | Hb | %.2f | pg/cell | | | 27-31 | Hb/RBC |\n", hcm);
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
    }
    else
    {
        printf("\nATÉ A PROXIMA!!!\n\n");
    }
}
void Calcular_concetracaomediaHC()
{
    printf("==================================================\n");
    printf("| CONCENTRAÇÃO MEDIA DE HEMOGLOBINA CORPUSCULAR |\n");
    printf("=================================================\n");
    //INICIO HEMOGLOBINA
    int esc;
    do
    {
        printf("ATENCAO!!!!\n\n");
        printf("ESCOLHA UMA DAS SEGUINTES OPCOES PARA CALCULAR HEMOGLOBINA:\n");
        printf("1 - g/dL\n2 - mmol/L\n");
        scanf("%d",&esc);
        system("cls");
        if(esc ==1)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMOGLOBINA (B): |");
                printf("o valor tem que estar entre 0 e 40");
                printf("\n====================================\n");
                scanf("%f",&hemoglo);
                //ESCOLHA DO TIPO DE DADO
                if((hemoglo >= 0) && (hemoglo <=40))
                {
                    hemoglobina = hemoglo;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(hemoglo <0 || hemoglo > 40 );
        }
        else if(esc == 2)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMOGLOBINA (B): |");
                printf("\n o valor tem que estar entre 0 e 24.8");
                printf("\n====================================\n");
                scanf("%f",&hemoglo);
                if((hemoglo >= 0) && (hemoglo <=24.8))
                {
                    hemoglobina = hemoglo;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(hemoglo <0 || hemoglo > 24.8 );
        }
        else
        {
            system("cls");
        }
    }
    while(esc <= 0 || esc >=24.9 );
    do
    {
        printf("\n====================================\n");
        printf("| VOLUME CORPUSCULAR MEDIO |\n");
        printf("\n====================================\n");
        //ESCOLHA DO TIPO DE DADO
        printf("ATENCAO!!!!\n\n");
        printf("ESCOLHA UMA DAS SEGUINTES OPCOES PARA CALCULAR HEMATÓCRITO:\n");
        printf("1 - %\n2 - FRACAO\n");
        scanf("%d",&esc);
        system("cls");
        if(esc ==1)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMATÓCRITO (B): |");
                printf("\n o valor tem que estar entre 0 e 100");
                printf("\n====================================\n");
                scanf("%f", &hemato);
                if((hemato >= 0) && (hemato <=100))
                {
                    hematocrito = hemato;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(hemato <0 || hemato > 100 );
        }
        else if(esc == 2)
        {
            do
            {
                printf("\n====================================\n");
                printf("|HEMATÓCRITO (B): |");
                printf("\n o valor tem que estar entre 0 e 1");
                printf("\n====================================\n");
                scanf("%f",&hemato);
                if(hematocrito >= 0 && hematocrito <=1)
                {
                    hematocrito = hemato;
                }
                else
                {
                    system("cls");
                }
                system("cls");
            }
            while(hematocrito <0 || hematocrito > 1 );
        }
        else
        {
            system("cls");
        }
    }
    while(esc <= 0 || esc >=3 );
    system("cls");
    printf("\n SAIDA DOS VALORES");
    printf("\n====================================\n");
    mchc = (hemoglobina/hematocrito)*100;
    printf("\n C.H.G.M..........: %.2f \n\n", mchc);
    printf("\n====================================\n");
//JANELA CONCETRAÇÃO MEDIA DE HEMOGLOBINA CORPUSCULAR
    printf("\n DESEJA VER VALORES NA TABEMA?\n\n");
    printf("1 - SIM \n2 - NÃO\n\n");
    scanf("%d",&esc);
    system("cls");
    if(esc ==1)
    {
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\nPARAMETROS DE ENTRADA | ABREVIAÇÃO | VALORES | UNIDADES | CF³ | UNIDADES | VALOR NORMAL |\n");
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\nHEMATOCRITOS | Hct | %.2f | % | 0.01 | FRAÇÃO | 37-52 |\n", hematocrito);
        printf("\nHEMOGLOBINA | Hb | %.2f | g/dL | 0.6206 | mmol/L | 12-18 |\n", hemoglobina);
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\n\n\n");
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nPARAMETROS DE SAIDA | ABREVIAÇÃO | VALORES | UNIDADES | CF³ | UNIDADES | VALOR NORMAL | EQUAÇÃO |\n");
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nCONCETRAÇÃO MEDIA DE HEMOGLOBINA CORPUSCULAR | RBCs | %.2f | g/dL | | | 32-36 | Hb/Hct |\n", mchc);
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
    }
    else
    {
        printf("\nATÉ A PROXIMA!!!\n\n");
    }
}
int Menu_Inicial()
{
    int op;
    do
    {
        printf("====================================\n");
        printf("\n");
        printf("GLOBULOS VERMELHOS\n");
        printf("\n");
        printf("====================================\n");
        printf("1 - RBC MASTER\n");
        printf("2 - VOLUME CORPUSCULAR MEDIO\n");
        printf("3 - HEMOGLOBILA CORPUSCULAR MEDIO\n");
        printf("4 - CONCENTRAÇÃO MÉDIA DE HEMOGLOBINA CORPUSCULAR\n");
        printf("====================================\n");
        printf("5 - SAIR\n");
        printf("====================================\n");
        scanf("%d",&op);
        if(op == 1)
        {
            //chamada da rbc
            system("cls");
            Calcular_Rbc();
        }

        else if(op == 2)
        {
            //chamada da Volume Cospurcular Medi
            system("cls");
            Calcular_VolumeCorpuscularMedio();
        }

        else if(op == 3)    //chamada da HemoglobinaCospurcularMedio
        {
            system("cls");
            Calcular_HemoglobinaCorpuscularMedio();
        }

        else if(op == 4)    //chamada da HemoglobinaCospurcularMedio
        {
            system("cls");
            Calcular_concetracaomediaHC();
        }

        else if(op == 5)
        {
            do
            {
                system("cls");
                printf("====================================\n");
                printf("\tATENÇÃO!!\n");
                printf("====================================\n");
                printf("\nDESEJA REALMENTE SAIR? 1 - SIM / 2 - NÃO.\n");
                printf("\n====================================\n");
                printf("\nSELECIONE: ");
                scanf("%d", &op);
                system("cls");
                if(op==1)
                {
                    op = 199;
                    printf("====================================\n");
                    printf("\nSAINDO DO SISTEMA...\n");
                    printf("\n====================================\n");
                }
                else if(op==2)
                {
                    printf("");
                }
                else
                {
                    system("cls");
                    printf("====================================\n");
                    printf("\nOPÇÃO NÃO EXISTE!!\n");
                    printf("\n====================================\n");
                }
            }
            while(op !=199);
        }

        else
        {
            system("cls");
            printf("====================================\n");
            printf("\nOPÇÃO NÃO EXISTE!!\n");
            printf("\n====================================\n");
        }

    }
    while(op !=199);



}
