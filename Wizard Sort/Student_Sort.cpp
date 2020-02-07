#include <iostream>
#include <fstream>
#include<string>
#include<cstdlib>


using namespace std;

struct student{
    int id;
    string last_name;
    string major;
};



student *create_student_db(int);
void get_student_db_info(student*, int, fstream*);
void delete_student_db_info(student** students, int num_students);


void delete_student_db_info(student** students, int num_students){
    delete [] *students;
    *students = NULL;
}



student* create_student_db(int num_students) {
    student* students;
    students = new student[num_students];
    return students;
}

void get_student_db_info(struct student* students , int num_student , fstream* ptr){
    string dummy;
    getline( *ptr, dummy);
    for (int i = 0; i < num_student ; i++){
        *ptr >> students[i].id;
        *ptr >> students[i].last_name;
        *ptr >> students[i].major;
    }
}






int main(int argc, char const *argv[]) {
    ifstream file_name;
    string input;
    file_name.open("student.txt");


    if(!file_name.is_open()){
        cout << "Error" << endl;
        return 1;

    }
    while(file_name >> input) {
        cout << input << endl;
    
    }
    file_name.close();
    }


