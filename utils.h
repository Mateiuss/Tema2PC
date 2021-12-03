#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 200
#define MAX2 1000
#define CIFLEN 20
void afisare(int matrix[MAX][MAX],int,int); 
int prim(int);
int maxi(int,int);
void decriptareCaesar(char*,int);
void decriptareVigenere(char*,char*);
void sumChars(char*,char*,char*);
void addNull(char *);
void SolveTask1();
void SolveTask2();
void SolveTask3();
