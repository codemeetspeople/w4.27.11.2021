#include <iostream>

class A {
    protected:
        int x;

    public:
        A(int x=10) {
            std::cout << "A(int)" << std::endl;
            this->x = x;
        }
        virtual ~A() {
            std::cout << "~A()" << std::endl;
        }

        int getX() {
            return this->x;
        }

        void setX(int value) {
            this->x = value;
        }

        virtual void hello(const char* name="Jonh") {
            std::cout << "Hello, " << name << '!' << std::endl;
        }
};


class B : public A {
    public:
        B(int x=20) : A(x) {
            std::cout << "B(int)" << std::endl;
        }
        virtual ~B() {
            std::cout << "~B()" << std::endl;
        }

        virtual void hello(const char* name="Jane") {
            std::cout << "Hola, " << name << '!' << std::endl;
        }
};


void sayHello(A* obj) {
    obj->hello();
}


int main() {
    B* b = new B();

    sayHello(b);

    delete(b);

    return 0;
}
