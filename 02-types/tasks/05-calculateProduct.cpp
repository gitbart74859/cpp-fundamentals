#include <iostream>
#include <memory>
// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.
std::shared_ptr<int> calculateProduct(int first, int second) {
    std::shared_ptr<int> product = std::make_shared<int>(first * second);

    return product;
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
