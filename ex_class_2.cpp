#include <iostream>
using namespace std;

					// przez referencje
class Vector {
	public:
		double *data_;
		Vector(double data) {
			data_ = new double;
			*data_ = data;
			cout << data_ << endl;
            }
		~Vector() {
			cout << data_ << endl;
			delete data_;
            }
		double add(Vector &arg) {
			return *data_ + *(arg.data_);
            }
};

int main() {
	Vector a(0.0);
	Vector b(1.0);
	cout << a.add(b) << endl;
	cout << a.data_ << endl;
	cout << b.data_ << endl;
}
					//przez wskaznik

//class Vector {
//	public:
//		double *data_;
//		Vector(double data) {
//			data_ = new double;
//			*data_ = data;
//			cout << data_ << endl;
//		    }
//		~Vector() {
//			cout << data_ << endl;
//			delete data_;
//		    }
//		double add(Vector *arg) {
//			return *data_ + *(arg->data_);
//		    }
//};

//int main(){
//	Vector a(0.0);
//	Vector b(1.0);
//	cout << a.add(&b) << endl;
//  cout << a.data_ << endl;
//  cout << b.data_ << endl;
//	}

					//konstruktor kopiujacy

//class Vector {
//	public:
//		double *data_;
//		Vector(double data) {
//			data_ = new double;
//			*data_ = data;
//			cout << data_ << endl;
//		    }
//      Vector(const Vector &copy) {
//			data_ = new double;
//			memcpy(data_, copy.data_, sizeof(double));
//		    }
//		~Vector() {
//			cout << data_ << endl;
//			delete data_;
//		    }
//		double add(Vector arg) {
//			return *data_ + *(arg.data_);
//		    }
//
//};

//int main(){
//	Vector a(0.0);
//	Vector b(1.0);
//	cout << a.add(b) << endl;
//  cout << a.data_ << endl;
//  cout << b.data_ << endl;
//}


