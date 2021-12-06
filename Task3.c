#include "utils.h"

void SolveTask3() {
    char sir[MAX3],sirPrelucrat[MAX3];
    citire(sir);
    strcpy(sirPrelucrat,sir);
    prelucrareSir(sirPrelucrat);
    printf("%s\n",sirPrelucrat);
    printf("%d\n",nr2grame(sirPrelucrat,sir));
    nr2grameComb(sirPrelucrat);
}

void nr2grameComb(char *sir){
	char *p,*b,csir[MAX3];
	strcpy(csir,sir);
	b=strtok(csir," ,.!;");
	p=strtok(NULL," ,.!;");
	while(p){
		char str[MAX3];
		strcpy(str,b);
		strcat(str," ");
		strcat(str,p);
		addNull(str);
		int aparitii=nrAparitii(p+strlen(p)+1,str);
		printf("%s %d\n",str,aparitii+1);
		if(aparitii){
			stergeSir(p+strlen(p)+1,str);
			//printf("p+strlen(p)+1:%s\n",p+strlen(p)+1);
		}
		b=strtok(NULL," ,.!;");
		p=strtok(NULL," ,.!;");
	}
}

int nr2grame(char *sir,char *sirNrCuvinte){
	int nr=nrCuvinte(sirNrCuvinte)-1;
	char *p,*b,csir[MAX3];
	strcpy(csir,sir);
	b=strtok(csir," ,.!;");
	p=strtok(NULL," ,.!;");
	while(p){
		char str[MAX3];
		strcpy(str,b);
		strcat(str," ");
		strcat(str,p);
		addNull(str);
		int aparitii=nrAparitii(p+strlen(p)+1,str);
		if(aparitii>0){
			nr=nr-aparitii;
			stergeSir(p+strlen(p)+1,str);
		}
		b=strtok(NULL," ,.!;");
		p=strtok(NULL," ,.!;");
	}
	return nr;
}

void stergeSir(char *sir,char *delSir){
	char *a;
	a=strstr(sir,delSir);
	while(a){
		char t[MAX3];
		strcpy(t,a+strlen(delSir)+1);
		strcpy(a,t);
		addNull(a);
		a=strstr(sir,delSir);
	}
}

int nrAparitii(char *sir,char *p){
	int nr=0;
	char *a;
	a=strstr(sir,p);
	while(a){
		if(*(a+strlen(p))==' '||*(a+strlen(p))=='\0')
			nr++;
		a=strstr(a+strlen(p)+1,p);
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

void prelucrareSir(char *sir){
	char csir[MAX3],*p,*q;
	strcpy(csir,sir);
	sir[0]='\0';
	q=strtok(csir," ,.!;");
	p=strtok(NULL," ,.!;");
	while(p){
		char str[MAX3];
		strcpy(str,q);
		strcat(str," ");
		strcat(str,p);
		addNull(str);
		strcat(sir,str);
		strcat(sir," ");
		q=p;
		p=strtok(NULL," ,.!;");
	}
	addNull(sir);
}

void citire(char * sir){
	char s[MAX3];
	getchar();
	fgets(s,MAX3,stdin);
	addNull(s);
	strcpy(sir,s);
	while(fgets(s,MAX3,stdin)){
		addNull(s);
		strcat(sir," ");
		strcat(sir,s);
	}
}