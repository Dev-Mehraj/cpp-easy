//
// Created by Dev-Mehraj on 8/12/2026.
// @Copyright Dev-Mehraj CPPEASY_H 2026-2027
// This OPENSOURCE library is for those  developers who have habit of
// OG english code writing syntax and are having problems with famlilirazing with Cpp syntax!
// AIM IS TO MAKE CPP SYNTAX AS CLOSE TO READABLE AS POSSIBLE
// ALSO WITHOUT USING TEMPLATES!!! AVIOD TEMPLATES AND HIGH LEVEL ADVANCED PROGRAMMING!
// IMPORTANT: Use class after declaring every class so in the main.cpp or any other cpp file doesnt have to declare the class again

#ifndef CPPEASY_CPPEASY_H
#define CPPEASY_CPPEASY_H
#include <iostream>
#include <string>
#include <array>
#include <fstream>
using namespace std;
#define function auto
#define null nullptr
#define let auto
#define structure struct
#define OR ||
#define AND &&
#define NOT !
#define EQUAL_TO ==
#define NOT_EQUAL_TO !=
#define SUB -
#define MUL *
#define DIV /
#define repeat(n) for (int repeat_i_ = 0; repeat_i_ < (n); repeat_i_++)
namespace jsk {
    class Console {
    public:

        auto log(auto... args) {
            ((cout<<args <<" "), ...);
        }
        auto nlog(auto... args) {
            ((cout <<endl <<args <<" "), ...);
        }
        auto prompt(auto& input, string messageTheyWantTodisplay) {
            cout <<messageTheyWantTodisplay << endl;
            cin >> input;
            return input;
        }
        auto error(auto... args) {
            ((cerr <<args <<" "), ...);
        }
        auto warn(auto... args) {
            ((cout  <<"WARNING: " <<args <<" "), ...);
        }
    };
    inline Console console;
class Array {
public:
    void arrayCopierforINT(int array[], int toCopyToArray[], int size) {

        for (int i = 0; i <size; i++) {
            toCopyToArray[i] = array[i];
        }
    }
    void arrayCopierforSTRING(string array[], string toCopyToArray[], int size) {

        for (int i = 0; i <size; i++) {
            toCopyToArray[i] = array[i];
        }
    }
    void arrayCopierforCHAR(char array[], char toCopyToArray[], int size) {

        for (int i = 0; i <size; i++) {
            toCopyToArray[i] = array[i];
        }
    }
    void arrayCopierforDOUBLE(double array[], double toCopyToArray[], int size) {

        for (int i = 0; i <size; i++) {
            toCopyToArray[i] = array[i];
        }
    }
    void arrayCopierforSIZE_T(size_t array[], size_t toCopyToArray[], int size) {

        for (int i = 0; i <size; i++) {
            toCopyToArray[i] = array[i];
        }
    }
    void arrayCopierforSHORT(short array[], short toCopyToArray[], int size) {

        for (int i = 0; i <size; i++) {
            toCopyToArray[i] = array[i];
        }
    }
    void arrayCopierforLONG(long array[], long toCopyToArray[], int size) {

        for (int i = 0; i <size; i++) {
            toCopyToArray[i] = array[i];
        }
    }
    void arrayCopierforLONG_LONG(long long array[], long long toCopyToArray[], int size) {

        for (int i = 0; i <size; i++) {
            toCopyToArray[i] = array[i];
        }
    }
    void arrayCopierforBOOLEAN(bool array[], bool toCopyToArray[], int size) {

        for (int i = 0; i <size; i++) {
            toCopyToArray[i] = array[i];
        }
    }
};
inline Array arrayReworked;
}



#endif //CPPEASY_CPPEASY_H