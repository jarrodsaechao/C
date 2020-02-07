/******************************************************
** Program: zoo.cpp
** Descrpition: Implementation File
** Input:
** Output: function definitions
******************************************************/

#include "zoo.h"




/******************************************************
** Function: Zoo()
** Descrpition: initializes zoo object
** Input:
** Output: sets values in zoo and creates arrays
******************************************************/

Zoo :: Zoo()
{
    money = 100000;
    daily_food_cost = 40;

    num_monkeys = 0;
    num_seas = 0;
    num_meek_rats = 0;

    days = 0;

    monkey_arr = new Monkeys[num_monkeys];
    sea_arr = new SeaOtters[num_seas];
    meek_rat_arr = new Meekrats[num_meek_rats];


}


/******************************************************
** Function: ~Zoo()
** Descrpition: initializes zoo object
** Input:
** Output: sets values in zoo and creates arrays
******************************************************/
Zoo :: ~Zoo()
{
  delete [] monkey_arr;
  delete [] sea_arr;
  delete [] meek_rat_arr;
}



/******************************************************
** Function: void_add_monkey()
** Descrpition: adds monkey to zoo
** Input:
** Output: adds a monkey to zoo
******************************************************/

void Zoo :: add_monkey()
{
  Monkeys temp[num_monkeys];
  for(int i = 0 ; i < num_monkeys ; i++)
  {
    temp[i].set_age(monkey_arr[i].get_age());
    temp[i].set_food(monkey_arr[i].get_food());
    temp[i].set_babies(monkey_arr[i].get_babies());
    temp[i].set_cost(monkey_arr[i].get_cost());
    temp[i].set_revenue(monkey_arr[i].get_revenue());
  }

  delete [] monkey_arr ;
  num_monkeys = num_monkeys + 1;
  monkey_arr = new Monkeys[num_monkeys];
  for ( int i = 0 ; i < num_monkeys ; i++)
  {
    monkey_arr[i].set_age(temp[i].get_age());
    monkey_arr[i].set_food(temp[i].get_food());
    monkey_arr[i].set_babies(temp[i].get_babies());
    monkey_arr[i].set_revenue(temp[i].get_revenue());
    monkey_arr[i].set_cost(temp[i].get_cost());

  }

}


/******************************************************
** Function: void_add_seas()
** Descrpition: adds seaotter to zoo
** Input:
** Output: adds a seaotter to zoo
******************************************************/

void Zoo :: add_sea()
{
  SeaOtters temp[num_seas];

  for(int i = 0 ; i < num_seas; i++)
  {
    temp[i].set_age(sea_arr[i].get_age());
    temp[i].set_food(sea_arr[i].get_food());
    temp[i].set_babies(sea_arr[i].get_babies());
    temp[i].set_cost(sea_arr[i].get_cost());
    temp[i].set_revenue(sea_arr[i].get_revenue());
  }

  delete [] sea_arr ;
  num_seas = num_seas + 1;

  sea_arr = new SeaOtters[num_seas];

  for ( int i = 0 ; i < num_seas ; i++)
  {
    sea_arr[i].set_age(temp[i].get_age());
    sea_arr[i].set_food(temp[i].get_food());
    sea_arr[i].set_babies(temp[i].get_babies());
    sea_arr[i].set_revenue(temp[i].get_revenue());
    sea_arr[i].set_cost(temp[i].get_cost());

  }

}


/******************************************************
** Function: void add_meek_rat()
** Descrpition: adds monkey to zoo
** Input:
** Output: adds a monkey to zoo
******************************************************/

void Zoo :: add_meek_rat()
{
  Meekrats temp[num_meek_rats];

  for(int i = 0 ; i < num_meek_rats; i++){
    temp[i].set_age(meek_rat_arr[i].get_age());
    temp[i].set_food(meek_rat_arr[i].get_food());
    temp[i].set_babies(meek_rat_arr[i].get_babies());
    temp[i].set_cost(meek_rat_arr[i].get_cost());
    temp[i].set_revenue(meek_rat_arr[i].get_revenue());
  }

  delete [] meek_rat_arr ;
  num_meek_rats = num_meek_rats + 1;

  meek_rat_arr = new Meekrats[num_meek_rats];

  for ( int i = 0 ; i < num_meek_rats ; i++)
  {
    meek_rat_arr[i].set_age(temp[i].get_age());
    meek_rat_arr[i].set_food(temp[i].get_food());
    meek_rat_arr[i].set_babies(temp[i].get_babies());
    meek_rat_arr[i].set_revenue(temp[i].get_revenue());
    meek_rat_arr[i].set_cost(temp[i].get_cost());

  }

}


