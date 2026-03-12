#include "class.h"

int applyMyClasses(int my[], int msize, struct st_class* c[], int csize){
	int number;
	char kname[2][10] = {"A+~F", "P/F"};
	for(int k=0;k<=1;){
		for(int j=0;j<1;){
			printf(">> code number > ");
			scanf("%d", &number);
			for(int i=0;i<csize;i++){
				if(number==c[i]->code){	
					j=1;
					break;
				}
			}
			if(j==0){
				printf("Don't find subject code\n");
				continue;
			}
			for(int i=0;i<msize;i++){
				if(my[i]==number){
					printf("Duplicate subject code\n");
					j=0;
					break;
				}
			if(j==0){
				continue;
			}
		}
		}
		for(int i=0; i<csize; i++){
			if(c[i]->code==number){
				printf("[%d] %s [credit %d - %s]\n",c[i]->code, c[i]->name, c[i]->unit, kname[c[i]->grading-1]);
			}
		}
		my[msize]=number;
		msize++;
		printf("add more?>(YES:1 NO:2)");
		scanf("%d",&k);
		if(k==1){
			continue;
		}else{
			break;
		}
	}
	return msize;
}
