#include<iostream>
#include"Animals.h"

using namespace std;

class Llama:public Animals{
    
    private:
    int damage;

    public:
    Llama(int _health, int _legs, float _height, float _length, float _width, string _diet, int _damage) : Animals(_health, _legs, _height, _length, _width, _diet){
        damage = _damage;
    }

    void showLlama(){
        cout<<"LLAMA"<<endl<<"Features:"<<endl;
        showAnimal();
        cout<<"Damage: "<<damage<<"hp"<<endl;
        cout<<endl;
    }

};