#include <stdio.h>

typedef struct
{
    int emp, vit, der;
} time;


#define TAM 5
int main(void)
{
    time t[TAM] = {0}; 
    int mVit=0, mDer=0, mEmp=0;
    int placar[20], i, k, c = 0, verific = 0;

    for(i=0 ; i<20 ; i++)
    {
        scanf("%d", &placar[i]);
        if(placar[i]>2 || placar[i]<0)
        {
            puts("erro");
            return 0;
        }
    }
    for(i=0 ; i<5 ; i++)
    {
        for(k=0 ; k<5 ; k++)
        {
            if(k!=i)
            {
                if(placar[c]==0)
                {
                    t[i].emp++;
                    t[k].emp++;
                }
                if(placar[c]==1)
                {
                    t[i].vit++;
                    t[k].der++;
                }
                if(placar[c]==2)
                {
                    t[k].vit++;
                    t[i].der++;
                }
                c++;
            }
        }
    }

    for(i=0 ; i<5 ; i++)
    {
        if(t[i].vit > mVit) mVit = t[i].vit;
        if(t[i].emp > mEmp) mEmp = t[i].emp;
        if(t[i].der > mDer) mDer = t[i].der;
    }

    for(i=0 ; i<5 ; i++)
    {
        if(t[i].vit==mVit && mVit!=0)
        {
            printf("%d ", i+1);
            verific++;
        }
    }
    if(verific!=0) printf("%d\n", mVit);

    verific = 0;
    for(i=0 ; i<5 ; i++)
    {
        if(t[i].der==mDer && mDer!=0)
        {
            printf("%d ", i+1);
            verific++;
        }   
    }
    if(verific!=0) printf("%d\n", mDer);
    
    verific = 0;
    for(i=0 ; i<5 ; i++)
    {
        if(t[i].emp==mEmp && mEmp!=0)
        {
            printf("%d ", i+1);
            verific++;
        }   
    }
    if(verific!=0) printf("%d\n", mEmp);

    return 0;
}