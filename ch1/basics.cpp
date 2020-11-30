#include <iostream>

constexpr double additems(double x, double y) {
    return x + y;
}

void displayIntWithMessage(const int& x) {
    std::cout << "The value is " << x << std::endl;
}

int main() {
    double a {2.3};
    double x {4.5};

    std::cout << "The values are " << a << " and " << x << std::endl;

    constexpr auto g  = additems(5.2, 3.1);

    std::cout << "g is " << g << std::endl;

    int v[] {0, 1, 2, 3, 4, 5};

    for (auto& x : v) {
        std::cout << x << std::endl;
    }

    double* pd;

    if (pd == nullptr) {
        std::cout << "the val is null!" << std::endl;
    } else {
        std::cout << "val is " << pd << std::endl;
    }

    // refs demo
    int foo = 23;
    int& bar = foo;

    bar = 42;

    displayIntWithMessage(foo);
    displayIntWithMessage(bar);

    return 0;
}