#include<stdio.h>
int main()
{
    int a[100];
    int i,j,n,inc=1;
    printf("Enter size of an array:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        printf("%d. ",inc++);
        scanf("%d",&a[i]);}
    printf("Elements with duplicates:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n ;j++)

        {
            if(a[i]==a[j]&&(a[i]!=-1))
            {
                a[j]=-1;
            }

        }

    }
 printf("\nElements without duplicates:");

    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        printf("%d ",a[i]);
    }
    return 0;
}
