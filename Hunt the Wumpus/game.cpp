/******************************************************
** Program: game.cpp
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: implementation file
** Input:
** Output: defines functions and class members
******************************************************/

#include "game.h"


/******************************************************
** Function: Game()
** Descrpition: initializes room object
** Input:
** Output: creates Game object and sets up vector
******************************************************/

Game :: Game()
{
  for(int i = 0; i < 4 ; i ++)
  {
    vector<Room*> temp;
    for(int j = 0; j < 4 ; j++)
    {
      temp.push_back(new Room);
    }
    cave.push_back(temp);
  }


}

/******************************************************
** Function: Game()
** Descrpition: initializes room object
** Input:
** Output: creates Game object and sets up vector
******************************************************/

Game :: ~Game()
{

}

/******************************************************
** Function: set_game_up()
** Descrpition: Places the objects into vector
** Input:
** Output: adds objects to vector
******************************************************/

void Game :: set_game_up()
{
  srand(time(NULL));
  int x;
  int y;
  bool temp;
  x = rand()%4;
  y = rand()%4;

  cave[x][y]->set_ptr(1);

  wumpus_x = x;
  wumpus_y = y;

  x = rand()%4;
  y = rand()%4;

  cave[x][y]->set_ptr(2);

  gold_x = x;
  gold_y = y;


for(int i = 0; i < 2; i++)
{
  temp = false;
  while(temp == false)
  {
    x = rand()%4;
    y = rand()%4;
    if(cave[x][y]->get_filler() == false)
    {
      cave[x][y]->set_ptr(3);
      temp = true;
    }
  }
}


  for(int i = 0; i < 2; i++)
  {
    temp = false;
    while(temp == false)
    {
      x = rand()%4;
      y = rand()%4;
      if(cave[x][y]->get_filler() == false)
      {
        cave[x][y]->set_ptr(4);
        temp = true;
      }
    }
  }

  for(int i = 0; i < 10; i++)
  {
    temp = false;
    while(temp == false)
    {
      x = rand()%4;
      y = rand()%4;
      if(cave[x][y]->get_filler() == false)
      {
        cave[x][y]->set_ptr(5);
        temp = true;
      }
    }
  }

  rope_x = coor_x;
  rope_y = coor_y;
}


/******************************************************
** Function: print_board()
** Descrpition: prints out board
** Input:
** Output: prints out board
******************************************************/

void Game :: print_board()
{

  for(int i = 0; i < 4 ; i++)
  {
    cout << "|";
    for(int j = 0; j < 4; j++)
    {
      if(cave[i][j]== cave[coor_x][coor_y])
      {
        cout << "P";
      }
      else if(cave[i][j]== cave[gold_x][gold_y] && gold == false)
      {
        cout << "G";
      }
      else if(cave[i][j]== cave[wumpus_x][wumpus_y] && wumpus == false)
      {
        cout << "W";
      }

      cout << "___" ;

      cout << "|";


    }

    cout << "" << endl;

  }
}

/******************************************************
** Function: check_spot()
** Descrpition: checks adjacent
** Input:
** Output: gives perception
******************************************************/

void Game :: check_spot()
{

  if(cave[coor_x+1][coor_y]->get_ptr() <= 4 && (coor_x+1) < 4 )
  {
    cout << "You hear this at "  << (coor_x+1) << " ** " << coor_y << endl;
    cout << cave[coor_x+1][coor_y]->get_p() << endl;
  }
  if(cave[coor_x-1][coor_y]->get_ptr() <= 4 && (coor_x-1) >0 )
  {
    cout << "You hear this at   " << (coor_x-1) << " ** " << coor_y << endl;
    cout << cave[coor_x-1][coor_y]->get_p() << endl;
  }
  if(cave[coor_x][coor_y+1]->get_ptr() <= 4 &&  (coor_y+1) < 4 )
  {
    cout << "You hear this at  " << coor_x << " ** " << (coor_y+1)  << endl;
    cout << cave[coor_x][coor_y+1]->get_p() << endl;
  }

  if(cave[coor_x][coor_y-1]->get_ptr() <= 4 && (coor_y-1 ) >0 )
  {
    cout << "You hear this at  "<< coor_x << " ** " << (coor_y-1) << endl;
    cout << cave[coor_x][coor_y-1]->get_p() << endl;
  }

}


