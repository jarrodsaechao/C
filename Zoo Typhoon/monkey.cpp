/******************************************************
** Program: monkey.cpp
** Descrpition: Implementation file for monkey
** Input:
** Output: Functions for Monkey class
******************************************************/


#include "monkey.h"
#include "animal.h"


/******************************************************
** Function: Monkets()
** Descrpition: initializes Monkeys object
** Input:
** Output: Initializes Object
******************************************************/

Monkeys :: Monkeys()
{
  this-> age = 112;
  this->animal_cost = 15000;
  this->num_babies = 1;
  this->food_cost = 4;
  this->revenue = 1500;
}
