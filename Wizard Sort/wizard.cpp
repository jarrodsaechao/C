/******************************************************
** Program: wizard_cpp
** Author: Jarrod Saechao
** Date: 04/11/2019
** Description: Functions
******************************************************/



#include "wizard.h"

/********************************************************************** 
** Function: wizard* create_wizards(int)
** Description: Dynamically allocate memory to create an array
** Parameters: number of wizards in txt file
** Pre-Conditions: num of wizards
** Post-Conditions: Array created
************************************************************************/

wizard* create_wizards(int num_wizards){
    wizard* wizard_ptr = new wizard[num_wizards];
    return wizard_ptr;
}

/********************************************************************** 
** Function:void get_wizard(wizard* wizard_ptr, int , ifsteam&)
** Description: Fills array with data from txt file 
** Parameters:wizard_ptr, num_wizards, inFile 2
** Pre-Conditions: Must have something pointing to struct, num_wizards and the txt file
** Post-Conditions:Wizard array filled with data
************************************************************************/

void get_wizard(wizard* wizard_ptr, int num_wizards, ifstream& inFile2){
    string name;
    int id;
    string password;
    string position_title; 
    float beard_length;
    for(int i = 0 ; i < num_wizards ; i++) {
        inFile2 >>wizard_ptr[i]. name >> wizard_ptr[i].id >> wizard_ptr[i].password >> wizard_ptr[i].position_title
         >> wizard_ptr[i].beard_length;

    }

}

/********************************************************************** 
** Function:void check_wizard
** Description: Checks the id and password of wizard
** Parameters: wizard* wizard_ptr, int num_wizards , bool
** Pre-Conditions: Pointer to wizard stuct, number of wizards, and yes or no function
** Post-Conditions: Terminates the program or allows entry to sort
************************************************************************/

void check_wizard(wizard* wizard_ptr, int num_wizards){
    int Id;
    string Password;
    int counter = 0;
    int i = 0;
    int flag = 0;
    cout << "Enter Id then Password" << endl;
    cin >> Id >> Password ;

 while( flag != 1){
    
     for(int i = 0; i <= num_wizards ; i ++){
         if (counter == 2){
         cout << "Thats your third attempt. Goodbye!!" << endl ;
         exit(1);
     }



        else if(Id ==  wizard_ptr[i].id && Password == wizard_ptr[i].password ){

        cout << "Hello: " << wizard_ptr[i].name  << endl << "ID: " << wizard_ptr[i].id << endl
        << "Password: " << wizard_ptr[i].password << endl << "Position title: " << wizard_ptr[i].position_title <<
        endl << "Beard length " <<  wizard_ptr[i].beard_length << endl;
        flag = flag + 1 ; 
        break;
        


    }


        else if(i == num_wizards - 1 && Id !=  wizard_ptr[i].id && Password != wizard_ptr[i].password){
            cout << "Bad input. Please try again." << endl ;
            counter++;
            cout << "Enter Id then Password" << endl;
            cin >> Id >> Password ;
            break;

        }
     }
 }
  
   

}

/********************************************************************** 
** Function: spellbook* create_spellbook
** Description: Dynamically allocate memory to create an array
** Parameters: num_spellbooks
** Pre-Conditions: number of spells from all text books
** Post-Conditions: Array created
************************************************************************/

spellbook* create_spellbooks(int num_spellbooks) {
    spellbook* spellbook_ptr = new spellbook[num_spellbooks];
    return spellbook_ptr;
   
}

/********************************************************************** 
** Function: void get_spellbook_data
** Description: Fills the array in Spellbook struct with data
** Parameters: spellbook* spellbook_ptr, int num_spellbooks, ifstream& inFile
** Pre-Conditions: pointer to spellbook struct, number of spell books and txt file
** Post-Conditions: Array becomes populated with data
************************************************************************/

void get_spellbook_data(spellbook* spellbook_ptr, int num_spellbooks, ifstream& inFile) {
    string title;
    string author;
    int num_pages;
    int edition;
    int num_spells;
    float avg_success_rate;
    struct spell* s;
    float spell_sum;
    for (int i = 0; i < num_spellbooks ; i++) {
        inFile >> spellbook_ptr[i].title >> spellbook_ptr[i].author >> spellbook_ptr[i].num_pages >> spellbook_ptr[i].edition >>
        spellbook_ptr[i].num_spells ;
        num_spells = spellbook_ptr[i].num_spells;
        spellbook_ptr[i].s = create_spells(num_spells) ;
        get_spell_data( spellbook_ptr[i].s ,  num_spells, inFile); 
        for (int k = 0 ; k < num_spells ; k ++){
            spellbook_ptr[i].avg_success_rate = spellbook_ptr[i].s[k].success_rate / num_spells;
        }
         
    }
} 



/********************************************************************** 
** Function: void page_sort
** Description: Sorts books by pages
** Parameters: num_spells
** Pre-Conditions: Pointer to struct number of spell books
** Post-Conditions: Sorts the pages from highest to lowest
************************************************************************/

