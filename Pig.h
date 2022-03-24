#include<iostream>
#include"Animals.h"

using namespace std;

class Pig:public Animals{
    
    private:
    string drop;

    public:
    Pig(int _health, int _legs, float _height, float _length, float _width, string _diet, string _drop) : Animals(_health, _legs, _height, _length, _width, _diet){
        drop = _drop;
    }

    void showPig(){
        cout<<"PIG"<<endl<<"Features:"<<endl;
        showAnimal();
        cout<<"Drop: "<<drop<<endl;
        cout<<endl;
    }

};