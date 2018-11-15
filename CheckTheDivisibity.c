#include<stdio.h>
#include<string.h>
void swap(char *l,char *r)
{
    char temp;
    temp=*l;
    *l=*r;
    *r=temp;
}
void permute(char* ch,int l,int r)
{
    int i;
    int j,digit;
    int num=0;
    int n;
    if(l==r)
    {
    //    printf("\n%s",ch);
        n=strlen(ch);
         digit=ch[0]-'0';
         for(j=1;j<=n;j++)
         {
             num=num*10;
            num=num+digit;
            digit=ch[j]-'0';
         }
   //   printf("Number:%d",num);
      if((num%8)==0)
      {
          printf("%d is divisible by 8",num);
      }
    }
    else
    {
        for(i=l;i<=r;i++)
        {
            swap((ch+l),(ch+i));
            permute(ch,(l+1),r);
            swap((ch+l),(ch+i));
        }
    }
}
int main() {
    char ch[100];
    int n;
   scanf("%s",ch);
    n=strlen(ch);
   permute(ch,0,n-1);
  
  
   return 0;
}
