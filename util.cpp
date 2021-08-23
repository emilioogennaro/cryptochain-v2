#include "util.h"
#include <string>

std::string stringToHex(const std::string& input)
{
    static const char hex_digits[] = "0123456789abcdef";

    std::string output;
    output.reserve(input.length() * 2);
    for (unsigned char c : input)
    {
        output.push_back(hex_digits[c >> 4]);
        output.push_back(hex_digits[c & 15]);
    }
    return output;
}

std::string hexToBin(std::string hexdec)
{
    long int i = 0;
    std::string output = "";

    while (hexdec[i]) {

        switch (hexdec[i]) {
        case '0':
            output += "0000";
            break;
        case '1':
            output += "0001";
            break;
        case '2':
            output += "0010";
            break;
        case '3':
            output += "0011";
            break;
        case '4':
            output += "0100";
            break;
        case '5':
            output += "0101";
            break;
        case '6':
            output += "0110";
            break;
        case '7':
            output += "0111";
            break;
        case '8':
            output += "1000";
            break;
        case '9':
            output += "1001";
            break;
        case 'A':
        case 'a':
            output += "1010";
            break;
        case 'B':
        case 'b':
            output += "1011";
            break;
        case 'C':
        case 'c':
            output += "1100";
            break;
        case 'D':
        case 'd':
            output += "1101";
            break;
        case 'E':
        case 'e':
            output += "1110";
            break;
        case 'F':
        case 'f':
            output += "1111";
            break;
        }
        i++;
    }

    return output;
}

std::string hashSHA3_512(const std::string& input) {
    //Initial
    unsigned char* hashResult = new unsigned char[sha3_512_desc.hashsize];
    //Initialize a state variable for the hash
    hash_state md;
    sha3_512_init(&md);
    //Process the text - remember you can call process() multiple times
    sha3_process(&md, (const unsigned char*) input.c_str(), input.size());
    //Finish the hash calculation
    sha3_done(&md, hashResult);
    //Convert hash to string then to hex
    std::string hexhashResult(reinterpret_cast<char*>(hashResult));
    hexhashResult = stringToHex(hexhashResult);
    // Return the result
    return hexhashResult;
}

std::string stringifyBlock(int timestamp, std::string lastHash, std::string data) {
    std::string result = "";
    result += std::to_string(timestamp);
    result += lastHash;
    result += data;

    return result;
}
