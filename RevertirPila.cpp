#include <iostream>
#include <stack>

using namespace std;

void reverseStack(stack<int>& stk) {
    stack<int> tempStack;
    while (!stk.empty()) {
        tempStack.push(stk.top());
        stk.pop();
    }
    stk = tempStack;
}

int main() {
    stack<int> pila;

    pila.push(10);
    pila.push(20);
    pila.push(30);

    // Imprimir la pila original
    cout << "Pila original: ";
    stack<int> tempPila = pila; // Crear una copia temporal para imprimir
    while (!tempPila.empty()) {
        cout << tempPila.top() << " ";
        tempPila.pop();
    }
    cout << endl;

    // Revertir la pila
    reverseStack(pila);

    // Imprimir la pila revertida
    cout << "Pila revertida: ";
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;

    return 0;
}
