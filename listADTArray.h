#ifndef LISTADT_H
#define LISTADT_H
#define MAX 250

typedef struct ListADTArray_struct {
	int items[MAX];
	int size;
} ListADTArray;

ListADTArray createList();

/**
 * append()
 * @description - adds an item to the end of a list
 * @param list - address of the list struct
 * @param item - the item to append
 * @return - 0 on failure, 1 on success
 **/
int append(ListADTArray* L, int X);

/**
 * prepend()
 * @description - preappends an item to the beggining of the list
 * @param list - address of the list struct (to allow modification)
 * @param item - the item to prepend
 * @return - 0 on failure and 1 on success
 **/
int prepend(ListADTArray* L, int X);

int insertAfter(ListADTArray* L, int W, int X);

int removeItem(ListADTArray* L, int X);

int linearSearch(ListADTArray L, int X);

int binarySearch(ListADTArray L, int X);

int isEmpty(ListADTArray L);

int getLength(ListADTArray L);

void print(ListADTArray L);

void printReverse(ListADTArray L);

void sort(ListADTArray* L);

#endif // listADT_H