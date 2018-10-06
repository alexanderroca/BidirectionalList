#include "LlistaBid.h"


/*
Function that creates a bidirectional list and returns it
*/
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

/*
Function that show if the pointer pdi is in the begining of the list
*/
int LLISTABID_inici(LlistaBid l){
	return l.pdi == l.pri->seg;
}

/*
Function that show if the pointer pdi is in the end of the list
*/
int LLISTABID_fi (LlistaBid l){
	return l.pdi == l.ult;
}

/*
Function that returns '1' if the first node points to the last one (it means that the list is empty) and '0' is the opposite case
*/
int LLISTABID_esBuida (LlistaBid l){
	return l.pri -> seg == l.ult;
}

/*
Procedure that destroy the entire list leaving the PDI null
*/
/*void LLISTABID_destrueix(LlistaBid *l){
	LLISTABID_vesInici(l);
	while (!LLISTABID_esBuida(*l)){
		LLISTABID_esborra(l);
	}
	free(l -> pri);
	free(l -> ult);
	l -> pdi = NULL;
	l -> ult = NULL;
}
*/
