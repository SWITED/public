#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <cstdio>
#include <deque>
#include <fstream>
#include <map>

#include <ctime>
#include "GamerBot.h"
#include "GamerPlayer.h"
#include "drawing.h"




void round(GamerPlayer& player01, GamerPlayer& player02);
void game_bot(GamerPlayer& player01, GamerBot& player02);
void game_bot2(GamerBot& player01, GamerPlayer& player02);

int main(){

    string name1;
    string name2;
    string nameBot;
    int lives = 7;
    int countOfround;
    int game_mode;

    std::cout << "choose count of rounds: ";
    std::cin >> countOfround;

    std::cout << "Choose game mode: 1: Against Bot, 2: Against Human \n";
    std::cin >> game_mode;

    std::cout << "first player name";
    std::cin >> name1;

    if(game_mode == 2){
        std::cout << "second player name";
        std::cin >> name2;

    }

    else {
        nameBot = "R2D2";
    }
    GamerPlayer player1 = GamerPlayer(name1,lives);
    GamerPlayer player2 = GamerPlayer(name2,lives);
    GamerBot bot = GamerBot(nameBot,lives);



    if (game_mode == 2) {
        for (int i = 0; i < countOfround; i++) {
            player1.reset_lives();
            player2.reset_lives();
            bot.reset_lives();
            player2.zanulenie();
            bot.zanulenie();
            player1.zanulenie();//wtf

            if (i % 2 == 0) {
                round(player1, player2);
            } else {
                round(player2, player1);
            }

        }
    }
    else {
        for (int i = 0; i < countOfround; i++) {
            player1.reset_lives();
            player2.reset_lives();
            bot.reset_lives();

            player2.zanulenie();
            bot.zanulenie();
            player1.zanulenie();

            if (i % 2 == 0) {
                game_bot(player1, bot);
            } else {
                game_bot2(bot, player1);
            }

        }
    }

    if(player1.scores > player2.scores)
    std::cout << player1.name<<" win!";

    if(player2.scores > player1.scores)
    std::cout << player2.name<<" win!";

    if(player2.scores == player1.scores)
    std::cout << "nichya!";




getchar();
return 0;
}


void round(GamerPlayer& player01, GamerPlayer& player02) {
    player01.WriteWord();  //загадай слово
    for (int i = 0; i < player01.word.length(); i++) // в word храниться загаданное слово
        player01.visited_symbols.push_back(0);
    std::cout << "GAME STARTED!" << std::endl;
    while (player02.lives > 0) {

        char c = player02.giveLetter();

        if (player01.CheckLetter(c)) {
            std::cout << "ugadal: " << c << std::endl;
            player01.word_right_now();
            if (player01.checkWin()) {
                std::cout << "POBEDIL " << player02.name << std::endl;
                player02.scores++;
                break;
            }
        } else {
            player02.lives--;
            Print(player02.lives_cnt());

            std::cout << "bukvu <" << c << "> ne ugadal" << std::endl;
            player01.word_right_now();
        }
    }

    if (!player02.lives > 0) {
        std::cout << "PROIGRAL " << player02.name << std::endl;
        std::cout << "zagadannoe slovo:" << player01.word << std::endl;
        player01.scores++;
    }
    std::cout << player01.name << " : " << player01.scores << "   " << player02.name << " : " << player02.scores
              << std::endl;


    /**
     * SWAP
     *
     */

    player02.WriteWord();
    for (int i = 0; i < player02.word.length(); i++)
        player02.visited_symbols.push_back(0);
    std::cout << "GAME STARTED!" << std::endl;
    while (player01.lives > 0) {
        //player01.word_right_now();
        char c = player01.giveLetter();

        if (player02.CheckLetter(c)) {
            std::cout << "ugadal: " << c << std::endl;
            player02.word_right_now();
            if (player02.checkWin()) {
                std::cout << "POBEDIL " << player01.name << std::endl;
                player01.scores++;
                break;
            }
        } else {
            player01.lives--;
            Print(player01.lives_cnt());
            //player02.print_lives();
            std::cout << "bukvu <" << c << "> ne ugadal" << std::endl;
            player02.word_right_now();
        }
    }

    if (!player01.lives > 0) {
        std::cout << "PROIGRAL " << player01.name << std::endl;
        std::cout << "zagadannoe slovo:" << player02.word << std::endl;
        player02.scores++;
    }
    std::cout << player02.name << " : " << player02.scores << "   " << player01.name << " : " << player01.scores
              << std::endl;
}





