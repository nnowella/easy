#include <iostream>
#include "easy.h"

using namespace std;

int itc_revnbr(int num){

    int n1, n2, n3;
    n1 = num/100;
    n2 = (num / 10) % 10;
    n3 = num % 10;

    int n = n3 * 100 + n2 * 10 + n1;

    return n;

}


bool itc_iseven(int num) {

    if(num % 2 == 0) {

        return true;

    } 
    else {

        return false;

    }

}

int itc_max(int num, int num2){

    if (num > num2) {

        return num;

    }
    else {

        return num2;

    }

}

int itc_min(int num, int num2){

    if (num < num2) {

        return num;

    }
    else {

        return num2;

    }

}

double itc_fmax(double num, double num2) {

    if (num > num2) {

        return num;

    } 
    else {

        return num2;

    }

}

double itc_fmin(double num, double num2) {

    if (num < num2) {

        return num;

    } 
    else {

        return num2;

    }

}