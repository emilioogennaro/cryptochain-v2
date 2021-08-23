#pragma once
#include <vector>
#include <string>
#include <ctime>
#include "util.h"

class Block {
public:
    int timestamp;
    std::string lastHash;
    std::string hash;
    std::string data;
    Block(int timestamp, std::string lastHash, std::string hash, std::string data);

    static Block genesis();
    static Block mine(Block lastBlock, std::string data);
};
