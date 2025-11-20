#include<stdio.h>
int main(){
int sayi,i;
int asal=1;

printf("Bir sayi giriniz: ");
scanf("%d",&sayi);  

for(i=2;i<=sayi/2 && asal==1;i++)
{
    if(sayi%i==0)
    {
        asal=0;
    }
}

if(asal==1 && sayi>1)
{
    printf("Sayi asaldir.\n");
}
else
{
    printf("Sayi asal degildir.\n");    
}

return 0;
}