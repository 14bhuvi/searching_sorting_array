#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int top==-1;
int stack[100];
int i,j, item,n, a,high,mid,low,temp,minp,op;
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
void b_sort()
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j>a[j+1]])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
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
int main()
{
    printf("\n enter size of the array");
    scanf("%d",&n);
    printf("\n enter elements for array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(true)
    {
        printf("\n1)l_search\n2)b_search\n3)b_sort\n4)s_so\n5)to exitrt");
        printf("\nEnter your choice:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            printf("enter item:");
            scanf("%d",&item);
            l_search(); break(); getch();
            case 2:
            printf("enter item:");
            scanf("%d",&item);
            b_search(); break(); getch();
            case 3:
            b_sort(); break(); getch();
            case 4:
            s_sort(); break(); getch();
            case 5:
            exit(0);
        }
    }
}
