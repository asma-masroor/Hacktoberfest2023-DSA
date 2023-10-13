#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> data;
public:
    void push(int value) {
        data.push_back(value);
    }

    void pop() {
        if (!data.empty()) {
            data.pop_back();
        }
    }

    int top() {
        if (!data.empty()) {
            return data.back();
        }
        return -1; // You can choose a different way to handle this case.
    }

    bool isEmpty() {
        return data.empty();
    }

    size_t size() {
        return data.size();
    }
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top: " << stack.top() << std::endl;
    std::cout << "Size: " << stack.size() << std::endl;

    while (!stack.isEmpty()) {
        std::cout << "Popping: " << stack.top() << std::endl;
        stack.pop();
    }

    return 0;
}
