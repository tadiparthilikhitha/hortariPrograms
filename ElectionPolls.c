#include<stdio.h>
#include<string.h>
int main()
{
    char a[100][100],b[100];
    int i,n,j,m,temp=0,max,index,max_index;
    printf("Enter the no of votes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        b[i]=0;
    }

   // printf("\n");

   for(i=0;i<n;i++)
   {
      // m=strlen(a[i]);
       for(j=i+1;j<n;j++)
       {
           if(strcmp(a[i],a[j])==0){
           // printf("\nEquals");
            b[i]=b[i]+1;
            b[j]=-1;
           }
       }
    }
    max=0;
//    stamp=0;
    index=0;
    max_index=0;
    for(i=0;i<n;i++)
    {
            if(b[i]>=max)
            {
                max=b[i];
                index=i;
            }
    }
    for(i=0;i<n;i++){
            if(b[i]==max)
            {
                if(strcmp(a[i],a[index])>0){
                    max_index=i;
                    index=i;}
                else{
                    max_index=index;
                }
            }

    }
  //  for(i=0;i<n;i++)
    {
        printf("Election Winner:%s\n",a[max_index]);
    }
    return 0;
}
