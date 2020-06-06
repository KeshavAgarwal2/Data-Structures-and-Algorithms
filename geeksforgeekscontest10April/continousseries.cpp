// Given an array arr of size n containing only distinct integers, you need to find total times you see a series of consecutive integers of length greater than 1.
// A series of consecutive integers is defined as arr[i], arr[i]+1, arr[i]+2...and so on.

// Input:
// The first line of input contains T denoting the numbers of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains the size of array n. The second line contains the elements of the array.

// Output:
// For each testcase, in a newline, print the total times you see a series of consecutive numbers.

// Constraints:
// 1 <= T <= 100
// 1 <= n <= 103
// 0 <= arri <= 107

// Examples:
// Input:
// 3
// 7
// 5 7 9 10 11 13 14
// 6
// 0 1 2 4 5 7
// 7
// 1 0 2 9 3 8 6
// Output:
// 2
// 2
// 0

// Explanation:
// Testcase1: The array is {5 7 9 10 11 13 14}. Here, 9 10 11 is one series of consecutive integers with length greater than 1. Again, 13 14 is
// another series of consecutive integers with length greater than 1. So, a total of two times we see such a series. Hence the answer is 2.
// You are given N days to build a tower. Each day you are provided with a distinct brick size. For tower construction, you need to folllow below rules.
//=============================================

// 1. The bricks with larger sizes should be kept above.
// 2. The bricks with smaller sizes should be kept below.

// So we mainly need to have the largest brick at the bottom and smallest at the top.

// Input Format: The input line contains T, denoting the number of testcases. Each testcase contains two lines. The first line contains N, number of days. Second line contains size of bricks provided on ith day.

// Output Format: You have to print the sizes of bricks which you can place at ith day in descending order separated by space.

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 106
// 1 <= size of brick <= 105

// Sample Input:
// 2
// 5
// 4 5 1 2 3
// 6
// 7 8 2 9 5 3

// Sample Output:
// Not possible
// 5 4 
// Not possible
// Not possible
// 3 2 1
// Not possible
// Not possible
// Not possible
// 9 8 7 
// 5 
// 3 2

// Explanation:
// Testcase 1:
// On 1st day, you have brick of size 4 but you cannot place that as size of brick 5 is still remaining.
// On 2nd day, you have bricks of size 4, 5 and thus you can place them keeping 5 at the bottom and 4 the top.
// On 3rd and 4th day, you cannot place 1 and 2 brick size as size of brick 3 is not yet encountered.
// On 5th day, you can place all the bricks of sizes 3 2 1 at the top of tower.
//======================================

// You are a package delivery driver for some company X. There are N cities (numbered from 1 to N) that you need to visit to distribute the packages. The roads that connect the cities may be of different lengths and thus it would cost different amounts of gasoline to travel to different cities. Now, you are a money conscious driver and thus you try to visit each city while taking paths that minimize your overall gasoline costs. Also, if you are driving back to a city already visited by you, then your drive back to that city is paid by the company so you don't need include it in your expenditure.
// You need to find the minimum total cost of gasoline such that you visit all the cities.
// Note: It is guaranteed that every city is connected to every other city either directly or indirectly.

// Input:
// The first line of input contains T denoting the number of test cases. T test cases follow. Each test case contains N+1 lines of input. The first line contains number of the cities N. The next N lines contain gas price required to cover distance between each city to every other city. If there is no direct path between two cities then the cost is denoted by -1. 

// Output:
// For each test case, in new line, print the total minimum cost of gasoline.

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 200
// -1 <= gasPrice <= 105

// Examples:
// Input:
// 2
// 3
// 0 5 -1
// 5 0 1
// -1 1 0
// 2
// 0 8
// 8 0
// Output:
// 6
// 8

// Explanation:
// Test case 1: The given matrix can be visualized as following:

// Now, we start from 1 and go to 0 so our total cost is 5 till now. Now, we need to visit 2 too. So, we go back from 0 to 1 with no cost as we are driving back to a visited city. Now from 1 we visit 2 with a cost of 1, so total gas cost to visit all cities is 5+1 = 6.
 
 
#include<iostream>
using namespace std;
int main(int T,int n,int arr)
 {
    int T,n, arr[n]; 
    int count=0,i,n=0;
    cin>>T;
	for(int T=0;T<100;T++)
	{
        cin>>n;
	    for(int n=0;T<1e7;n++)
	    {
        cin>>i;
	    for(int i=0;i<n;i++)
        if(i<n)
	    count++;
	    }
	}
	return count;
	return 0;
}