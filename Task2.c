#include "utils.h"

void SolveTask2() {
    char cifru[CIFLEN];
    getchar();
    fgets(cifru,CIFLEN,stdin);
    switch(cifru[0]){
	case 'c':
	{
		int key;
		char cod[MAX];
		scanf("%d\n",&key);
		fgets(cod,MAX,stdin);
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
		printf("%s",cod);
		break;
	}
	default: printf("Hi");
    }
}
