#include <iostream>
//implemento senza utilizzare listapuntatori.cpp
template <typename T>
class Coda {
private:
    static const int MAX_SIZE = 100;
    T arr[MAX_SIZE];
    int frontIndex; 
    int endIndex; 
    int currentSize;

public:
    Coda() : frontIndex(0), endIndex(-1), currentSize(0) {}

    void enqueue(T elem) {
        if (currentSize == MAX_SIZE) {
            std::cout << "Falso" << std::endl;
        } else {
            endIndex = (endIndex + 1) % MAX_SIZE; 
            arr[endIndex] = elem; 
            currentSize++; 
        }
    }

    T dequeue() {
        if (isEmpty()) {
            std::cout << "Falso" << std::endl;
            return T(); 
        } else {
            T frontElement = arr[frontIndex]; 
            frontIndex = (frontIndex + 1) % MAX_SIZE;
            currentSize--; 
            return frontElement;
        }
    }

    T front() const {
        if (isEmpty()) {
            std::cout << "Falso" << std::endl;
            return T(); 
        } else {
            return arr[frontIndex]; 
        }
    }

    bool isEmpty() const {
        return currentSize == 0; 
    }

    int size() const {
        return currentSize; 
    }
};
