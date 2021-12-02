#include "utils.h"

void SolveTask2() {
    char cifru[CIFLEN];
    getchar();
    fgets(cifru,CIFLEN,stdin);
    switch(cifru[0]){
	case 'c':
	{
		int key;
		char cod[MAX2];
		scanf("%d\n",&key);
		fgets(cod,MAX,stdin);
		addNull(cod);
		decriptareCaesar(cod,key);
		printf("%s",cod);
		break;
	}
	case 'v':
	{
		char cod[MAX2],key[11];
		fgets(key,11,stdin);
		fgets(cod,MAX2,stdin);
		addNull(cod);
		addNull(key);
		decriptareVigenere(cod,key);
		printf("%s",cod);
		break;	
	}
	case 'a':
	{
		int key;
		char N1[MAX2],N2[MAX2],sum[MAX2];
		scanf("%d\n",&key);
		fgets(N1,MAX2,stdin);
		fgets(N2,MAX2,stdin);
		addNull(N1);
		addNull(N2);
		decriptareCaesar(N1,key);
		decriptareCaesar(N2,key);
		printf("N1=%s\nN2=%s\n",N1,N2);
		sumChars(N1,N2,sum);
	}
	default: printf("Hi");
    }
}

void decriptareCaesar(char *cod,int key){
	for(int i=0;i<strlen(cod);i++){
		if(cod[i]>='0'&&cod[i]<='9'){
			cod[i]-=key%10;
			if(cod[i]<'0')
				cod[i]='9'-('0'-cod[i])+1;
		}
		else if(cod[i]>='a'&&cod[i]<='z'){
			cod[i]-=key%26;
			if(cod[i]<'a')
				cod[i]='z'-('a'-cod[i])+1;
		}
		else if(cod[i]>='A'&&cod[i]<='Z'){
			cod[i]-=key%26;
			if(cod[i]<'A')
				cod[i]='Z'-('A'-cod[i])+1;
		}
	}
}

void decriptareVigenere(char *cod,char *key){
	for(int i=0;i<strlen(cod);i++){
		int key2=key[i%(strlen(key))]-'A';
		if(cod[i]>='0'&&cod[i]<='9'){
			cod[i]-=key2%10;
			if(cod[i]<'0')
				cod[i]='9'-('0'-cod[i])+1;
		}
		else if(cod[i]>='a'&&cod[i]<='z'){
			cod[i]-=key2%26;
			if(cod[i]<'a')
				cod[i]='z'-('a'-cod[i])+1;
		}
		else if(cod[i]>='A'&&cod[i]<='Z'){
			cod[i]-=key2%26;
			if(cod[i]<'A')
				cod[i]='Z'-('A'-cod[i])+1;
		}
	}
}

void addNull(char *sir){
	if(sir[strlen(sir)-1]=='\n')
		sir[strlen(sir)-1]='\0';
}

void sumChars(char *N1,char *N2,char *sum){
	
	/*if(strlen(N1) < strlen(N2)){
		for(int i
	}*/
}
