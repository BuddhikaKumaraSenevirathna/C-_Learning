#include <iostream>
#include <type_traits>

int main() {
    auto lambda = [](auto arg) {
        std::cout << args << ' ';
        return std::type_identity<void>{};
    };

    auto log = [&lambda] (auto... args){
        (lambda(args) = ... );
    };

    log(1, "2", '3', 4.5f, 5.5);
}