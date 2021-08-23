#include "blockchain.h"
#include <iostream>
using namespace std;

int main() {
    Blockchain blockchain = Blockchain();
    blockchain.addBlock("test");

    cout << blockchain.chain[0].timestamp << endl;
    cout << blockchain.chain[0].lastHash<< endl;
    cout << blockchain.chain[0].hash << endl;
    cout << blockchain.chain[0].data << endl;

    cout << endl << endl;

    cout << blockchain.chain[1].timestamp << endl;
    cout << blockchain.chain[1].lastHash<< endl;
    cout << blockchain.chain[1].hash << endl;
    cout << blockchain.chain[1].data << endl;
}