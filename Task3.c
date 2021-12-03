#include "utils.h"

void SolveTask3() {
    char sir[MAX3]={'\0'};
    citire(sir);
    printf("%s\n",sir);
    nr2grame(sir);
}

int nr2grame(char *sir){
	int nr=nrCuvinte(sir)-1;
	char *p,*b,csir[MAX3];
	strcpy(csir,sir);
	b=strtok(csir," ,.!;");
	p=strtok(NULL," ,.!;");
	while(p){
		char str[MAX3]={'\0'};
		strcat(str,b);
		strcat(str," ");
		strcat(str,p);
		b=p;
		printf("sir=%s si aparitii=%d\n",str,nrAparitii(sir,str));
		p=strtok(NULL," ,.!;");
	}
}

/*void stergeSir(char *sir,int start,int end){
	char t[MAX3];
}*/

int nrAparitii(char *sir,char *p){
	int nr=0;
	char *a;
	a=strstr(sir,p);
	while(a){
		nr++;
		a=strstr(a+1,p);
	}
	return nr;
}

int nrCuvinte(char *sir){
	int nr=0;
	char *p,csir[MAX3];
	strcpy(csir,sir);
	p=strtok(csir," ,.!;");
	while(p){
		nr++;
		p=strtok(NULL," ,.!;");
	}
	return nr;
}

void citire(char * sir){
	char s[MAX3];
	fgets(s,MAX3,stdin);
	addNull(s);
	strcat(sir,s);
	while(fgets(s,MAX3,stdin)){
		addNull(s);
		strcat(sir," ");
		strcat(sir,s);
	}
}