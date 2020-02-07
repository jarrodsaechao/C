/******************************************************
** Program: wizard_run.cpp
** Author: Jarrod Saechao
** Date: 04/11/2019
** Description: Header File
******************************************************/


#include <iostream>
#include <fstream>
#include<string>
#include<cstring>
#include<cstdlib>

#ifndef WIZARD_H
#define WIZARD_H

using namespace std;

struct wizard {
  string name;
  int id;
  string password;
  string position_title; 
  float beard_length;

};

struct spellbook {
  string title;
  string author;
  int num_pages;
  int edition;
  int num_spells;
  float avg_success_rate;
  struct spell* s;
};


struct spell {
  string name;
  float success_rate;
  string effect; 
  
};


void avg_success( spellbook* spellbook_ptr, spell* sp, int num_spellbooks);
void spell_sort(spellbook*,spell*,int);
void page_sort(spellbook*, int, int);
wizard* create_wizards(int);
void get_wizard(wizard*, int , ifstream& );
void check_wizard(wizard* ,int);
spellbook* create_spellbooks(int);
void get_spellbook_data(spellbook *, int, ifstream &); 
spell* create_spells(int);
void get_spell_data(spell *, int, ifstream &); 
void delete_info(wizard **, spellbook **, int);
void option(spellbook* spellbooks, int num_spellbooks, spell* spell_ptr ,int );

#endif