
void printch(char i,int adr){
 *(char*)adr = i;
 return;
}
int adr;
void print(char* i){
 if (adr < 0xb8000){
  adr = 0xb8000;
}
 for (int j = 0; i[j] != '\0'; j++){
  printch(i[j],adr);
  adr = adr + 2;
  if(i[j] == '\n'){
   adr = adr - ((j+1)*2);
   adr = adr + 160;
  }
 }
}
void main(){
 print("Test\n");
 print("Test#1.5\n");
 print("Test#2");
}
