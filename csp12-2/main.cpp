#include <iostream>

class Color{
    int r, g,b;
public:
    Color(int _r, int _g, int _b){
        this->r=_r, this->g=_g, this->b=_b;
    }
    int getR() {return r;}
    int getG() {return g;}
    int getB() {return b;}

    Color operator + (Color operand){
        this->r +=operand.getR();
        this->g +=operand.getG();
        this->b +=operand.getB();
        return *this;
    }
    bool operator == (Color operand){
        if (r == operand.getR() and g == operand.getG() and b == operand.getB()){
            return true;
        }
        return false;
    }

    Color() {
    }
};
int main() {
    Color red(255, 0,0), blue(0,0,255),c;
    c = red + blue;
    Color fuchsia(255,0,255);
    if(fuchsia == c){
        std::cout << "보라색 맞음";
    }
    else{
        std::cout << "보라색 아님";
    }
    return 0;
}