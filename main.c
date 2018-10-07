#include "LlistaBid.h"

/*
Main to perform tests
*/
int main(){

  	LlistaBid list;

  	printf("We perform the creation of the ordered bidirectional list:\n");
  	list = LLISTABID_crea();
  	printf("Value of first ghost: %d - Value of last ghost: %d\n",list.pri->num, list.ult->num);

	if(list.pri->seg == list.ult){
		printf("Connected first with the last\n");
	}	//if
	if(list.ult->ant == list.pri){
		printf("Connected last with the first\n");
	}	//if

  if(!LLISTABID_esBuida (list)){
    printf("Error, list is not empty\n");
    return 1;
  } //if



	return 0;
}
