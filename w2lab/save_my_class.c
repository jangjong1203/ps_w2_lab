#include "class.h"

void saveMyClass(int my[], int msize, struct st_class* c[], int csize){
	int count[4]={0};
	int number=0;
	char kname[2][10] = {"A+~F", "P/F"};
	FILE* file;
	file = fopen("my_classes.txt", "w");
	fprintf(file,"My Classes\n");
	for(int i=0; i<csize; i++){
        for(int j=0;j<msize;j++){
            if(c[i]->code==my[j]){
				number++;
		        fprintf(file, "%d.[%d] %s [credit %d - %s]\n",number,c[i]->code, c[i]->name, c[i]->unit, kname[c[i]->grading-1]);
				count[0]=number;
				count[1]=count[1]+c[i]->unit;
				if(c[i]->grading==1){
					count[2]=count[2]+c[i]->unit;
				}else if(c[i]->grading==2){
					count[3]=count[3]+c[i]->unit;
				}
			}
        }
		
	}
	fprintf(file,"All : %d classes, %d credits (A+~F %d credits, P/F %d credits)",count[0],count[1],count[2],count[3]);

	fclose(file);	

}
	
