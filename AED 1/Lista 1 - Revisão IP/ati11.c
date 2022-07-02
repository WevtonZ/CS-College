#include <stdio.h>

int main(void)
{
    int yr, month, cTemp[31];
    int i, k, maior = 0;
    double tMedia=0;

    scanf("%d", &yr);
    if(yr<2000 || yr>=2022)
    {
        puts("erro");
        return 0;
    }

    scanf("%d", &month);
    if(month <= 0 || month >12)
    {
        puts("erro");
        return 0;
    }

    if(month == 2)
    {
        if(yr%4==0 && yr%100!=0) 
        {
            for(i=0 ; i<29 ; i++)
            {
                scanf("%d", &cTemp[i]);
                if(cTemp[i]>100 || cTemp[i]<-100)
                {
                    puts("erro");
                    return 0;
                }
                tMedia+=cTemp[i];
            }
        }

        else for(i=0 ; i<28 ; i++)
        {
            scanf("%d", &cTemp[i]);
            if(cTemp[i]>100 || cTemp[i]<-100)
            {
                puts("erro");
                return 0;
            }
            tMedia+=cTemp[i];
        }
    }

    else if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        for(i=0 ; i<30 ; i++)
        {
            scanf("%d", &cTemp[i]);
            if(cTemp[i]>100 || cTemp[i]<-100)
            {
                puts("erro");
                return 0;
            }
            tMedia+=cTemp[i];
        }
    }

    else for(i=0 ; i<31 ; i++)
    {
        scanf("%d", &cTemp[i]);
        if(cTemp[i]>100 || cTemp[i]<-100)
        {
            puts("erro");
            return 0;
        }
        tMedia+=cTemp[i];
    }

    tMedia = tMedia/i;

    for (k = 0; k < i; k++)
    {
        if(cTemp[k] > maior) maior = cTemp[k];
    }

    printf("%d ", maior);

    for (k = 0; k < i; k++)
    {
        if(cTemp[k]==maior) printf("%d ", k+1);
    }
    printf("\n");
    printf("%.1lf\n", tMedia);
    return 0;
}