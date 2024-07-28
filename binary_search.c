void b_search0()
{
    int low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==item)
        {
            printf("found");
            exit(0);
        }
        if(item>a[mid])
        {
            low=mid+1;
        }
        if(item<a[mid])
        {
            high=mid-1;
        }
    }
    printf("not found");
}
