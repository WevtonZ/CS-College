void order(est *vet, int nCases)
{
    int i, j;
    
    for(i=0 ; i<nCases ; i++)
    {
        for(j=i+1 ; j<nCases ; j++)
        {
            if(vet[i].morCons > vet[j].morCons)
            {
                trade(&vet[i], &vet[j]);
            }
        }
    }
}
    
void trade(est* x, est* y)
{
    est temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}
