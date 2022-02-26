/*
Author: Samuel Kheysin
Date: 5/30/21
Description:Use the Unix/Linux compiler to perform certain exercises and create some ASCII art with file I/O
Usage:<exe> <input file> <-a|-i> <outputfile>
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char** argv) {

  FILE* in;//file input
  FILE* out;//file output
  char sen[255];//maximum length
  out = fopen(argv[3] , "w");
  in = fopen(argv[1] , "r");
  if(in ==NULL){
    printf("cannot open file\n");
    return -1;
 }
 
  while(fscanf(in,"%s",sen) != EOF){
    for(int i = 0  ; i < strlen(sen) ; i++){
      if(strcmp(argv[2],"-a")==0){
	switch(sen[i]){//sentence of numbers and letter
	case '0':
	  printf("----" );
	  fprintf(out,"%s","----");
	  break;
	case '1':
	  printf("---#" );
	  fprintf(out,"---#");
	  break;
	case '2':
	  printf("--#-" );
	  fprintf(out,"--#-");
	  break;
	case '3':
	  printf("--##" );
	  fprintf(out,"--##"); 
	  break;
	case '4':
	  printf("-#--" );
	  fprintf(out,"-#--");
	  break;
	case '5':
	  printf("-#-#" );
	  fprintf(out,"-#-#");
	  break;
	case '6':
	  printf("-##-" );
	  fprintf(out,"-##-");
	  break;
	case '7':
	  printf("-###" );
	  fprintf(out,"-###");
	  break;
	case '8':
	  printf("#---" );
	  fprintf(out,"#---");
	  break;
        case '9':
	  printf("#--#" );
	  fprintf(out,"#--#");
	  break;
	case 'A':
	  printf("#-#-" );
	  fprintf(out,"#-#-");
	  break;
	case 'B':
	  printf("#-##" );
	  fprintf(out,"#-##");
	  break;
	case 'C':
	  printf("##--" );
	  fprintf(out,"##--");
	  break;
	case 'D':
	  printf("##-#" );
	  fprintf(out,"##-#");
	  break;
	case 'E':
	  printf("###-" );
	  fprintf(out,"###-");
	  break;
	case 'F':
	  printf("####" );
	  fprintf(out,"####");
	  break;
	case 'a':
	  printf("#-#-" );
	  fprintf(out,"#-#-");
	  break;
	case 'b':
	  printf("#-##" );
	  fprintf(out,"#-##");
	  break;
	case 'c':
	  printf("##--" );
	  fprintf(out,"##--");
	  break;
	case 'd':
	  printf("##-#" );
	  fprintf(out,"##-#");
	  break;
	case 'e':
	  printf("###-" );
	  fprintf(out,"###-");
	  break;
	case 'f':
	  printf("####" );
	  fprintf(out,"####");
	  break;
	}
      }
      else{//invert

        if(sen[i]=='-'){//replace '-' with '#'
          fprintf(out,"#");
          printf("#");
        }
        else{
          fprintf(out,"-");
          printf("-");
        }
      }


    }
    fprintf(out,"\n");
    printf("\n");
  }


  return 0;
}

