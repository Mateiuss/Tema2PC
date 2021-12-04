#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 200
#define MAX2 1000
#define MAX3 10000
#define CIFLEN 20
void afisare(int matrix[MAX][MAX],int,int);
void citire(char*);
int prim(int);
int maxi(int,int);
void decriptareCaesar(char*,int);
void decriptareVigenere(char*,char*);
void sumChars(char*,char*,char*);
void addNull(char *);
void addNUll2(char *);
int nrAparitii(char*,char*);
int nr2grame(char *,char*);
void nr2grameComb(char *);
int nrCuvinte(char*);
void prelucrareSir(char*);
void stergeSir(char*,char*);
void SolveTask1();
void SolveTask2();
void SolveTask3();
