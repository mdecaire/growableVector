// growableVector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int vecSize, numQs;

	cin >> vecSize;
	cin >> numQs;
	std::vector<std::vector<int>> vec;
	for (int i = 0; i<vecSize; i++)
	{
		int arraySize=0;
		
			cin >> arraySize;
		
		std::vector<int> v;
		for (int j = 0; j<arraySize; j++)
		{
			int vecNum=0;
			 cin >> vecNum;
			 v.push_back(vecNum);
		}
		vec.push_back(v);
	}

	for (int i = 0; i < numQs; i++)
	{
		int init, sec;
		cin >> init; 
		cin >> sec;
		cout << vec[init][sec] << endl;

	}
	return 0;
}