#include "LlistaBid.h"

//
Main to perform tests
//
void main(){

  LlistaBid list;

  printf("We perform the creation of the ordered bidirectional list:\n");
  list = LlistaBid LLISTABID_crea();
  printf("Value of first ghost: %d - Value of last ghost: %d\n
    Connected first with the last: %d - Connected last with the first: %d\n",
    list.pri->num, list.ult->num, list.pri->seg == list.ult, list.ult->ant == list.pri);

}
