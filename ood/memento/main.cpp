#include <iostream>
#include "Credential.hpp"
#include "Backup.hpp"


int main() {
    Credential c = Credential("caiman", "qwerty", "devclub.com");

    std::cout << c << std::endl;

    Backup bkp = c.createBackup();
    c.renew("admin", "123456789");

    std::cout << c << std::endl;

    c.restore(bkp);

    std::cout << c << std::endl;

    return 0;
}
