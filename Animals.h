#include<iostream>
#ifndef ANIMALS_H
#define ANIMALS_H

using namespace std;

class Animals{
    
    private:
    int health, legs; 
    float height, length, width;
    string diet;

    public:
    Animals(int _health, int _legs, float _height, float _length, float _width, string _diet){
        health = _health;
        legs = _legs;
        height = _height;
        length = _length;
        width = _width;
        diet = _diet;
    }

    void showAnimal(){
        cout<<"Health: "<<health<<"hp"<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Legs: "<<legs<<endl;
        cout<<"Diet: "<<diet<<endl;
    }

};

#endif