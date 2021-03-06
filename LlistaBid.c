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
      l.pdi = l.ult;
      l.pri -> seg = l.ult;
      l.pri -> ant = NULL;
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
	return l.ult->ant == l.pri;
}

/*
Procedure that puts the PDI to the first node
*/
void LLISTABID_vesInici (LlistaBid* l){
	l -> pdi = l -> pri -> seg;
}

/*
Procedure that puts the PDI to the last node
*/
void LLISTABID_vesFinal (LlistaBid* l){
	l -> pdi = l -> ult -> ant;
}

/*
Procedure that shift the PDI to the right node
*/
void LLISTABID_avanca (LlistaBid* l){
	if(l -> pdi != l -> ult){
		l -> pdi = l -> pdi -> seg;
	}
}

/*
Procedure that shift the PDI to the left node
*/
void LLISTABID_retrocedeix(LlistaBid *l){
	if (l -> pdi != l-> pri) {
		l -> pdi = l -> pdi -> ant;
	}
}

/*
Procedure that selects the position where to insert the new element
*/
void LLISTABID_insereixOrdenat(LlistaBid *l, int num){
  int trobat = 0;

  LLISTABID_vesInici(l);
  while(!trobat){
    if(l->pdi->num > num){

        LLISTABID_avanca (l);
    } //if
    else{
      trobat = 1;
    } //else
  } //while

  LLISTABID_inserir (l, num);
}

/*
Procedure that adds an element to the right of the PDI
*/
void LLISTABID_inserir (LlistaBid* l, int num){
	Node* aux;

  if(l->pdi == l->pri){
    //deal with error
    printf("ERROR\n");
  } //if
  else{
    aux= (Node*) malloc (sizeof (Node));
    if(aux == NULL){
      //deal with error
    } //if
    else{
  		aux -> num = num;
  		aux -> seg = l -> pdi;
      aux -> ant = l -> pdi -> ant;
			l -> pdi -> ant = aux;
			aux -> ant -> seg = aux;
			l -> pdi = aux;
      } //else
  } //else
}


/*
This function returns the number that is in the PDI
*/
int LLISTABID_consulta (LlistaBid l){
	int num;
	if(l.pdi == l.pri || l.pdi == l.ult){
		num = ELEMENT_INDEFINIT;
	}
	else{
		num = l.pdi -> num;
	}
	return num;
}


/*
This procedure clears the PDI by making a free one of the node once it is left out of the list
*/
void LLISTABID_esborra (LlistaBid* l){
	Node* n;
	if(l -> pdi -> ant != NULL && l -> pdi -> seg != NULL){
		l -> pdi -> ant -> seg = l -> pdi -> seg;
		l -> pdi -> seg -> ant = l -> pdi -> ant;
		n = l -> pdi;
		l -> pdi = l -> pdi -> seg;
		free (n);
	}
}

/*
Procedure that destroy the entire list leaving the PDI null
*/
void LLISTABID_destrueix(LlistaBid *l){
	Node *aux;
	while (l->pri != NULL){
		aux = l->pri;
    l->pri = l->pri->seg;
    free(aux);
	}
	l -> pdi = NULL;
	l -> ult = NULL;
}
