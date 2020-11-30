#include <iostream>

namespace VectorDemo {
    // interface
    class Vector {
        public:
            Vector(int s);
            double& operator[](int i);
            int size();
            double read_and_sum();
        private:
            double* elem;
            int sz;
    };

    // implementation
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

    Vector::Vector(int s) : sz{s}, elem{new double[s]} {}
    double& Vector::operator[](int i) {
        return elem[i];
    }

    int Vector::size() {
        return sz;
    }
}

int main() {
    VectorDemo::Vector v(6);

    auto sum = v.read_and_sum();

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
