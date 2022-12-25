#include <stdio.h>  
#include <conio.h>
//deklarasi fungsi
void satu(void);
void dua(void);

//deklarasi variabel
int x;

//definisi fungsi
void satu(void)
{ 
  puts("isi fungsi satu()"); dua();
}

//definisi fungsi
void dua(void)
{ 
  x++; puts("isi fungsi dua()"); 
  if (x<=5) satu();
  else exit(); 
}

main()
{
 clrscr();
 puts("isi fungsi main()");
 satu();
 getch(); 
}
