#include "parser.h"
#include <sstream>
#include <algorithm>

//helpers for parsing
static std::string trim(std::string str){
    //find first instance that is not a space or tab
    //absorb chars
    //stop before next instance of space or tab
    //absorb it
}
static std::string upper(std::string str){ //converts a string to a string of uppercase
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){
        return std::toupper(c);
    });

    return str;
}