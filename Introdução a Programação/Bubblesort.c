void order(int *vet, int nCases)
{
    int i, j;
    
    for(i=0 ; i<nCases ; i++)
    {
        for(j=i+1 ; j<nCases ; j++)
        {
            if(vet[i] > vet[j])
            {
                trade(&vet[i], &vet[j]);
            }
        }
    }
}
    
void trade(int* x, int* y)
{
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}
