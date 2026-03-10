#include "class.h"


void printAllClasses(struct st_class* c[], int csize){
	char kname[2][10] = {"A+~F", "P/F"};
	for(int i=0; i<csize; i++){
		printf("[%d] %s [credit %d - %s]\n",c[i]->code, c[i]->name, c[i]->unit, kname[c[i]->grading-1]);
	}
}