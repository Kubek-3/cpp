#include <iostream>

using namespace std;

class vector2d{

    private:
    int x1_;
    int x2_;

    public:
    vector2d(int, int);
    void print2d();
    void add(vector2d suma);
    int getVector();
    void setVector(int a, int b);
};

vector2d::vector2d(int a, int b){
    x1_ = a;
    x2_ = b;
}

void vector2d::print2d(){
    cout << "[" << x1_ << ", " << x2_ << "]" << endl;
}

void vector2d::add(vector2d suma){
    x1_ += suma.x1_;
    x2_ += suma.x2_;
}

int vector2d::getVector(){
    return x1_;
}

void vector2d::setVector(int x1, int x2){
    x1_ = x1;
    x2_ = x2;
}


int main(){

    vector2d wektor(100, 6);
    vector2d kolejny(10, 20);

    kolejny.print2d();
    wektor.add(kolejny);
    wektor.print2d();

    return 0;
}