/******************************************************
** Function: get_num_monkeys
** Descrpition: gets the number monkeys of from zoo
** Input:
** Output: shows the number of monkeys in zoo
******************************************************/

int Zoo ::  get_num_monkeys()
{
  return num_monkeys;
}

/******************************************************
** Function: get_num_seas
** Descrpition: gets the number of SeaOtters from zoo
** Input:
** Output: shows the number Seaotters of in zoo
******************************************************/

int Zoo :: get_num_seas()
{
  return num_seas;
}

/******************************************************
** Function: get_num_meek_rats
** Descrpition: gets the number Meekrats from zoo
** Input:
** Output: shows the number of Meekrats in zoo
******************************************************/

int Zoo ::get_num_meek_rats()
{
  return num_meek_rats;
}



/******************************************************
** Function: remove_monkey
** Descrpition: removes monkey from zoo
** Input:
** Output: monkey removed from the array
******************************************************/

void Zoo :: remove_monkey()
{
  Monkeys temp[num_monkeys];

  for(int i = 0 ; i < num_monkeys ; i++){
    temp[i].set_age(monkey_arr[i].get_age());
    temp[i].set_food(monkey_arr[i].get_food());
    temp[i].set_babies(monkey_arr[i].get_babies());
    temp[i].set_food(monkey_arr[i].get_cost());
    temp[i].set_revenue(monkey_arr[i].get_revenue());
  }

  delete [] monkey_arr ;
  num_monkeys = num_monkeys - 1;

  monkey_arr = new Monkeys[num_monkeys];

  for ( int i = 0 ; i < num_monkeys ; i++)
  {
    monkey_arr[i].set_age(temp[i].get_age());
    monkey_arr[i].set_food(temp[i].get_food());
    monkey_arr[i].set_babies(temp[i].get_babies());
    monkey_arr[i].set_revenue(temp[i].get_revenue());
    monkey_arr[i].set_cost(temp[i].get_cost());

  }

}


/******************************************************
** Function: remove_sea
** Descrpition: removes a sea otter from the zoo
** Input:
** Output: seaotter removed from array
******************************************************/

void Zoo :: remove_sea()
{
  SeaOtters temp[num_seas];

  for(int i = 0 ; i < num_seas ; i++){
    temp[i].set_age(sea_arr[i].get_age());
    temp[i].set_food(sea_arr[i].get_food());
    temp[i].set_babies(sea_arr[i].get_babies());
    temp[i].set_food(sea_arr[i].get_cost());
    temp[i].set_revenue(sea_arr[i].get_revenue());
  }

  delete [] sea_arr ;
  num_seas = num_seas - 1;

  sea_arr = new SeaOtters[num_seas];

  for ( int i = 0 ; i < num_seas ; i++)
  {
    sea_arr[i].set_age(temp[i].get_age());
    sea_arr[i].set_food(temp[i].get_food());
    sea_arr[i].set_babies(temp[i].get_babies());
    sea_arr[i].set_revenue(temp[i].get_revenue());
    sea_arr[i].set_cost(temp[i].get_cost());

  }

}


/******************************************************
** Function: remove_meek_rat
** Descrpition: meekrat removed from zoo
** Input:
** Output: Meekrat is removed from array
******************************************************/



void Zoo :: remove_meek_rat()
{
  Meekrats temp[num_meek_rats];

  for(int i = 0 ; i < num_meek_rats; i++){
    temp[i].set_age(meek_rat_arr[i].get_age());
    temp[i].set_food(meek_rat_arr[i].get_food());
    temp[i].set_babies(meek_rat_arr[i].get_babies());
    temp[i].set_food(meek_rat_arr[i].get_cost());
    temp[i].set_revenue(meek_rat_arr[i].get_revenue());
  }

  delete [] meek_rat_arr ;
  num_meek_rats = num_meek_rats - 1;

  meek_rat_arr = new Meekrats[num_meek_rats];

  for ( int i = 0 ; i < num_meek_rats ; i++)
  {
    meek_rat_arr[i].set_age(temp[i].get_age());
    meek_rat_arr[i].set_food(temp[i].get_food());
    meek_rat_arr[i].set_babies(temp[i].get_babies());
    meek_rat_arr[i].set_revenue(temp[i].get_revenue());
    meek_rat_arr[i].set_cost(temp[i].get_cost());

  }

}

