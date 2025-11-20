#include<stdio.h>
int main(){

int sayi1,sayi2,obeb;

printf("Birinci sayiyi giriniz: ");
scanf("%d",&sayi1);
printf("İkinci sayiyi giriniz:  ");
scanf("%d",&sayi2);

if(sayi1<=0 || sayi2<=0)
{
    printf("Lutfen pozitif sayilar giriniz.");
}
else
{
    while(sayi1!=sayi2)
    {
        if(sayi1>sayi2)
        {
            sayi1=sayi1-sayi2;
        }
        else
        {
            sayi2=sayi2-sayi1;
        }
    }
    obeb=sayi1;
    printf("OBEB: %d",obeb);
}

return 0;
}






