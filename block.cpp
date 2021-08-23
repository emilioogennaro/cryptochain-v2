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

Block Block::mine(Block lastBlock, string data) {
    int timestamp = time(NULL);
    string lastHash = lastBlock.hash;
    string hash = hashSHA3_512(stringifyBlock(timestamp, lastHash, data));
    return Block(timestamp, lastHash, hash, data);
}
