/*  "list.h"

    TAREA 1

    Nombre: Bruno Esteban Diaz Ureta
    Rut: 19850701-6
    Curso: ICI2240-1
    Fecha de entrega: 26/03/2017

*/

/*  FUNCIONES DEL TDA LISTA */

#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    void* data;
    struct node* next;
    struct node* prev;
}Node;

typedef struct
{
    Node* first;
    Node* last;
    Node* current;

}List;

/*<Funciones constructoras de tipos de datos ("list.h")>*/
List* createList();
Node* createNode();

/*<Funciones secundarias del TDA Lista>*/
void push_back(List*,void*);
void push_front(List*,void*);
void* next(List*);
void* prev(List*);
void popCurrent(List*);
void* first(List*);
void* last(List*);

#endif // LIST_H_INCLUDED
