#pragma once
/*function*/
int main();
void menu();
 /*seminar 3*/
char typeChoice();
int enterSize(const int maxSize);
/*seminar 4*/
int enterRow(const int rowMax);
int enterColumn(const int columnMax);
/*seminar 5*/
void seminar_5();
void displaySeminar_5();
char* fileOpenCheck(int size);
int numberWord(char* buffer, int size);
void displayWord(char* buffer, int size);
void displayData(char* buffer, int size);

/*templates*/
#include "displayData.h"
#include"deleteData.h"
#include"enterData.h"
/*seminar 3*/
#include"sort.h"
#include"productElements.h"
#include"positionNull.h"
#include"positionOfMaxElements.h"
#include"numberOfMaxElements.h"
#include"serchMax.h"

#include"seminar_3p3.h"
#include "seminar_3p2.h"
#include"seminar_3p1.h"
#include "seminar_3.h"


/*seminar 4*/
#include"sumElements.h"
#include "searchNegativeElement.h"
#include "serchMatches.h"

#include"seminar_4p2.h"
#include "seminar_4p1.h"
#include "seminar_4.h"
