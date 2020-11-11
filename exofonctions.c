#include<stdio.h>
#include<ctype.h>
#include"Maxi.h"
int main(){
    int nbr1,nbr2;
    while(1){
        printf("Donner la valeur de a:\n");
        scanf("%d",&nbr1);
        printf("Donner la valeur de b:\n");
        scanf("%d",&nbr2);
        if (isalpha(nbr1)==0 && isalpha(nbr2)==0 && nbr1!=nbr2)
        {
            Max(nbr1,nbr2);
        }else
        {
            printf("Veuillez saisr le bon chiffre \n");
        }
    }
    return 0;
}
