#include "class.h"

void editClass(struct st_class* c[], int csize){
	struct st_class* p;
	int code;
	char kname[2][10] = {"A+~F", "P/F"};
	printf(">> Enter a code of class > ");
	scanf("%d", &code);
	for(int i=0;i<csize;i++){
		if(code==c[i]->code){
			p=c[i];
			printf("> Current: [%d] %s [credits %d - %s]\n",p->code, p->name, p->unit, kname[p->grading-1]);
			printf("> Enter new class name > ");
			scanf("%s", p->name);			
			printf("> Enter new credits > ");
			scanf("%d", &(p->unit));
			printf("> Enter new grading(1:Grade, 2: P/F) > ");
			scanf("%d", &(p->grading));
			printf("> Modified.\n");
			c[i]=p;
			break;
		}else if(i==csize-1){
			printf("No subject code");
			return;
		}	
	}				


}
