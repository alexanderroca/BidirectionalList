#include "LlistaBid.h"


//
Function that creates a bidirectional list and returns it
//
LlistaBid LLISTABID_crea(){
  LlistaBid l;
  l.pri = (Node*) malloc (sizeof(Node));
  if(l.pri == NULL){
    //deal with error
  } //if
  else{
    l.ult = (Node*) malloc(sizeof(Node));
    if(l.ult == NULL){
      free(l.pri);
    } //if
    else{
      l.pdi = l.pri;
      l.pri -> seg = l.ult;
      l.ult -> seg = NULL;
      l.ult -> ant = l.pri;
    } //else
  } //else
  return l;
}
