void s_sort()
{
    for(i=0;i<n-1;i++)
    {
        minp=i;
        for(j=i+1;j<n;j++)
        {
            if(a[minp]>a[j])
            {
                minp=j;
            }
            temp=a[minp];
            a[minp]=a[i];
        }
    }
} 
