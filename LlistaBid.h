#ifndef _LLISTABID_
#define _LLISTABID_

#include <stdio.h>
#include <stdlib.h>

#define ELEMENT_INDEFINIT -1

typedef struct _Node{
  int num;
  struct _Node *seg;
  struct _Node *ant;
}Node;

typedef struct{
  Node *pri;
  Node *ult;
  Node *pdi;
}LlistaBid;

LlistaBid LLISTABID_crea(); //TODO: test
int LLISTABID_inici(LlistaBid l); //TODO: test
int LLISTABID_fi (LlistaBid l); //TODO: test
int LLISTABID_esBuida (LlistaBid l);  //TODO: test
//void LLISTABID_destrueix(LlistaBid *l); //TODO: test

#endif
