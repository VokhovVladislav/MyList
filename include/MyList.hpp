#ifndef MAIN_MYLIST_H
#define MAIN_MYLIST_H

#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<ctime>
using namespace std;

struct Structure{
    unsigned short val;
    Structure* past;
    Structure* next;
};


class MyList
{
public:
    MyList();  // Создает нулевой список

    MyList(unsigned len);  // Создает список из len элементов и заполняет его случайными значениями от 0 до 100

    MyList(unsigned len,unsigned short value);  //Создает список из len элементов и заполняет его значением value

    MyList(MyList& other);  // Конструктор копирования

    unsigned short get_rand_un_short(int min,int max) const;

    bool is_empty() const;

    bool is_null() const;

    unsigned size() const;

    Structure* get_element(unsigned number) const;  // Выдает указатель на элемент по индексу

    unsigned short get_value(unsigned index) const; // Выдает значение элемента по индексу

    void set_value(unsigned short value, unsigned index);  // Устанавливает значение элемента

    void add_element(Structure* other);      // Добавляет элемент в конец контейнера

    void add_element(Structure* other,unsigned index); // Добавляет элемент по индексу

    void add_element(unsigned short value, unsigned index); // Добавляет элемент по индексу

    void add_element(unsigned short value);   // Добавляет элемент в конец контейнера

    void delete_element(unsigned index);  // Удаляет элемент по индексу

    void resize(int delta);    // Изменение размера контейнера

    Structure *getFirst() const;

    Structure *getLast() const;

    MyList& operator = (const MyList &cop);

    void print() const;

    ~MyList();
private:
    unsigned _len;
    Structure* _first;
    Structure* _last;
    bool _correct;
};


#endif //MAIN_MYLIST_H
