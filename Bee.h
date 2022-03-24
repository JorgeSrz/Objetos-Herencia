#include<iostream>
#include"Animals.h"

using namespace std;

class Bee:public Animals{
    
    private:
    int damage, wings, antennas;

    public:
    Bee(int _health, int _legs, float _height, float _length, float _width, string _diet, int _damage, int _wings, int _antennas) : Animals(_health, _legs, _height, _length, _width, _diet){
        damage = _damage;
        wings = _wings;
        antennas = _antennas;
    }

    void showBee(){
        cout<<"BEE"<<endl<<"Features:"<<endl;
        showAnimal();
        cout<<"Damage: "<<damage<<"hp"<<endl;
        cout<<"Wings: "<<wings<<endl;
        cout<<"Antennas: "<<antennas<<endl;
        cout<<endl;
    }

};