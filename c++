#include <iostream>
#include <vector>
#include <string>
#include <stack>

int main() {
    // Создание массива типа список
    std::vector<std::string> a_list = {"a", "b", "c"};

    // Организация стека
    std::stack<int> stack;

    // Добавление в стек
    stack.push(1);    // [1]
    stack.push(2);    // [1, 2]
    stack.push(3);    // [1, 2, 3]

    // Удаление из стека
    int top = stack.top();  // получаем верхний элемент
    stack.pop();            // удаляем его из стека

    std::cout << "Верхний элемент: " << top << std::endl;
    std::cout << "Размер стека после pop: " << stack.size() << std::endl;

    return 0;
}
