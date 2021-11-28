#ifndef BACKUP_HPP
#define BACKUP_HPP

#include <iostream>


class Backup {
    private:
        std::string user;
        std::string pass;
        std::string res;

    public:
        Backup(std::string user, std::string pass, std::string res);
        Backup(const Backup& obj);
        ~Backup();

        const std::string& getUser() const;
        const std::string& getPass() const;
        const std::string& getRes() const;
};

#endif // BACKUP_HPP
