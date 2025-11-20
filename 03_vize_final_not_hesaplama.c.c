#include<stdio.h>
int main(){

float vize,final,ort;
printf("Vize notunuzu giriniz: ");
scanf("%f", &vize);

printf("Final notunuzu giriniz: ");
scanf("%f", &final);

ort=(vize * 40/100) + (final * 60/100);

if(ort<60)
{
    printf("Maalesef bute kaldiniz..\n");
}
else
{
    printf("Tebrikler dersi gectiniz..\n");
}

    printf("Not ortalamaniz: %f",ort);

    return 0;
}