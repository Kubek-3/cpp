
#include <iostream>

using namespace std;

class Wektor{

	public:
		double *dane_;
		int wymiar_;

		Wektor(double x){
			wymiar_ = 1;
			dane_ = new double [wymiar_];
			*dane_ = x;

			cout << *dane_ << endl;
            }

		Wektor(double x, double y){
			wymiar_ = 2;
			dane_ = new double [wymiar_];
			*(dane_) = x;
			*(dane_ + 1) = y;

			cout << *(dane_) << " " << *(dane_ + 1) << endl;
            }

		Wektor(double x, double y, double z){
			wymiar_ = 3;
			dane_ = new double [wymiar_];
			*(dane_) = x;
			*(dane_ + 1) = y;
			*(dane_ + 2) = z;

			cout << *(dane_) << " " << *(dane_ + 1) << " " << *(dane_ + 2) << endl;
            }
		Wektor(const Wektor &copy){
			this->wymiar_ = copy.wymiar_;
			dane_ = new double [this->wymiar_];
			for(int i = 0; i < wymiar_; i++){
				this->dane_[i] = copy.dane_[i];
                }
            }
		~Wektor(){
			delete [] dane_;
            }

		void add(Wektor arg) {
			for(int i = 0; i < wymiar_; i++){
				cout << (dane_[i]+arg.dane_[i]) << " ";
                }
			cout << endl;
            }
};

int main(){
	Wektor a(10, 12);
	Wektor b(20, 30);
	Wektor f(2, 6, 20);
	Wektor c(11);
	Wektor d(12);

	a.add(b);
	c.add(d);
}

