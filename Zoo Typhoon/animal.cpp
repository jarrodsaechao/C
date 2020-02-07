/******************************************************
** Program: animal.cpp
** Descrpition: Implementation File
** Input:
** Output: function definitions
******************************************************/

#include "animal.h"


/******************************************************
** Function: Animal()
** Descrpition: initializes Animal object
** Input:
** Output: sets values of animal and creates object
******************************************************/

Animal :: Animal()
{

}




/******************************************************
** Function: Animal(const Animal & new_animal)
** Descrpition: Assignment overloader
** Input: animal
** Output: Sets new animal
******************************************************/
Animal :: Animal(const Animal & A)
{
  cout<< "in copy constuctor" << endl;
  this->age = A.age;
  this->animal_cost = A.animal_cost;
  this->num_babies = A.num_babies;
  this->food_cost = A.food_cost;
  this->revenue = A.revenue;
}

/******************************************************
** Function: Animal& operator = (const Animal & new_animal)
** Descrpition: Assignment overloader
** Input: animal
** Output: Sets new animal
******************************************************/

Animal& Animal :: operator=(const Animal& A)
{
  cout << "IN OPERATOR" << endl;
  this->age = A.age;
  this->animal_cost = A.animal_cost;
  this->num_babies = A.num_babies;
  this->food_cost = A.food_cost;
  this->revenue = A.revenue;
  cout << "Done in OPERATOR" << endl;
}



/******************************************************
** Function: ~Animal()
** Descrpition: Destructor
** Input: initialized object
** Output: deletes objects
******************************************************/

Animal :: ~Animal()
{

}



/******************************************************
** Function: get_age()
** Descrpition: gets the age of animal
** Input:
** Output: sets values of animal and creates object
******************************************************/

int Animal :: get_age()
{
    return age;
}

/******************************************************
** Function: get_babie()
** Descrpition: gets the number of babys from species
** Input:
** Output: number of babies
******************************************************/

int Animal :: get_babies()
{
    return num_babies;
}

/******************************************************
** Function: food_cost()
** Descrpition: gets the food cost
** Input:
** Output: food cost for aniaml
******************************************************/

int Animal :: get_food()
{
    return food_cost;

}

/******************************************************
** Function: get_cost
** Descrpition: gets cost of animal
** Input:
** Output: cost of animal
******************************************************/

float Animal :: get_cost()
{
    return animal_cost;

}


/******************************************************
** Function: get_revenue
** Descrpition: gets revenue from week
** Input:
** Output: get revenue from the week
******************************************************/

float Animal :: get_revenue()
{
    return revenue;

}

/******************************************************
** Function: set_food()
** Descrpition: sets food cost of species
** Input:
** Output: sets food cost for animal
******************************************************/

void Animal :: set_food(int new_Food)
{
    new_Food = food_cost;
}



/******************************************************
** Function: set_babies()
** Descrpition: sets the number of babies for animal
** Input:
** Output: sets babies for animal
******************************************************/

void Animal :: set_babies(int new_Baby)
{
  new_Baby = num_babies;

}


/******************************************************
** Function: set_age
** Descrpition: sets the age for each animal
** Input:
** Output: changes animal age
******************************************************/

void Animal :: set_age(int new_Age)
{
  age = new_Age;
}

/******************************************************
** Function: set_revenue
** Descrpition: sets new revenue
** Input:
** Output: changes revenue
******************************************************/

void Animal :: set_revenue(float new_Revenue)
{
  new_Revenue = revenue;
}

/******************************************************
** Function: set_cost
** Descrpition: sets cost of animal
** Input:
** Output: changes animal cost
******************************************************/

void Animal :: set_cost(float new_Cost)
{
  new_Cost = animal_cost;
}


/******************************************************
** Function: add_babies
** Descrpition: adds baby
** Input:
** Output: baby added to specific animal
******************************************************/


void Animal :: add_babies(int add)
{
  num_babies = num_babies + add ;
}
