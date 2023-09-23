#include <iostream>
#include "easy.h"

using namespace std;

int itc_sqrt(int num) {

    if (num < 0) {

        return -1;

    }

    long long n1 = 0;
    long long n2 = num;

    while (n1 <= n2) {

        long long n3 = (n1 + n2) / 2;

        if (n3 * n3 == num) {
            return n3;
        }

        if (n3 * n3 < num) {
            n1 = n3 + 1;
        } else {
            n2 = n3 - 1;
        }

    }
    return -1;

}

int itc_skv(int num){

    int n;
    n = num * num;

    if (num <= 0) {

        return -1;

    }
    else {

        return n;

    }

}

int itc_spr(int a, int b){

    int n;
    n = a * b;

    if (a <= 0 or b <= 0) {

        return -1;

    }
    else {

        return n;

    }

}

int itc_str(int a, int b, int c) {

  if (a > 0 && b > 0 && c > 0 && a + b > c) {

        float n = a;
        float p = (n + b + c) / 2;
        float s = itc_sqrt(p * (p - n) * (p - b) * (p - c));
        return s;

    }
   else {

    return -1;

   }

}

double itc_scir(int radius){

    float pi = 3.14;
    double n = (radius * radius)*pi;

    if (radius<=0) {

        return-1;

    }
    else {

        return n;

    }

}

double itc_pow(int num, int step){

    int n = num;

    if (step > 0) {

        for (int i = 1; i < step; i++){
            num = num * n;
        }
        return num;

    }
    else if (step == 0) {

           return 1;

    }
    else {

        step = -step;
       for (int i = 1; i < step; i++){
            num = num * n;

        }
        float nn = num;
        float r = 1 / nn;
        return r;
    }


}
