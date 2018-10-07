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
int LLISTABID_inici(LlistaBid l);
int LLISTABID_fi (LlistaBid l);
int LLISTABID_esBuida (LlistaBid l);
void LLISTABID_vesInici (LlistaBid* l);                 //TODO: test
void LLISTABID_vesFinal (LlistaBid* l);                 //TODO: test
void LLISTABID_avanca (LlistaBid* l);                   //TODO: test
void LLISTABID_retrocedeix(LlistaBid *l);               //TODO: test
void LLISTABID_inserir (LlistaBid* l, int num);         //TODO: test
void LLISTABID_insereixOrdenat(LlistaBid *l, int num);  //TODO: test
int LLISTABID_consulta (LlistaBid l);                   //TODO: test
void LLISTABID_esborra (LlistaBid* l);                  //TODO: test
void LLISTABID_destrueix(LlistaBid *l);                 //TODO: test

#endif
