/******************************************************
** Program: animal.h
** Descrpition: Header file for animal
** Input:
** Output: Declares class, member variable and classes
******************************************************/



#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H


class Animal{
  protected:
        int age ;
        int num_babies;
        int food_cost;
        float animal_cost;
        float revenue;


    public:
        Animal();
        Animal(const Animal & A);
        Animal& operator = (const Animal&);
        ~Animal();
        int get_age();
        int get_babies();
        int get_food();
        float get_cost();
        float get_revenue();

        void add_babies(int add);
        void set_food(int new_Food);
        void set_babies(int new_Baby);
        void set_age(int new_Age);
        void set_cost(float new_Cost);
        void set_revenue(float new_Revenue);




};

#endif
