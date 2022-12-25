#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//deklarasi fungsi
void satu();
void dua();

//definisi fungsi
void satu(){
    puts("isi fungsi satu()");
}

void dua(){
    puts("isi fungsi dua()");
}

int main()
{
    system("cls");
    puts("isi fungsi main()");
    satu();
    dua();
    getch();
    return 0;
}
