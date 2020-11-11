#include<stdio.h>
#include<ctype.h>
int Max(int a, int b){
    int maxi;
    if (a>b)
    {
     maxi=a;
    
    }else
    {
      maxi=b;
    }
    printf("le max est: %d\n",maxi);
return 0;
}