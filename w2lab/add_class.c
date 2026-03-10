#include "class.h"

int addNewClass(struct st_class* c[], int csize){

	struct st_class* p = (struct st_class*)malloc(sizeof(struct st_class));



	printf(">> code number > ");
	scanf("%d", &(p->code));
	for(int i=0;i<csize;i++){
		if(p->code==c[i]->code){
			printf("Duplicate subject code");
			free(p);
			return csize;
		}
	}
	printf(">> class name > ");
	scanf("%s", p->name);
	printf(">> credits > ");
	scanf("%d", &(p->unit));
	printf(">> grading (1: A+~F, 2: P/F) > ");
	scanf("%d", &(p->grading));

	c[csize] = p;

	return csize+1;
}
