#include<stdio.h>
int main()
{
    int i,numberone=0,numbertwo=1,numberthree;
    
    printf("%d%d",numberone,numbertwo);

    for(i=1;i<=8;i++)
    {
    numberthree=numberone+numbertwo;
    printf("  %d ",numberthree );
    numberone=numbertwo;
    numbertwo=numberthree;
    }
}