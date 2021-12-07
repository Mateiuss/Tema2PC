#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 200
#define MAX2 1000
#define MAX3 10000
#define CIFLEN 20
#define LIN 1000
#define COL 50
void afisare(int matrix[MAX][MAX],int,int);
void citire(char*);
int prim(int);
int maxi(int,int);
void decriptareCaesar(char*,int);
void decriptareVigenere(char*,char*);
void sumChars(char*,char*,char*);
void addNull(char *);
int cautare(char m[LIN][COL], char *, int *, int *);
void salvare_2grame(char m[LIN][COL], char *, int *, int *);
void SolveTask1();
void SolveTask2();
void SolveTask3();
