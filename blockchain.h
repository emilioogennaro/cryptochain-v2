#pragma once
#include "block.h"

class Blockchain {
    std::vector<Block> chain;
    Blockchain();
    void addBlock(std::string data);
};
