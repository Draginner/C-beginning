// PointerInPointer.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int k,alpha;
int *p;
p=&k;
int **q;
q = &p;
alpha = k;
**q=4;
cout<<k<<endl;

	return 0;
}

