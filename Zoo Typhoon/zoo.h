/******************************************************
** Program: zoo.h
** Descrpition: Header file for zoo
** Input:
** Output: Declares class, member variable and classes
******************************************************/

#ifndef ZOO_H
#define ZOO_H
#include "monkey.h"
#include "animal.h"
#include "seaotter.h"
#include "meekrat.h"

class Zoo{
  protected:

        Monkeys* monkey_arr;
        SeaOtters* sea_arr;
        Meekrats* meek_rat_arr;

        int num_monkeys;
        int num_seas;
        int num_meek_rats;

        float money;
        int days;
        float daily_food_cost;
        bool quit;


    public:
        Zoo();
        ~Zoo();
        bool game();


        void add_monkey();
        void add_sea();
        void add_meek_rat();

        int get_num_monkeys();
        int get_num_seas();
        int get_num_meek_rats();

        void remove_monkey();
        void remove_sea();
        void remove_meek_rat();

        void add_m_baby();
        void add_s_baby();
        void add_meek_baby();

        void random_event();
        void sick_animal();
        void boom();
        void increase_age();
        void buy_animal();
        void sub_food();

        float get_money() ;
        void add_money();

        float get_daily_food_cost();
        int get_days();





};

#endif
