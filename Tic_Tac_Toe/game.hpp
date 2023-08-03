#pragma once

#include<iostream>
using namespace std;
#include<player.hpp>
class Game
{
private:
char board[9];
int emptyindex[9];
int againstcomputer;
int gameOn;
int emptyCount;

void display()
{
cout<<endl;
cout<<"\t    |    |    "<<endl;
cout<<"\t"<<board[0]<<"|"<<board[1]<<"|"<<board[2]<<endl;
cout<<"\t    |    |    "<<endl;
cout<<"----------------"<<endl;
cout<<"\t    |    |    "<<endl;
cout<<"\t"<<board[3]<<"|"<<board[4]<<"|"<<board[5]<<endl;
cout<<"\t    |    |    "<<endl;
cout<<"----------------"<<endl;
cout<<"\t    |    |    "<<endl;
cout<<"\t"<<board[6]<<"|"<<board[7]<<"|"<<board[8]<<endl;
cout<<"\t    |    |    "<<endl;
cout<<"----------------"<<endl;
}


void play(Player &p1 , Player &p2);
public:

void oneplayergame()
{
Player p1("Player 1");
Player p2("Computer");
cout<<"------------------"<<endl;
cout<<"\t Player 1: X Computer :O"<<endl;
cout<<endl;
againstcomputer=1;
play(p1,p2);
}
void twoplayergame()
{

    Player p1("Player 1");
    Player p2("Player 2");
    cout<<"--------------------"<<endl;
    cout<<"\t Player 1 : X Player 2 :O ";
    cout<<"--------------------"<<endl;
    againstcomputer = 0;
}


};