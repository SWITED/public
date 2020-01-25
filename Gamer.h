//
// Created by sword on 22.01.2020.
//

#ifndef UNTITLED2_GAMER_H
#define UNTITLED2_GAMER_H

#include <string>
#include <iostream>

using namespace std;

class Gamer {
public:


    string word;
    string name;
    std::deque<int> visited_symbols{};

    Gamer(string name, int lives){
        this->name = name;
        this->lives = lives;
    }


    int lives;


    void zanulenie(){
        visited_symbols = {0};
    }


    void word_right_now(){
        for (int i = 0; i < this->word.length(); i++){
            if(this->visited_symbols[i] == 0){
                std::cout << "* ";
            }
            if(this->visited_symbols[i] == 1){
                std::cout << word[i]<<" ";
            }
        }
        std::cout << std::endl;
    }



    bool checkWin()
    {
        for (int i = 0; i < this->word.length(); i++)
        {
            if (this->visited_symbols[i] == 0)
            {
                return false;
            }
        }
        return true;
    }

    int lives_cnt()
    {
        return lives;
    }

    string get_name()
    {
        return name;
    }

    string get_word()
    {
        return word;
    }

    void lose()
    {
        lives--;
    }




};


#endif //UNTITLED2_GAMER_H
