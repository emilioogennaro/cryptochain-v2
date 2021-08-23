#pragma once
#include "tomcrypt.h"
#include <string>

class Util {
    std::string stringToHex(const std::string& input);

    std::string hexToBin(std::string hexdec);

    std::string hashSHA3_512(const std::string& input);
};