/******************************************************
** Function: move_player()
** Descrpition: moves player
** Input:
** Output: changes player position
******************************************************/

void Game :: move_player(string move)
{

  if( move == "w" && (coor_x-1) >=0)
  {
    cout << "You moved north" << endl;
    coor_x = coor_x-1;

  }

  if(move == "s" && (coor_x+1) <=4)
  {
    cout << "You moved south" << endl;
    coor_x = coor_x+1;
  }

  if(move == "d" && (coor_y+1) <=4)
  {
    cout << "You moved east" << endl;
    coor_y = coor_y+1;
  }

  if(move == "a" && (coor_y-1) >=0)
  {
    cout << "You moved west" << endl;
    coor_y = coor_y-1;
  }

}

/******************************************************
** Function: object_encounter()
** Descrpition: player enters a room
** Input: player enters the room.
** Output: the object encounter takes action.
******************************************************/

void Game :: object_encounter()
{
  if (cave[coor_x][coor_y]->get_ptr() == 1)
  {
    cout << " The wumpus got you!" << endl;
    cout << "***GAMEOVER***" << endl;
    live = false;

  }
  else if (cave[coor_x][coor_y]->get_ptr() == 2)
  {
    cout << " You found the gold!" << endl;
    gold = true;

  }
  else if (cave[coor_x][coor_y]->get_ptr() == 3)
  {
    cout << " A bat carried you to a new room!" << endl;
    srand(time(NULL));
    int temp1 = rand()%4;
    int temp2 = rand()%4;
    coor_x = temp1;
    coor_y = temp2;

  }
  else if (cave[coor_x][coor_y]->get_ptr() == 4)
  {
    cout << " You landed into a pit!" << endl;
    cout << "***GAMEOVER***" << endl;
    live = false;
    objective_check();
  }
  else if(cave[coor_x][coor_y]->get_ptr() == 5)
  {
    cave[coor_x][coor_y]->get_p() ;
  }
}

/******************************************************
** Function: shoot()
** Descrpition: shoots arrows
** Input: player direction
** Output: kills the wumpus, ends game or moves wumpus
******************************************************/

void Game :: shoot(string move2)
{
  a_x = coor_x;
  a_y = coor_y;

  for(int i = 0; i< 3; i++)
  {

  }
  if( move2 == "w" && (a_y-1) >=0)
  {
    coor_x = coor_y-1;

  }

  else if(move2 == "d" && a_y+1 < 4)
  {
    a_x = a_y+1;
  }

  else if(move2 == "w" && (a_x-1) < 4)
  {
    a_y = a_x-1;
  }

  else if(move2 == "s" && (a_x+1) >=0)
  {
    a_y = a_x+1;
  }

  if(a_x == wumpus_x && a_y == wumpus_y)
  {
    cout << "YOU HAVE KILLED THE WUMPUS!" << endl;
    cave[wumpus_x][wumpus_y]->set_ptr(5);
    wumpus = true;
  }

  if (wumpus == false)
  {
    cout << "You hit a wall!" << endl;
    arrows = arrows -1;

    if(arrows == 0)
    {
      live = false;
    }

    srand(time(NULL));
    int r = rand()%4+1;
    if(r >= 4)
    {
      int temp1 = wumpus_x;
      int temp2 = wumpus_y;
      wumpus_x = rand()%4;
      wumpus_y = rand()%4;
      cave[wumpus_x][wumpus_y]->delete_ptr();
      cave[wumpus_x][wumpus_y]->set_ptr(1);
      cave[temp1][temp2]->delete_ptr();
      cave[temp1][temp2]->set_ptr(5);
    }
  }
}

/******************************************************
** Function: objective check()
** Descrpition: checks for all items
** Input:
** Output: ends game
******************************************************/

bool Game :: objective_check()
{
  if(gold == true && wumpus == true && rope_x == coor_x && rope_y == coor_y)
  {
    return true;
  }

  else if ( live == false)
  {
    return true;
  }
  else
  {
    return false;
  }

}










//asas
