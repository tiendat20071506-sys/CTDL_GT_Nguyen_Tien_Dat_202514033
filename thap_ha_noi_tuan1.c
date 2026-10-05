#include <stdio.h>
void thapHaNoi(int n, char nguon, char trunggian, char dich){
  if(n==1){
    printf("Chuyen dia 1 tu coc %c -> coc %c\n", nguon, dich);
    return;
  }
  thapHaNoi(n-1, nguon, dich, trunggian);
  printf("Chuyen dia %d tu coc %c -> coc %c\n", n, nguon, dich);
  
}
