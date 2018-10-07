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

  LLISTABID_vesFinal (&list);
  if(list.pdi->seg->num == list.ult->num){
    printf("PDI is in the last node\n");
  } //if
  else{
    return 1;
  } //else

  LLISTABID_vesInici (&list);
  if(LLISTABID_inici(list)){
    printf("PDI is in the first node\n");
  } //if
  else{
    return 1;
  } //else

  printf("Attempt to insert number 5\n");
  LLISTABID_inserir (&list, 5);
  printf("Check the node inserted\n");
  if(LLISTABID_consulta (list) == 5){
    printf("The query was successful\n");
  } //if
  else{
    return 1;
  } //else

  printf("\nAll OK\n");
	return 0;
}