void page_sort(spellbook* spellbook_ptr, int num_spellbooks){
    int i, j , flag = 1;
    spellbook temp;
    for(i = 0; i < num_spellbooks -1; i++)
    {
        flag = 0;
        for (j=0; j < (num_spellbooks -1); j++)
        {  if (spellbook_ptr[j+1].num_pages > spellbook_ptr[j].num_pages)      // ascending order simply changes to <
              { 
                    temp = spellbook_ptr[j];             // swap elements
                    spellbook_ptr[j] = spellbook_ptr[j+1];
                    spellbook_ptr[j+1] = temp;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
        
    }

}

/********************************************************************** 
** Function: spell* create_spells
** Description: Dynamically allocate memory to create an array
** Parameters: num_spells
** Pre-Conditions: number of spells from all text books
** Post-Conditions: Array created
************************************************************************/

spell* create_spells(int num_spells) {

    spell* spell_ptr = new spell[num_spells];

    return spell_ptr;

}


/********************************************************************** 
** Function: void get_spell_data
** Description: Fills the spell struct array with data
** Parameters: spell* spell_ptr, int num_spells, ifstream& inFile
** Pre-Conditions: Pointer to spell struct, number of spells, txt file
** Post-Conditions: Array is filled with data
************************************************************************/

void get_spell_data(spell* spell_ptr, int num_spells, ifstream& inFile) {
    string name;
    float success_rate;
    string effect; 
    int number; 
    string fire , memory_loss , bubble , death , posion ;
    for(int j = 0 ; j < num_spells ; j ++ ) {
       inFile >> spell_ptr[j].name >> spell_ptr[j].success_rate >> spell_ptr[j].effect ;
           
    }
}


/********************************************************************** 
** Function: void spell_sort
** Description: Sorts spells by name effect
** Parameters: spells* spell_ptr,  spell* sp, int num_spellbooks
** Pre-Conditions: all arrays and functions created, user input
** Post-Conditions: Outputs spells sorted in effect
************************************************************************/

void spell_sort( spellbook* spellbook_ptr, spell* sp, int num_spellbooks) {
    int choice2;
    string file_type;
    cout <<  "Would you like to print to screen or file? Choose 1 for Print Choose 2 for File." << endl ;
    cin >> choice2 ;
    if(choice2 == 1){
        for(int i = 0; i < 5; i ++){            //  spell type to print
            for(int ii = 0 ; ii < num_spellbooks ; ii++) {            // each spell book
                for(int j = 0 ; j < spellbook_ptr[ii].num_spells ; j++ ){    // number of spells in the book
                    
                    if( i == 0 && spellbook_ptr[ii].s[j].effect == "bubble"){
                        cout << spellbook_ptr[ii].s[j].name << " " << spellbook_ptr[ii].s[j].effect << endl ;
                    }
                    if( i == 1 && spellbook_ptr[ii].s[j].effect == "memory_loss"){
                        cout << spellbook_ptr[ii].s[j].name << " " << spellbook_ptr[ii].s[j].effect << endl ;
                    }
                    if( i == 2 && spellbook_ptr[ii].s[j].effect == "fire" ){ 
                        cout << spellbook_ptr[ii].s[j].name << " " << spellbook_ptr[ii].s[j].effect << endl ;   
                    }
                    if( i == 3 && spellbook_ptr[ii].s[j].effect == "poison" ){
                        cout << spellbook_ptr[ii].s[j].name << " " << spellbook_ptr[ii].s[j].effect << endl ;   
                    }
                    if( i == 4 && spellbook_ptr[ii].s[j].effect == "death" ){
                        cout << spellbook_ptr[ii].s[j].name << " " << spellbook_ptr[ii].s[j].effect << endl ;   
                    }

                }
            }
        }
    }


    else if (choice2 == 2){
        cout << " Give me the name of the file you would like to load " << endl ;
        cin >> file_type ;
        ofstream file;
        file.open("file_type");
            for(int i = 0; i < 5; i ++){            //  spell type to print
                for(int ii = 0 ; ii < num_spellbooks ; ii++) {            // each spell book
                    for(int j = 0 ; j < spellbook_ptr[ii].num_spells ; j++ ){    // number of spells in the book
                        
                        if( i == 0 && spellbook_ptr[ii].s[j].effect == "bubble"){
                            cout << spellbook_ptr[ii].s[j].name << " " << spellbook_ptr[ii].s[j].effect << endl ;
                        }
                        if( i == 1 && spellbook_ptr[ii].s[j].effect == "memory_loss"){
                            cout << spellbook_ptr[ii].s[j].name << " " << spellbook_ptr[ii].s[j].effect << endl ;
                        }
                        if( i == 2 && spellbook_ptr[ii].s[j].effect == "fire" ){ 
                            cout << spellbook_ptr[ii].s[j].name << " " << spellbook_ptr[ii].s[j].effect << endl ;   
                        }
                        if( i == 3 && spellbook_ptr[ii].s[j].effect == "poison" ){
                            cout << spellbook_ptr[ii].s[j].name << " " << spellbook_ptr[ii].s[j].effect << endl ;   
                        }
                        if( i == 4 && spellbook_ptr[ii].s[j].effect == "death" ){
                            cout << spellbook_ptr[ii].s[j].name << " " << spellbook_ptr[ii].s[j].effect << endl ;   
                        }

                    }
                }
            }
        }




}

/********************************************************************** 
** Function: void option
** Description: User interface
** Parameters: spellbook* spellbooks, int num_spellbooks
** Pre-Conditions: all arrays and functions created, user input
** Post-Conditions: Outputs user choice
************************************************************************/

void option(spellbook* spellbooks, int num_spellbooks, spell* spell_ptr, int num_spells){
    int choice;
    int choice2;
    string file_type;
    cout << "Which option would like to see?" << endl << "Sort spellbooks by page number (Press 1) " << endl
    << "Group spells by their effect (Press 2)" << endl << "Sort spellbooks by average success rate (Press 3)" 
    << endl << "Quit program (Press 4)" << endl;
    cin >> choice; 

    if (choice == 1){
        page_sort(spellbooks, num_spellbooks);
        cout << "Pages Sorted :" << endl << "Would you like to print to screen or file? Choose 1 for Print Choose 2 for File." << endl ;
        cin >> choice2 ;
        if(choice2 == 1){
            for (int i = 0 ; i < num_spellbooks ; i++){
                cout << spellbooks[i].title << " " << spellbooks[i].num_pages << endl ;
                }
            }
        else if (choice2 == 2){
            cout << " Give me the name of the file you would like to load " << endl ;
            cin >> file_type ;
            ofstream file;
            file.open("file_type");
            for (int i = 0 ; i < num_spellbooks ; i++){
                file << spellbooks[i].title << " " << spellbooks[i].num_pages << endl ;
            
                }
             }
    }    
    else if (choice == 2){
        spell_sort( spellbooks, spell_ptr, num_spellbooks );
        cout << " Spells Sorted :" << endl ;
         }       

    else if (choice == 3){
        avg_success(spellbooks, spell_ptr, num_spellbooks );
        cout << " Average Success Calculated " << endl  << "Would you like to print to screen or file? Choose 1 for Print Choose 2 for File." << endl ;
        cin >> choice2 ;
        if(choice2 == 1){
            for (int i = 0 ; i < num_spellbooks ; i++){
                cout << spellbooks[i].title << " " << spellbooks[i].avg_success_rate << endl ;
             }
         }
        else if (choice2 == 2){
            cout << " Give me the name of the file you would like to load " << endl ;
            cin >> file_type ;
            ofstream file;
            file.open("file_type");
        for (int i = 0 ; i < num_spellbooks ; i++){
            file << spellbooks[i].title << " " << spellbooks[i].avg_success_rate << endl ;
        }
        }
    }     
    else if (choice == 4){
        cout << "See ya later!" << endl;
        void delete_info(wizard ** wizard_ptr, spellbook ** spellbook_ptr, int num_spellbooks);
        cout << " Data Freed " ;
        exit(1); // return false
    }   
    
 }
/********************************************************************** 
** Function: void avg_success
** Description: finds average spell success of each book
** Parameters: spellbook* spellbook_ptr, spell* sp, int num_spellbooks
** Pre-Conditions: spellbook and spell pointer, num_spellbooks
** Post-Conditions: gives average success of each book.
************************************************************************/

void avg_success( spellbook* spellbook_ptr, spell* sp, int num_spellbooks){
    int i, j , flag = 1;
    spellbook temp;
    for(i = 0; i < num_spellbooks -1; i++)
    {
        flag = 0;
        for (j=0; j < (num_spellbooks -1); j++)
        {  if (spellbook_ptr[j+1].avg_success_rate > spellbook_ptr[j].avg_success_rate)      // ascending order simply changes to <
              { 
                    temp = spellbook_ptr[j];             // swap elements
                    spellbook_ptr[j].avg_success_rate = spellbook_ptr[j+1].avg_success_rate;
                    spellbook_ptr[j+1].avg_success_rate = temp.avg_success_rate; ;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
        
    }

}



/********************************************************************** 
** Function: void delete_into
** Description: frees up memory
** Parameters: wizard **, spellbook **, int
** Pre-Conditions: pointer to arrays
** Post-Conditions: Memory is free
************************************************************************/

void delete_info(wizard ** wizard_ptr, spellbook ** spellbook_ptr, int num_spellbooks){
     
    delete [] *wizard_ptr;
    *wizard_ptr = NULL;


    for( int i = 0; i < num_spellbooks; i++) {
        delete [] (*spellbook_ptr)[i].s;   
    }
    delete [] *spellbook_ptr;
    *spellbook_ptr = NULL;
}


