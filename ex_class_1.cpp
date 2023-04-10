#include <iostream>

using namespace std;

class Vector {
    public:
    double *data_;
    Vector(double data) {
        data_ = new double;
        *data_ = data;
        cout << data_ << endl;
        }
    ~Vector() {
        delete data_;
        }
    double add(Vector &arg) {
        return *data_+*(arg.data_);
        cout << data_ << endl;
        }
    };
int main() {
    Vector a(0.0);
    Vector b(1.0);
    cout << a.add(b) << endl;
    cout << a.data_ << endl;
    cout << b.data_ << endl;
}
