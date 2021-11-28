#include "Credential.hpp"

Credential::Credential(std::string user, std::string pass, std::string res) {
    this->user = user;
    this->pass = pass;
    this->res = res;
}

Credential::~Credential() {}

const std::string& Credential::getUser() const {
    return this->user;
}

const std::string& Credential::getPass() const {
    return this->pass;
}

const std::string& Credential::getRes() const {
    return this->res;
}

void Credential::renew(std::string user, std::string pass) {
    this->user = user;
    this->pass = pass;
}

Backup Credential::createBackup() const {
    return Backup(this->user, this->pass, this->res);
}

void Credential::restore(const Backup& backup) {
    this->user = backup.getUser();
    this->pass = backup.getPass();
    this->res = backup.getRes();
}


std::ostream& operator<<(std::ostream& out, const Credential& c) {
    out << "Credential(" << c.getUser();
    out << ", " << c.getPass();
    out << ", " << c.getRes() << ")";

    return out;
}
