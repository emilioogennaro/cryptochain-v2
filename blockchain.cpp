#include "block.h"
#include "blockchain.h"
#include "util.h"
using namespace std;

Blockchain::Blockchain() {
    this->chain.push_back(Block::genesis());
}

void Blockchain::addBlock(string data) {
    this->chain.push_back(Block::mine(this->chain[this->chain.size()-1], data));
}