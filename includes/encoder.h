#pragma once
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "parser.h"

//how many bytes a line will make: 0 for a label only line, 2 for an instruction, 1 per byte for DB
int lineSize(const Line& line);

//turns one Line into its bytes, high byte first
std::vector<uint8_t> encodeLine(const Line& line, const std::map<std::string, uint16_t>& labels);