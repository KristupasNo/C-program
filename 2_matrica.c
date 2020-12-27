// 2016012 / Kristupas Norvaiša / norvaisakristupas@gmail.com / I uzd.
#include <stdio.h>
#include <stdlib.h>

void spirale (int N)
{
    int riba=N-1, Nliko=N-1, tikrinti=1, kryptis=1, eilute=0, stulpelis=0, matrica[N][N]; // 1=desine, 2=kaire, 3=apacia, 4=virsus

    for (int i=1; i<=N*N; i++)
    {
        matrica[eilute][stulpelis] = i;

        switch (kryptis)
        {
            case 1:
                stulpelis+=1;
                break;

            case 2:
                stulpelis-=1;
                break;

            case 4:
                eilute-=1;
                break;

            case 3:
                eilute+=1;
        }

        if (i==riba)
        {
            riba+=Nliko;

            if (tikrinti!=2)
            {
                tikrinti=2;
            }
            else
            {
                tikrinti=1;
                Nliko-=1;
            }

           switch (kryptis)
            {

                case 1:
                    kryptis=3;
                    break;

                case 3:
                    kryptis=2;
                    break;

                case 2:
                    kryptis=4;
                    break;

                case 4:
                    kryptis=1;
                    break;
            }
        }
    }

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            if (j==0)
                printf("\n");

            printf("%d ", matrica[i][j]);
        }
    }
}

int main()
{
    int N;
    char c;

    printf("Iveskite SVEIKA, TEIGIAMA skaiciu: ");

    while (!(scanf("%d%c", N, c)==2 && N!=0 && c=='\n'))
    {
        scanf("%*[^\n]");

        printf("Iveskite SVEIKA, TEIGIAMA skaiciu: ");
    }

    spirale (N);

    return 0;
}
