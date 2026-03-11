#include "class.h"

int applyMyClasses(int my[], int msize, struct st_class* c[], int csize){
	int number;
	printf(">> code number > ");
	scanf("%d", &number);
	for(int i=0;i<csize;i++){
		if(number==c[i]->code){	
			break;
		}else if(i==csize-1){
			printf("Don't find subject code\n");
			return msize;
		}
	}
	for(int i=0;i<msize;i++){
		if(my[i]==number){
			printf("Duplicate subject code\n");
			return msize;
		}
	}
	my[msize]=number;
	msize++;
	return msize;
					
	
}
