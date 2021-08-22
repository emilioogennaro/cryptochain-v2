#pragma once
#include <vector>
#include <string>

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
