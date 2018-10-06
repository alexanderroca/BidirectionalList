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

      l.pri -> num = ELEMENT_INDEFINIT;
      l.ult -> num = ELEMENT_INDEFINIT;
    } //else
  } //else
  return l;
}

//
Function that direct the pointer pdi to the begining of the list
//
int LLISTABID_inici(LlistaBid l){
  l->pdi = l->pri->seg;
}

//
Function that direct the pointer pdi to the end of the list
//
int LLISTABID_fi (LlistaBid l){
	return l.pdi == l.ult;
}