void game_bot(GamerPlayer& player01, GamerBot& player02) {
    player01.WriteWord();
    player02.bot_reset();
    for (int i = 0; i < player01.word.length(); i++)
        player01.visited_symbols.push_back(0);
    std::cout << "GAME STARTED!" << std::endl;
    while (player02.lives > 0) {
        //player01.word_right_now();
        char c = player02.giveLetterBot();

        if (player01.CheckLetter(c)) {
            std::cout << "ugadal: " << c << std::endl;
            player01.word_right_now();
            if (player01.checkWin()) {
                std::cout << "POBEDIL " << player02.name << std::endl;
                player02.scores++;
                break;
            }
        } else {
            player02.lives--;
            Print(player02.lives_cnt());
           /// player01.print_lives();
            std::cout << "bukvu <" << c << "> ne ugadal" << std::endl;
            player01.word_right_now();
        }
    }

    if (!player02.lives > 0) {
        std::cout << "PROIGRAL " << player02.name << std::endl;
        std::cout << "zagadannoe slovo:" << player01.word << std::endl;
        player01.scores++;
    }
    std::cout << player01.name << " : " << player01.scores << "   " << player02.name << " : " << player02.scores
              << std::endl;


    /**
     * SWAP
     *
     */

    player02.WriteWord();
    for (int i = 0; i < player02.word.length(); i++)
        player02.visited_symbols.push_back(0);
    std::cout << "GAME STARTED!" << std::endl;
    while (player01.lives > 0) {
        //player01.word_right_now();
        char c = player01.giveLetter();

        if (player02.CheckLetter(c)) {
            std::cout << "ugadal: " << c << std::endl;
            player02.word_right_now();
            if (player02.checkWin()) {
                std::cout << "POBEDIL " << player01.name << std::endl;
                player01.scores++;
                break;
            }
        } else {
            player01.lives--;
           // player02.print_lives();
            std::cout << "bukvu <" << c << "> ne ugadal" << std::endl;
            player02.word_right_now();
        }
    }

    if (!player01.lives > 0) {
        std::cout << "PROIGRAL " << player01.name << std::endl;
        std::cout << "zagadannoe slovo:" << player02.word << std::endl;
        player02.scores++;
    }
    std::cout << player02.name << " : " << player02.scores << "   " << player01.name << " : " << player01.scores
              << std::endl;
}



void game_bot2(GamerBot& player01, GamerPlayer& player02) {

    /**
     * SWAP
     *
     */

    player02.WriteWord();
    for (int i = 0; i < player02.word.length(); i++)
        player02.visited_symbols.push_back(0);
    std::cout << "GAME STARTED!" << std::endl;
    while (player01.lives > 0) {
        //player01.word_right_now();
       char c = player01.giveLetterBot();

        if (player02.CheckLetter(c)) {
            std::cout << "ugadal: " << c << std::endl;
            player02.word_right_now();
            if (player02.checkWin()) {
                std::cout << "POBEDIL " << player01.name << std::endl;
                player01.scores++;
                break;
            }
        } else {
            player01.lives--;
           // player02.print_lives();
            std::cout << "bukvu <" << c << "> ne ugadal" << std::endl;
            player02.word_right_now();
        }
    }

    if (!player01.lives > 0) {
        std::cout << "PROIGRAL " << player01.name << std::endl;
        std::cout << "zagadannoe slovo:" << player02.word << std::endl;
        player02.scores++;
    }
    std::cout << player02.name << " : " << player02.scores << "   " << player01.name << " : " << player01.scores
              << std::endl;






    player01.WriteWord();
    player01.bot_reset();
    for (int i = 0; i < player01.word.length(); i++)
        player01.visited_symbols.push_back(0);
    std::cout << "GAME STARTED!" << std::endl;
    while (player02.lives > 0) {
        //player01.word_right_now();
        char c = player02.giveLetter();

        if (player01.CheckLetter(c)) {
            std::cout << "ugadal: " << c << std::endl;
            player01.word_right_now();
            if (player01.checkWin()) {
                std::cout << "POBEDIL " << player02.name << std::endl;
                player02.scores++;
                break;
            }
        } else {
            player02.lives--;
        //    player01.print_lives();
            std::cout << "bukvu <" << c << "> ne ugadal" << std::endl;
            player01.word_right_now();
        }
    }

    if (!player02.lives > 0) {
        std::cout << "PROIGRAL " << player02.name << std::endl;
        std::cout << "zagadannoe slovo:" << player01.word << std::endl;
        player01.scores++;
    }
    std::cout << player01.name << " : " << player01.scores << "   " << player02.name << " : " << player02.scores
              << std::endl;

}
