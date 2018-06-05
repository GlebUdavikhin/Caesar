#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class ShifrOperation
{
private:
	char Shift(char w);
	char Shift1(char w);
	int n;
public:
	ShifrOperation(int key);
	string encode(const string s);
	string decode(const string s);
};