/******************************************************
** Function: add_m_baby
** Descrpition: adds baby to specific animal array
** Input: checks if theyre 2 adult animals
** Output: if yes than a baby is added to the array
******************************************************/

void Zoo :: add_m_baby()
{
  int count;
  int random;
  srand((int)time(NULL));
  random =(rand()%num_monkeys) ;
  for(int i = 0; i < num_monkeys; i++)
  {
    if(monkey_arr[i].get_age() < 100)
    {
      count = count + 1;
    }
  }

  if(num_monkeys > 2 && count > 1)
  {
    cout << " A baby monkey was born " << endl;
    monkey_arr[random].set_age(0);
    monkey_arr[random].set_revenue(3000);
    add_monkey();
  }
  count = 0;
}

/******************************************************
** Function: add_s_baby
** Descrpition: adds baby to specific animal array
** Input:checks if theyre 2 adult animals
** Output:  if yes than a baby is added to the array
******************************************************/

void Zoo :: add_s_baby()
{
  int count;
  int random;
  srand((int)time(NULL));
  random =(rand()%num_seas) ;
  for(int i = 0; i < num_seas; i++)
  {
    if(sea_arr[i].get_age() < 100)
    {
      count = count + 1;
    }
  }

  if(num_seas > 2 && count > 1)
  {
    cout << " A baby seaotter were born " << endl;
    sea_arr[random].set_age(0);
    sea_arr[random].set_revenue(500);
    add_sea();
  }

  count = 0;
}

/******************************************************
** Function: add_meek_baby
** Descrpition: adds baby to specific animal array
** Input:checks if theyre 2 adult animals
** Output:  if yes than a baby is added to the array
******************************************************/

void Zoo :: add_meek_baby()
{
  int count;
  int random;
  srand((int)time(NULL));
  random =(rand()%num_meek_rats) ;
  for(int i = 0; i < num_meek_rats; i++)
  {
    if(meek_rat_arr[i].get_age() < 100)
    {
      count = count + 1;
    }
  }

  if( num_meek_rats > 2 && count > 1)
  {
    cout << " A baby meekrats were born " << endl;
    meek_rat_arr[random].set_age(0);
    meek_rat_arr[random].set_revenue(25);
    add_meek_rat();
  }
  count = 0;

}


/******************************************************
** Function: random_event
** Descrpition: generates a random event to happen
** Input:
** Output: Random event happens
******************************************************/

void Zoo :: random_event()
{
  int random;
  int baby_ran;
  srand((int)time(NULL));
  random =(rand()%4) + 1 ;
  baby_ran = (rand()%3) + 1;

  if(random == 1)
  {
    sick_animal();
  }

  else if(random == 2)
  {
    if(baby_ran == 1)
    {

      add_m_baby();
    }
    else if(baby_ran == 2)
    {
      add_s_baby();
    }
    else if(baby_ran == 3)
    {
      add_meek_baby();
    }
  }

  else if(random == 3)
  {
    boom();
  }

  else if(random == 4 )
  {
    cout << "Boring week at the job ." << endl;
  }

}

/******************************************************
** Function: boom()
** Descrpition: boom of attendence
** Input: random
** Output: monkey generates extra money
******************************************************/

void Zoo :: boom()
{
  int bonus;
  int total_bonus;


  cout << " There was a BOOM in attendence this week." << endl;

  srand((float)time(NULL));
  bonus = (rand()%400) + 300;
  total_bonus = bonus * num_monkeys;

  cout << " Each monkey made an extra " << bonus << endl;
  cout << " Total amount of extra money monkeys made is " << total_bonus << endl;

  money = money + total_bonus;
}

/******************************************************
** Function: sick_animal
** Descrpition: user must pay or lose animal
** Input: random
** Output: lose money or animal
******************************************************/

