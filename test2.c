int giam(int a[],int n)
{
    int i,j;
    int tg;
    for(i=0;i<(n-1);i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(a[i] < a[j])
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
        /*test1*/
        printf("a[%d]=%d",i,a[i]);
    }
}
