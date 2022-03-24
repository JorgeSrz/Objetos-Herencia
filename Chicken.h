#include<iostream>
#include"Animals.h"

using namespace std;

class Chicken:public Animals{
    
    private:
    string drop;
    int wings;

    public:
    Chicken(int _health, int _legs, float _height, float _length, float _width, string _diet, string _drop, int _wings) : Animals(_health, _legs, _height, _length, _width, _diet){
        drop = _drop;
        wings = _wings;
    }

    void showChicken(){
        cout<<"CHICKEN"<<endl<<"Features:"<<endl;
        showAnimal();
        cout<<"Drop: "<<drop<<endl;
        cout<<"Wings: "<<wings<<endl;
        cout<<endl;
    }

};