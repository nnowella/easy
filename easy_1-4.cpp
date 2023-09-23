#include <iostream>
#include "easy.h"

using namespace std;

void itc_name(void){

    cout <<"Roman";

}

void itc_fio(void){

    itc_name();
    cout << " " << "Bogachev Olegovich" << endl;

}

int itc_abs(int num) {

    if (num < 0) {

        return -num;

    } 
    else {

        return num;

    }

}

double itc_fabs(double num){

    if (num < 0) {

        return -num;

    } 
    else {

        return num;
        
    }

}