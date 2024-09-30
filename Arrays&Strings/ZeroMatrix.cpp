/*
 * ZeroMatrix.cpp
 *
 *  Created on: Sep 9, 2024
 *      Author: JANGCHA
 */

#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>&matrix)
{
	int m = matrix.size();
	int n = matrix[0].size();
	bool firstRow = false;
	bool firstColumn = false;
	for(int i=0;i<m;i++)
	{
		if(matrix[i][0]==0)
		{
			firstRow = true;
		}
	}
	for(int j = 0;j<n;j++)
	{
		if(matrix[0][j]==0)
		{
			firstColumn = true;
		}
	}

	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(matrix[i][j]==0)
			{
				matrix[i][0]=0;
				matrix[0][j]=0;
			}
		}
	}

	for(int i=1;i<m;i++)
	{
		if(matrix[i][0]==0)
		{
			for(int j=1;j<n;j++)
			{
				matrix[i][j]=0;
			}
		}
	}
	for(int j=1;j<n;j++)
	{
		if(matrix[0][j]==0)
		{
			for(int i=1;i<m;i++)
			{
				matrix[i][j]=0;
			}
		}
	}
	if(firstRow)
	{
		for(int i=0;i<n;i++)
		{
			matrix[0][i]=0;
		}
	}
	if(firstColumn)
	{
		for(int j=0;j<m;j++)
		{
			matrix[j][0]=0;
		}
	}
}



void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
   std::vector<std::vector<int>> matrix = {
       {1, 2, 3},
       {4, 0, 6},
       {7, 8, 9}
   };

   std::cout << "Original Matrix:" << std::endl;
   printMatrix(matrix);

   setZeroes(matrix);

   std::cout << "Matrix after setting zeroes:" << std::endl;
   printMatrix(matrix);

   return 0;
}