void Zoo ::  sick_animal()
{
  int random_animal;
  srand((int)time(NULL));
  random_animal = (rand()%3) + 1;

  if (random_animal == 1 && num_monkeys > 0)
  {
    cout << " A monkey is sick! " << endl;

    if( money < (monkey_arr[0].get_cost() / 2) )
    {
      cout << " Insufficient funds to take care of animal. It is dead now. " << endl;
      remove_monkey();
    }

    else if ( money > (monkey_arr[0].get_cost() / 2))
    {
      cout << " Money has been deducted from your account to care for animal " << endl;
      money = money - (monkey_arr[0].get_cost() / 2);
    }

  }
  else if (random_animal == 2 && num_seas > 0)
  {
    cout << " A seaotter is sick! " << endl;

    if( money < (sea_arr[0].get_cost() / 2) )
    {
      cout << " Insufficient funds to take care of animal. It is dead now. " << endl;
      remove_sea();
    }

    else if ( money > (sea_arr[0].get_cost() / 2))
    {
      cout << " Money has been deducted from your account to care for animal " << endl;
      money = money - (sea_arr[0].get_cost() / 2);
    }

  }


  else if (random_animal == 3 && num_meek_rats > 0 )
  {
    cout << " A meekrat is sick! " << endl;

    if( money < (meek_rat_arr[0].get_cost() / 2) )
    {
      cout << " Insufficient funds to take care of animal. It is dead now. " << endl;
      remove_meek_rat();
    }

    else if ( money > (meek_rat_arr[0].get_cost() / 2))
    {
      cout << " Money has been deducted from your account to care for animal " << endl;
      money = money - (meek_rat_arr[0].get_cost() / 2);

    }
  }

}


/******************************************************
** Function: increase_age
** Descrpition: increase age of each animals
** Input:
** Output: Each animal age is increased by 1 week
******************************************************/

void Zoo :: increase_age()
{

	for(int i = 0 ; i < num_monkeys; i++ )
  {
		monkey_arr[i].set_age(monkey_arr[i].get_age() + 1);
	}
	for(int i = 0 ; i < num_seas ; i++ )
  {
		sea_arr[i].set_age(sea_arr[i].get_age() + 1 );
	}
	for(int i = 0 ; i < num_meek_rats ; i++ )
  {
		meek_rat_arr[i].set_age(meek_rat_arr[i].get_age() +1 );
	}
  days = days + 1;

}

/******************************************************
** Function: get_money
** Descrpition: gets money in zoo
** Input:
** Output: display your money
******************************************************/

float Zoo :: get_money()
{
  cout << " Account Balance : " << money << endl;
}


/******************************************************
** Function: set_money
** Descrpition: shows the money from each animal revenue then adds to money
** Input: money generated from animal
** Output: adds revenue to money
******************************************************/

void Zoo :: add_money()
{
	int m = 0;
	int s = 0 ;
	int mr = 0 ;
  int scount = 0;
  int mcount = 0;
  int meekcount = 0;

  for(int i = 0; i < num_monkeys ; i++ )
  {
    if( monkey_arr[i].get_age()< 5)
    {
      mcount = mcount + 1;
    }
  }

  for(int i = 0; i < num_seas ; i++ )
  {
    if( sea_arr[i].get_age() < 5)
    {
      scount = scount + 1;
    }
  }

  for(int i = 0; i < num_meek_rats ; i++ )
  {
    if( meek_rat_arr[i].get_age() < 5)
    {
      meekcount = meekcount + 1;
    }

  }


  mcount = mcount * 1500;
  scount = scount * 250;
  meekcount = meekcount * 25;



  m = (( monkey_arr[0].get_revenue()) * num_monkeys );
	s = (( sea_arr[0].get_revenue()) * num_seas );
	mr = (( meek_rat_arr[0].get_revenue()) * num_meek_rats );

  m = m + mcount;
  s = s + scount;
  mr = mr + meekcount;

	cout << " Monkey Revenue: " <<  m << endl;
	cout << " SeaOtter Revenue: " << s << endl;
	cout << " Meekrat Revenue: " << mr << endl;
	money = money + ( m + s + mr );


}

/******************************************************
** Function: sub_food
** Descrpition: subtracts food cost for each animal
** Input: each animal
** Output: food cost taken out from money
******************************************************/

