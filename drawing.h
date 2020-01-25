//
// Created by sword on 22.01.2020.
//
#include <iostream>
#ifndef UNTITLED2_DRAWING_H
#define UNTITLED2_DRAWING_H

void Print(int lives)
{
    switch (lives) {
        case 7:
        {

            std::cout << std::endl;
            std::cout << " [[   " << std::endl;
            std::cout << " ][                " << std::endl;
            std::cout << " ][                 " << std::endl;
            std::cout << " ][               " << std::endl;
            std::cout << " ][                    " << std::endl;
            std::cout << " ][            " << std::endl;
            std::cout << " ][                " << std::endl;
            std::cout << " ][                 " << std::endl;
            std::cout << " ][                  " << std::endl;
            std::cout << "_][_____________    " << std::endl;
            std::cout << std::endl;
            break;
        }

        case 6:
        {
            std::cout << std::endl;
            std::cout << " [[==========    " << std::endl;
            std::cout << " ][              " << std::endl;
            std::cout << " ][              " << std::endl;
            std::cout << " ][                  " << std::endl;
            std::cout << " ][                  " << std::endl;
            std::cout << " ][                 " << std::endl;
            std::cout << " ][                " << std::endl;
            std::cout << " ][                  " << std::endl;
            std::cout << " ][               " << std::endl;
            std::cout << "_][_____________    " << std::endl;
            std::cout << std::endl;
            break;
        }

        case 5:
        {
            std::cout << std::endl;
            std::cout << " [[==========    " << std::endl;
            std::cout << " ][         |    " << std::endl;
            std::cout << " ][       (*_*)     " << std::endl;
            std::cout << " ][              " << std::endl;
            std::cout << " ][                 " << std::endl;
            std::cout << " ][                 " << std::endl;
            std::cout << " ][                 " << std::endl;
            std::cout << " ][                   " << std::endl;
            std::cout << " ][                  " << std::endl;
            std::cout << "_][_____________    " << std::endl;
            std::cout << std::endl;
            break;
        }

        case 4:
        {
            std::cout << std::endl;
            std::cout << " [[==========    " << std::endl;
            std::cout << " ][         |    " << std::endl;
            std::cout << " ][       (*_*)     " << std::endl;
            std::cout << " ][     ___| |___   " << std::endl;
            std::cout << " ][                  " << std::endl;
            std::cout << " ][                   " << std::endl;
            std::cout << " ][                     " << std::endl;
            std::cout << " ][                      " << std::endl;
            std::cout << " ][                      " << std::endl;
            std::cout << "_][_____________    " << std::endl;
            std::cout << std::endl;
            break;
        }
        case 3:
        {
            std::cout << std::endl;
            std::cout << " [[==========    " << std::endl;
            std::cout << " ][         |    " << std::endl;
            std::cout << " ][       (*_*)     " << std::endl;
            std::cout << " ][     ___| |___   " << std::endl;
            std::cout << " ][    //\\     /\\\\      " << std::endl;
            std::cout << " ][   //  \\   /  \\\\      " << std::endl;
            std::cout << " ][                 " << std::endl;
            std::cout << " ][                   " << std::endl;
            std::cout << " ][                 " << std::endl;
            std::cout << "_][_____________    " << std::endl;
            std::cout << std::endl;
            break;
        }
        case 2:
        {
            std::cout << std::endl;
            std::cout << " [[==========    " << std::endl;
            std::cout << " ][         |    " << std::endl;
            std::cout << " ][       (*_*)     " << std::endl;
            std::cout << " ][     ___| |___   " << std::endl;
            std::cout << " ][    //\\     /\\\\      " << std::endl;
            std::cout << " ][   //  \\   /  \\\\      " << std::endl;
            std::cout << " ][      |ANIME|     " << std::endl;
            std::cout << " ][                   " << std::endl;
            std::cout << " ][                " << std::endl;
            std::cout << "_][_____________    " << std::endl;
            std::cout << std::endl;
            break;
        }
        case 1:
        {
            std::cout << std::endl;
            std::cout << " [[==========    " << std::endl;
            std::cout << " ][         |    " << std::endl;
            std::cout << " ][       (*_*)     " << std::endl;
            std::cout << " ][     ___| |____   " << std::endl;
            std::cout << " ][    //\\     /\\\\      " << std::endl;
            std::cout << " ][   //  \\   /  \\\\      " << std::endl;
            std::cout << " ][      |ANIME|     " << std::endl;
            std::cout << " ][      //   \\\\            " << std::endl;
            std::cout << " ][     //     \\\\       " << std::endl;
            std::cout << "_][______STYLCHIK_    " << std::endl;
            std::cout << std::endl;
            break;
        }
    }
}
#endif //UNTITLED2_DRAWING_H
