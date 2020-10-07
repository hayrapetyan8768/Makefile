#include <iostream>
#include <cmath>
#include "complex.h"


complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;
    return (temp);
}

complex sub(complex n1, complex n2) {
    complex temp;
    temp.real = n2.real - n1.real;
    temp.img = n2.img - n1.img;
    return (temp);
}


double abs(complex n) {
    complex temp;
    double x;
    temp.real =pow(n.real,2);
    temp.img = pow(n.img,2);
    x = sqrt(temp.real+temp.img);
    return (x);
}

complex mul(complex n1, int n2) {
    complex temp;
    temp.real = n1.real*n2;
    temp.img = n1.img*n2;
    return (temp);
}

