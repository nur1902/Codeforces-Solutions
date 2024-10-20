#include<stdio.h>
int main()
{
    int n,t=1;
    scanf("%d",&n);

    if(n==1) printf("%d\n",t);
    else{
        for(int i=1;i<n+1;i++)
        {
            t=t+4*(i-1);
        }



             printf("%d\n",t);
    }




}
