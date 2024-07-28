void l_search()
{
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            printf("found");
            exit(0);
        }
    }
    printf("not found");
}
