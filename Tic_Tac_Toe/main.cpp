// S

#include <iostream>
using namespace std;
#include "player.hpp";
#include "game.hpp";

int main()
{
    char ch;
    while (1)
    {
        cout << "*********[Menu]*********";
        cout << "\t 1. One player game" << endl;
        cout << "\t 2. Two player game" << endl;
        cout << "\t3.Exit" << endl;
        cout << "************************";
        cout << "Enter your choice";
        cin >> ch;


       switch(ch)
       {
        case 1:
        Game* game =new Game();
        game->oneplayergame();

        cout<<"One player game"<<endl;
        break;
        case 2:
        Game* game =new Game();
        game->oneplayergame();
        case 3:
        return 0;
        default:
        cout<<"Invalid Choice"<<endl;
       }
    }
    return 0;
}

