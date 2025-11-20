#include<stdio.h>
int main(){
int i,sayi;
int faktoriyel=1;
printf("bir sayi giriniz: ");
scanf("%d", &sayi);

for(i=1;i<=sayi;i++)
{
    faktoriyel=faktoriyel*i;
}
printf("girdiginiz sayinin faktoriyeli=%d",faktoriyel);

    return 0;
}
