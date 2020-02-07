/******************************************************
** Program: room.h
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: header file for room
** Input:
** Output:
******************************************************/

#ifndef ROOM_H
#define ROOM_H

#include "event.h"
#include "wumpus.h"
#include "gold.h"
#include "pit.h"
#include "bat.h"
#include "empty.h"

class Room
{
  private:
    Event *ptr;
    int ptr_number;
    bool filler = false;
    

  public:
    Room();
    Room(bool x);
    ~Room();

    void delete_ptr();
    void set_ptr(int x);
    string get_p();
    int get_ptr();
    bool get_filler();

};

#endif
