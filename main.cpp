//TUGAS UAS PRAKTIKUM
//NAMA : ABDUL LATIF MUNJIAT
//NPM  : 1610631170004
//KELAS 3'A FASILKOM UNSIKA

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define maxstack 100

void inisialisasi();
void push(char);
void pop();
bool isfull();
bool isempty();

struct STACK
{
	int top;
	char stack[maxstack];
};
STACK stackbaru;
char wordInput[maxstack];
int a;

main()
{
	int a,b;

	system("cls");
	inisialisasi();

   printf("*======================================Tugas UAS Praktikum======================================*\n");
   printf(" Struktur Data & Pemrograman\n");
   printf(" Nomor 1 - Membuat Program Stack\n");
   printf(" Created By Abdul Latif Munjiat (1610631170004)\n");
   printf(" Kelas 3'A Fasilkom Unsika\n\n");


	printf("\t\tMasukkan Nama Anda : ");
	gets(wordInput);

	for(a=0; wordInput[a]; a++)
		push(wordInput[a]);

	printf("\n");
	printf("\t\tKata Asli     = ");

	for(b=0; b<=stackbaru.top; b++)
		printf("%c", stackbaru.stack[b]);

	printf("\n\n");
	printf("\t\tKata Terbalik = ");
	pop();
}

void inisialisasi()
{
	stackbaru.top = -1;
}

bool isfull()
{
	if(stackbaru.top == maxstack-1)
		return true;
	else
		return false;
}

bool isempty()
{
	if(stackbaru.top==-1)
		return true;
	else
		return false;
}

void push (char data)
{
	if(isfull()==false)
	{
		stackbaru.top++;
		stackbaru.stack[stackbaru.top]=data;
	}
	else
	{
		printf("\n");
		printf("Maaf, Jumlah Karakter Melebihi Batas\n");
		printf("String Yang Bisa Diproses Adalah : ");

		for(a=0; a<maxstack; a++);
			printf("%c", stackbaru.stack[a]);
		printf("\n");
	}
}

void pop()
{
	while(isempty()==false)
	{
		printf("%c", stackbaru.stack[stackbaru.top]);
		stackbaru.top--;
	}
}
