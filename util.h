#pragma once
#include "tomcrypt.h"
#include <string>

std::string stringToHex(const std::string& input);

std::string hexToBin(std::string hexdec);

std::string hashSHA3_512(const std::string& input);

std::string stringifyBlock(int timestamp, std::string lastHash, std::string data);