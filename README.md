# Tema2PC

Task1.c:
- pentru rezolvarea acestui task am utilizat o matrice patratica, pentru memorarea si afisarea pasilor, si un sir de caractere, in care am memorat operatiile date;
- cu ajutorul unui pointer, am preluat din sirul de carcatere fiecare operatie data si am prelucrat-o conform cerintei date de catre tema;
- de asemenea, am folosit si doua functii: una de  afisare a matricei rezultate in urma efectuarii tuturor operatiilor si cealalta pentru a determina daca un numar este prim sau nu.

Task2.c:
- pentru acest task am folosit un sir de caractere in care am memorat tipul de decriptare cerut;
- pentru decriptarea Caesar am citit mesajul codificat (intr-un sir de caractere) si cheia (intr-un int). Pe deasupra, am creat o functie care primeste drept parametrii mesajul codificat si cheia si decodifica sirul de caractere in care a fost memorat mesajul;
- pentru decriptarea Vigenere am utilizat doua siruri de caractere, unul pentru mesajul codificat, iar celalalt pentru cheie. In rest, procesul este foarte similar cu decriptarea Caesar, folosindu-se de o functie foarte asemanatoare cu cea folosita pentru decriptarea anterioara;
- pentru adunarea numerelor codificate am utilizat trei siruri de caractere: primul pentru primul numar, cel de-al doilea pentru al doilea numar, iar al treilea pentru suma celor doua numere anterior mentionate. Primele doua siruri sunt decriptate cu ajutorul functiei folosite la decriptarea Caesar. Dupa decriptare, cele doua numere, alaturi de sirul utilizat pentru suma lor, sunt trimise ca variabile pentru functia care efectueaza suma.

Task3.c:
- pentru rezolvarea acestui task am folosit un sir de caractere pentru memorarea textului, o matrice de caractere pentru memorarea 2gramelor si un vector ce memoreaza numarul de aparitii al 2gramelor.
- am creat trei functii care sa ma ajute cu rezolvarea acestui task:
	- functia de citire: citeste pe rand cuvintele si mai apoi le concateneaza in sirul utilizat 		pentru memorarea textului;
	- functia de cautare a unei 2grame in matricea de caractere: aceasta cauta o 2grama, iar daca o 	gaseste, mareste cu 1 numarul de aparitii si returneaza 1, in caz contrar, returneaza 0;
	- functia de salvare a 2gramelor: folosindu-se de doi pointeri pentru a lua cuvintele doua cate 	doua, functia verifica daca 2grama formata de catre cei doi pointeri a mai fost gasita pana 		atunci sau nu (cu ajutorul functiei precedente), iar daca nu a mai fost gasita, este memorata 		in matricea de caractere.
- la final, sunt afisate atat 2gramele memorate in matrice, cat si numarul acestora de aparitii.

-- Am utilizat si o functie care adauga caracterul null in loc de caracterul enter de la finalul sirurilor citite, intitulata addNull.
