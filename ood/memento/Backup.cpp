#include "Backup.hpp"

Backup::Backup(std::string user, std::string pass, std::string res) {
    this->user = user;
    this->pass = pass;
    this->res = res;
}

Backup::Backup(const Backup& obj) {
    this->user = obj.getUser();
    this->pass = obj.getPass();
    this->res = obj.getRes();
}

Backup::~Backup() {}

const std::string& Backup::getUser() const {
    return this->user;
}

const std::string& Backup::getPass() const {
    return this->pass;
}

const std::string& Backup::getRes() const {
    return this->res;
}
