//
// Created by sword on 22.01.2020.
//

#ifndef UNTITLED2_GAMERPLAYER_H
#define UNTITLED2_GAMERPLAYER_H

#include "Gamer.h"

class GamerPlayer : public Gamer {
public:
    int scores = 0 ;
    GamerPlayer(string name, int lives) : Gamer(name, lives){}

    void WriteWord() {
        std::cout << this->name << " Zagadai slovo: ";
        std::cin >> word;
        //Draw_HI();
    }

    void reset_lives(){
        lives = 7;
    }

    bool CheckLetter(char c)
    {
        bool f = false;
        for (int i = 0; i < this->word.length(); i++)
        {
           // string s(1, word[i]);
            if (word[i] == c)
            {
                visited_symbols[i] = 1;
                f = true;
            }
        }
        return f;
    }

    char giveLetter()
    {
        std::cout <<this->name <<" Ugaday bukvu: " << std::endl;
        std::string letter;
        char c = ' ' ;
        //std::cin >> letter;
        std::cin >> c;
        return c;
    }
};


#endif //UNTITLED2_GAMERPLAYER_H
