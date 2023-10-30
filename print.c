#include"print.h"
void printch(char i,int adr){
 *(char*)adr = i;
 return;
}
int adr;
int k;
void print(char* i){
 if (adr < 0xb8000){
  adr = 0xb8000;
}
 for (int j = 0; i[j] != '\0'; j++){
  k++;
  printch(i[j],adr);
  adr = adr + 2;
  if(i[j] == '\n'){
   adr = adr - ((k)*2);
   adr = adr + 160;
   k = 0;
  }
 }
}
