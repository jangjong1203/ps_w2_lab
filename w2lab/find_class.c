#include "class.h"

void findClasses(char* name, struct st_class* c[], int csize){
	int count = 0;
	char kname[2][10] = {"A+~F", "P/F"};
	printf("Searching (keyword : %s)\n", name);
	for(int i=0; i<csize; i++){
		if(strstr(c[i]->name, name)){
			printf("[%d] %s [credit %d - %s]\n",c[i]->code, c[i]->name, c[i]->unit, kname[c[i]->grading-1]);
			count++;
		}
	}
	printf("%d classes found.\n", count);
}
