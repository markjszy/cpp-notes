#include <iostream>

namespace VectorDemo {
    class Vector {
        public:
            Vector(int s) : elem{new double[s]}, sz{s} {}
            double& operator[](int i) { return elem[i]; }
            int size() {return sz;}
            double read_and_sum();
        private:
            double* elem;
            int sz;
    };

    double Vector::read_and_sum() {
        for (int i = 0; i != sz; ++i) {
            std::cin >> elem[i];
        }

        double sum {0};
        for (int i = 0; i != sz; ++i) {
            sum += elem[i];
        }

        return sum;
    }
}

int main() {
    VectorDemo::Vector v(6);

    auto sum = v.read_and_sum();


    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
