//
// Created by sword on 22.01.2020.
//

#ifndef UNTITLED2_GAMERBOT_H
#define UNTITLED2_GAMERBOT_H

#include "Gamer.h"
#include <stdio.h>
#include <wchar.h>
#include <string>
#include <deque>


class GamerBot : public Gamer {
public:

    string gl[11] = { "0", "о","е", "а", "и", "у", "я", "э", "ы", "ё", "ю"};
    string sogl1[24] = {"0", "н","т","с","р","в","л","к","м","д","п","з","б","г","ч","й","ь","х","ж","ш","ц","ъ","щ","ф"};
    char eng_gl[7] = {'0','e','a','o','i','u','y'};
    char eng_sogl[21] = {'0','t','n','s','h','r','d','l','c','m','w','f','g','p','b','v','k','j','x','q','z'};

    int scores = 0;
    std::deque<std::string> myWords{};
    string arr[5] = {"class","object","exeption","implementation","polymorphism"};
    GamerBot(string name, int lives) : Gamer(name, lives){}



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

    void reset_lives(){
        lives = 7;
    }


    void readfile(std::string filename) {
        std::ifstream file(filename);
        std::string line;
        while (getline(file, line)) {
            this->myWords.push_back(line);
        }
    }

    //void WriteWord() {
     //  this->readfile("botOOP.txt");
       // srand(time(NULL));
        //int numberOfWord = rand() % 63;
        //for (int i = 0; i < 10; i++){
        //int numberOfWord = i;
        //cout << myWords[i] << endl;
        //}
        //this->word = this->myWords[numberOfWord];
        //cout << myWords[numberOfWord] << endl;
     //   this-> word = "hui";

   // }
   void WriteWord(){
       srand(time(NULL));
       int numberOfWord = rand() % 5;
       this->word = arr[numberOfWord];
   }

    int artificial_intelligence_best_pereMANNnaya = 1;


    char giveLetterBot()
    {
        std::cout <<this->name <<" Ugaday bukvu: " << std::endl;
        std::string letter;
        char c;
        if (artificial_intelligence_best_pereMANNnaya >= 0) {
                c = eng_gl[artificial_intelligence_best_pereMANNnaya];
            artificial_intelligence_best_pereMANNnaya*=-1;
        } else {
            c = eng_sogl[artificial_intelligence_best_pereMANNnaya*-1];
            artificial_intelligence_best_pereMANNnaya--;
            artificial_intelligence_best_pereMANNnaya*=-1;
        }
        //std::cin >> letter;
       // std::cout << c << std::endl;
        return c;
    }

    void bot_reset() {
        artificial_intelligence_best_pereMANNnaya = 1;
    }

};



#endif //UNTITLED2_GAMERBOT_H
