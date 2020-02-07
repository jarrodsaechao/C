/******************************************************
** Program: wizard_run.cpp
** Author: Jarrod Saechao
** Date: 04/11/2019
** Description: Main Program
******************************************************/


#include "wizard.h"



int main(int argc, const char *argv[] ) {
    ifstream inFile;
    ifstream inFile2;

    inFile2.open(argv[1]);
    inFile.open(argv[2]);

    if(!inFile2.is_open() ){
        cout << "Error with first arguement" << endl;
        return 1;
    }
    if(!inFile.is_open() ){
        cout << "Error with second arguement" << endl;
        return 1;

    }
    int num_wizards;
    inFile2 >> num_wizards;
    wizard* wizards = create_wizards(num_wizards);
    get_wizard(wizards, num_wizards, inFile2);
    check_wizard(wizards, num_wizards);
    int num_spellbooks;
    inFile >> num_spellbooks;
    spellbook* spellbooks = create_spellbooks( num_spellbooks);
    get_spellbook_data(spellbooks, num_spellbooks, inFile);
    int num_spells;
    spell* sp ;
    while (num_spellbooks < 100){
        option( spellbooks,num_spellbooks, sp, num_spells );
    }
    

    inFile.close();
    inFile2.close();

    }




       


