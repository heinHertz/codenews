#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

#include <stddef.h>
#include "stdint.h"
#include <stdbool.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <assert.h>
#include <unistd.h>

void  mifunction1(int *numero);

int main(void) {

 	int a;       
	int i=0;
	int commas=1;
	printf("t  ffff \n "  );

	char * text = "superfragilistico";

char * text2 = " 1 , 2 , 3 , 4 ,5 , 6";

  for(i=0; text2[i] != '\0'; i++){       
			if(text2[i]==','){ commas++;}
            }

	printf("Ressss _ ------------%d-------------", commas);

	printf("hello");

	char * new = malloc( 5 );

	memcpy(new, text+1, 5);

	printf("-----%s-----", new);


	int tam= 3, Block_size =4;

		int tamanioSuperbloque=tam/Block_size;

		if(tam % Block_size != 0){
			tamanioSuperbloque++;
		}


	printf(" num :  %d  \n", tamanioSuperbloque );


	int tid[2];

	tid[0]=1;	
	
	pthread_t thr1;
	int err = pthread_create(&thr1, NULL, (void *)mifunction1, NULL );
	 pthread_detach(thr1);

//printf("val  %d", val);
	//NO HACE FALTA FREE PORQEU EL SISTEMA YA LO ASIGNA
	// VALGRIND NO ENCUETRA PROBLEMAS, FUNCIONA. no hace falta malloc ni realloc
	

//	pthread_join(thr1, NULL);
sleep(5);
return 0;
}


void  mifunction1(int * numero){

	while(1){
	sleep(1);

	printf("hilo 1\n");

	
	}

}

