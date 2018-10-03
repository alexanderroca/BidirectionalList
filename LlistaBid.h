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

LlistaBid LLISTABID_crea();

#endif
