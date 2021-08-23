#pragma once
#include "block.h"
#include "util.h"

class Blockchain {
public:
    std::vector<Block> chain;
    Blockchain();
    void addBlock(std::string data);
};
