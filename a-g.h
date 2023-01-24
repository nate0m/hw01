#ifndef _A_G_H
#define _A_G_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <random>
#include <time.h>
using namespace std;

int generateRandomInt();

int sumDigits(int i);

int revDigits(int i);

void fillRanArr(int arr[], int size);

void sortArr(int arr[], int size);

void outArrFile(int arr[], int size, string file);

void readFileArr(int arr[], int size, string file);

void printArr(int arr[], int size, string file);


#endif
