#ifndef GPACALC_H
#define GPACALC_H
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

double FindUnweighted(double grades[],int classNum);

double FindWeighted(double grades[],int classNum, string type[]);
#endif


// g++ -I/Users/charlesdoyle/Desktop/GpaCalculator/include main.cpp modes.cpp -o GpaCalculator
