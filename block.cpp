#include "block.h"
using namespace std;

Block::Block(int timestamp, string lastHash, string hash, string data) {
    this->timestamp = timestamp;
    this->lastHash = lastHash;
    this->hash = hash;
    this->data = data;
}

Block Block::genesis() {
    return Block(0, "0", "0", "0");
}

Block Block::mine(Block lastBlock, std::string data) { }
