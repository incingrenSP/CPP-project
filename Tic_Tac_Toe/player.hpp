#pragma once

#include<iostream>
using namespace std;

class Player
{

string name;
int score;
public:
Player(){}
Player(string n) :score(0),name(n){}
void won()
{
    score++;
}
int getScore()
{
    return score;

}
string getName()
{
return name;
}
};