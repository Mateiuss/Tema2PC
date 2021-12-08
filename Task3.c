#include "utils.h"

void SolveTask3() {
	char sir[MAX3], doigrame[LIN][COL];
	int aparitii[MAX2] = { 0 }, nrAparitii = 0;
	citire(sir);
	salvare_2grame(doigrame, sir, aparitii, &nrAparitii);
	printf("%d\n", nrAparitii);
	for (int i = 1; i <= nrAparitii; i++) {
		printf("%s %d\n", doigrame[i], aparitii[i]);
	}
}

int cautare(char doigrame[LIN][COL], char *str, int *aparitii, int *nrAparitii) {
	for (int i = 1; i <= *nrAparitii; i++) {
		if(strcmp(doigrame[i], str) == 0) {
			aparitii[i]++;
			return 1;
		}
	}
	return 0;
}

void salvare_2grame(char doigrame[LIN][COL], char *sir, int *aparitii, int *nrAparitii) {
	char *p, *q;
	p = strtok(sir, " .,!;");
	q = strtok(NULL, " .,!;");
	addNull(p);
	addNull(q);
	while (q) {
		char str[MAX2];
		strcpy(str, p);
		strcat(str, " ");
		strcat(str, q);
		addNull(str);
		if (cautare(doigrame, str, aparitii, nrAparitii) == 0) {
			*nrAparitii = *nrAparitii + 1;
			strcpy(doigrame[*nrAparitii], str);
			aparitii[*nrAparitii]++;
		}
		p = q;
		q = strtok(NULL, " .,!;");
	}
}

void citire(char *sir) {
	char str[MAX3];
	getchar();
	fgets(str, MAX3, stdin);
	addNull(str);
	strcpy(sir, str);
	while (fgets(str, MAX3, stdin)){
		addNull(str);
		strcat(sir, " ");
		strcat(sir, str);
	}
}