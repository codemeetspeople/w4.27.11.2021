#ifndef SINGLETONE_HPP
#define SINGLETONE_HPP

class Singletone {
    public:
        static Singletone* getInstance();
        ~Singletone();

    private:
        static Singletone* instance;
        Singletone();
};

#endif // SINGLETONE_HPP
