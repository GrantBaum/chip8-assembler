#pragma once
#include <string>
#include <vector>
#include <cstdint>

//reprensents one line of the source file
struct Line {
    int number = 0;                     
    std::string label;                  //"loop" if the line had "loop:", empty if not
    std::string name;                   //instruction name in uppercase, like "LD"
    std::vector<std::string> operands;  //the things after the name, like "VA" and "0x0F"
};

//what kind of thing an operand is
enum class Kind {
    REGISTER,   //V0 to VF
    NUMBER,     //0x22A or 12
    LABEL,      //loop, end, anything else
    I,          //I
    IMem,       //[I]
    DT,         //delay timer
    ST,         //sound timer
    K,          //wait for key
    F,          //font
    B           //decimal digits
};


Line parseLine(const std::string& text, int number); //turns one raw line of text into a Line
Kind kindOf(const std::string& operand); //looks at one operand and says what kind it is
uint8_t readRegister(const std::string& operand); //turns VA into 10
uint16_t readNumber(const std::string& operand); //turns 0x22A or 12 into a number