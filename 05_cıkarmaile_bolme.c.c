#include<stdio.h>
int main(){
int bolunen,bolen,kalan,bolum;
bolum=0;
printf("bolunen sayiyi giriniz: ");
scanf("%d",&bolunen);

printf("bolen sayiyi giriniz: ");
scanf("%d",&bolen);

while(bolunen >= bolen)
{
    bolunen = bolunen - bolen;
    bolum++;
}

kalan = bolunen;

printf("Bolum: %d\n",bolum);
printf("Kalan: %d\n",kalan);

    return 0;
}