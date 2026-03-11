#include "class.h"

void saveMyClass(int my[], int msize, struct st_class* c[], int csize){
	FILE* file;
	file = fopen("my_classes.txt", "w");
	for(int i=0; i<csize; i++){
        for(int j=0;j<msize;j++){
            if(c[i]->code==my[j]){
		        fprintf(file, "%d %s %d %d\n",c[i]->code, c[i]->name, c[i]->unit, c[i]->grading);
            }
        }
	}
	fclose(file);	
}
	
