#include <stdio.h>
#include <stdlib.h>
void TowerofHanoi(int n,char Source,char dest,char temp)
{
    if(n>1){
        TowerofHanoi(n-1,Source,temp,dest);
        printf("\n Move %d disc from %c to %c",n ,Source,dest);
        TowerofHanoi(n-1,temp,dest,Source);

    }
    else
        printf("\n Move %d disc from %c to %c",n,Source,dest);
}
int main (){
int n;
printf("\n Read number of discs:");
scanf("%d",&n);
TowerofHanoi(n,'S','D','T');
return 0;
}
