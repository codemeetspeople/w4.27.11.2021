#ifndef PAPER_HPP
#define PAPER_HPP

#include <iostream>

class Paper {
    private:
        std::string* content;
        int symbols;

    public:
        Paper(int symbols=512);
        ~Paper();

        const std::string& getContent() const;
        int getSymbols() const;

        void addContent(const std::string& message);
        void show();
};

std::ostream& operator<<(std::ostream& out, const Paper& paper);

#endif // PAPER_HPP
