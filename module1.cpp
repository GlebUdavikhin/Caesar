#include <iostream>
#include <cstdlib>
#include "module1.h"
#include <string>
ShifrOperation::ShifrOperation(int key) :n(key) {}
char ShifrOperation::Shift(char w)
{
	char alf[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int i = 0;
	for (i = 0; i < 26; i++)
	{
		if ((w == alf[i])&((i + n) < 26))
		{
			w = alf[i + n];
			i = 26;
		}
		if ((w == alf[i])&((i + n) > 25))
		{
			w = alf[i + n - 26];
			i = 26;
		}
	}
	return w;
}
char ShifrOperation::Shift1(char w)
{
	char alf[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int i = 0;
	for (i = 0; i < 26; i++)
	{
		if ((w == alf[i])&((i - n) >= 0))
		{

			w = alf[i - n];
			i = 26;
		}
		if ((w == alf[i])&((i - n) < 0))
		{
			w = alf[i - n + 26];
			i = 26;
		}
	}
	return w;
}
string ShifrOperation::encode(const string s)
{
	string rez;
	for (int i = 0; i<s.size(); i++)
		rez += Shift(s[i]); 
	return rez;
}
string ShifrOperation::decode(const string s)
{
	string rez;
	for (int i = 0; i<s.size(); i++)
		rez += Shift1(s[i]); 
	return rez;
}