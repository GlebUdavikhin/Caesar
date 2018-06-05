#include <iostream>
#include <cstdlib>
#include "module1.h"
#include <string>
using namespace std;
int main()
{
	int   n;
	string w;
	cout << "vvedite slovo" << endl;
	cin >> w;
	cout << "vvedite kluch" << endl;
	cin >> n;
	ShifrOperation x(n);
	string zash= x.encode(w);
	string desh = x.decode(zash);
	cout <<"encode: "<< zash << endl <<"decode: "<< desh << endl;
	return 0;
}