void Zoo :: sub_food()
{
  float base;
  float mf;
  float sf;
  float meekf;
  srand((int)time(NULL));

  base = ((rand()%50)) + 75;
  base = base / 100;

  mf = ((( daily_food_cost * base ) * monkey_arr[0].get_food()) * num_monkeys );
  sf = ((( daily_food_cost * base ) * sea_arr[0].get_food()) * num_seas );
	meekf = ((( daily_food_cost * base ) * meek_rat_arr[0].get_food()) * num_meek_rats );

	cout << " Monkey Food Cost: " << mf << endl;
	cout << " SeaOtter Food Cost: " << sf << endl;
	cout << " Meekrat Food Cost: " <<	meekf << endl;
	cout << " Total Food Cost: "  << mf + sf + meekf << endl;

	money = money - ( mf + sf + meekf );

}


/******************************************************
** Function: buy_animal
** Descrpition: add animal to zoo
** Input: user input 1-4
** Output: adds animal to dynamic array
******************************************************/

void Zoo :: buy_animal()
{
  int choice;
  int choice2;

  cout << " Would you like to buy animal this week? " << endl;
  cout << " Enter 1 for Monkey , Enter 2 for SeaOtter , Enter 3 for Meekrat , Enter 4 is you wish not to purchase an animal." << endl;
  cin >> choice ;

  if(choice == 1  )
  {
    cout << "Would you like to purchase 2? Press 1 for yes or 2 for no ." << endl;
    cin >> choice2;

    if (choice2 == 1)
    {
      add_monkey();
      add_monkey();
      money = money - 30000;
    }

    else if (choice2 == 2)
    {
      add_monkey();
      money = money - 15000;
    }

  }

  else if(choice ==  2 )
    {
      cout << "Would you like to purchase 2? Press 1 for yes or 2 for no ." << endl;
      cin >> choice2;

      if (choice2 == 1)
      {
        add_sea();
        add_sea();
        money = money - 10000;
      }

      else if (choice2 == 2)
      {
        add_sea();
        money = money - 5000;
      }
    }

  else if(choice == 3 )
  {
    cout << "Would you like to purchase 2? Press 1 for yes or 2 for no ." << endl;
    cin >> choice2;

    if (choice2 == 1)
    {
      add_meek_rat();
      add_meek_rat();
      money = money - 1000;
    }

    else if (choice2 == 2)
    {
      add_meek_rat();
      money = money - 500;
    }
  }

  else if(choice ==  4)
  {
    cout << " No animal was puchased. " << endl;
  }


}

/******************************************************
** Function: bool game
** Descrpition: keeps game going until return false
** Input: true
** Output: returns true or false
******************************************************/
bool Zoo :: game()
{
  int choice;
  int mcount = 0;
  int scount = 0;
  int meekcount = 0;
  if(money >= 0)
  {
    cout << " Would you like to continue playing or end the game?" << endl;
    cout << "Enter 1 for yes or 2 for no" << endl;
    cin >> choice;

    if (choice == 1)
    {
      cout << " It is now week " << days+1 << endl;
      for(int i = 0; i < num_monkeys ; i++ )
      {
        if( monkey_arr[i].get_age()< 5)
        {
          mcount = mcount + 1;
        }
      }

      for(int i = 0; i < num_seas ; i++ )
      {
        if( sea_arr[i].get_age() < 5)
        {
          scount = scount + 1;
        }
      }

      for(int i = 0; i < num_meek_rats ; i++ )
      {
        if( meek_rat_arr[i].get_age() < 5)
        {
          meekcount = meekcount + 1;
        }
      }

      cout << "Number of adult monkeys :" << num_monkeys - mcount << endl;
      cout << "Number of baby monkeys :" <<  mcount << endl;
      cout << "Number of adult seaotters :" << num_seas - scount << endl;
      cout << "Number of baby seaotters :" <<  scount << endl;
      cout << "Number of adult meekrats :" << num_meek_rats - meekcount << endl;
      cout << "Number of baby meekrats :" << meekcount << endl;
      return true;
    }

    else if (choice == 2)
    {
      cout << " ***** Thanks for playing ZOO TYPOON ******" << endl;
      return false;
    }
  }
  else if (money < 0)
  {
    cout << " ***** BANKRUPT ***** " << endl;
    cout << " ***** Thanks for playing ZOO TYPOON ******" << endl;
    return false;
  }
}






//Keep Page down
