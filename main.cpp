#include <iostream>
#include "Coda.cpp" 
#include "Pila.cpp" 

int main() {
    // Test della classe Coda
    Coda<int> coda;
    coda.enqueue(10);
    coda.enqueue(20);
    coda.enqueue(30);
    std::cout << "Elemento in testa alla coda: " << coda.front() << std::endl;
    std::cout << "Rimuovo elemento: " << coda.dequeue() << std::endl;
    std::cout << "Elemento in testa alla coda: " << coda.front() << std::endl;
    std::cout << "Dimensione della coda: " << coda.size() << std::endl;

    // Test della classe Pila
    Pila<int> pila;
    pila.push(10);
    pila.push(20);
    pila.push(30);
    std::cout << "Elemento in cima alla pila: " << pila.top() << std::endl;
    std::cout << "Rimuovo elemento: " << pila.pop() << std::endl;
    std::cout << "Elemento in cima alla pila: " << pila.top() << std::endl;
    std::cout << "Dimensione della pila: " << pila.size() << std::endl;

    return 0;
}
