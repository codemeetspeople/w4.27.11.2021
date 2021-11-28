#ifndef CREDENTIAL_HPP
#define CREDENTIAL_HPP

#include <iostream>
#include "Backup.hpp"

class Credential {
    private:
        std::string user;
        std::string pass;
        std::string res;

    public:
        Credential(std::string user, std::string pass, std::string res);
        ~Credential();

        const std::string& getUser() const;
        const std::string& getPass() const;
        const std::string& getRes() const;

        void renew(std::string user, std::string pass);

        Backup createBackup() const;
        void restore(const Backup& backup);
};

std::ostream& operator<<(std::ostream& out, const Credential& c);


#endif // CREDENTIAL_HPP
