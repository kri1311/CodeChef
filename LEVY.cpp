
/*
Author : Krishna
Problem : Levy Conjecture
Contest : Codechef April Challenge 2013 
Solution Link : https://www.codechef.com/viewsolution/1996503
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <vector>
#include <queue>
#include <deque>
#include <ctype.h>
#include<assert.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MAX 100
//#include<conio.h>



#include <iostream>
#include <cstdlib>

int main(){

int arr[10000]={0, 0, 0, 0, 0, 1, 1, 1, 2, 0, 2, 1, 2, 0, 2, 1, 4, 0, 2, 0, 3, 0, 3, 1, 3, 0, 4, 1, 4, 0, 2, 0, 5, 0, 3, 1, 4, 0, 4, 1, 5, 0, 4, 0, 6, 0, 4, 1, 4, 0, 7, 0, 5, 0, 3, 0, 7, 0, 3, 1, 3, 0, 7, 1, 7, 0, 5, 0, 7, 0, 4, 0, 4, 0, 8, 1, 7, 0, 5, 0, 8, 0, 4, 1, 7, 0, 8, 1, 7, 0, 4, 0, 11, 0, 5, 1, 6, 0, 9, 0, 6, 0, 5, 0, 12, 0, 6, 1, 6, 0, 10, 0, 8, 0, 6, 0, 11, 0, 7, 1, 5, 0, 11, 1, 8, 0, 6, 0, 10, 0, 6, 0, 6, 0, 13, 1, 8, 0, 5, 0, 13, 0, 6, 1, 9, 0, 12, 1, 8, 0, 6, 0, 14, 0, 8, 0, 6, 0, 11, 1, 10, 0, 9, 0, 16, 0, 5, 1, 8, 0, 13, 0, 9, 0, 9, 0, 14, 0, 7, 1, 6, 0, 14, 0, 12, 0, 8, 0, 16, 0, 6, 0, 7, 0, 16, 1, 10, 0, 7, 0, 15, 0, 9, 1, 11, 0, 14, 1, 10, 0, 8, 0, 16, 0, 9, 1, 10, 0, 16, 1, 11, 0, 8, 0, 21, 0, 6, 1, 9, 0, 18, 0, 12, 0, 10, 0, 19, 0, 10, 0, 7, 0, 15, 0, 15, 0, 9, 0, 17, 0, 7, 0, 9, 0, 19, 1, 11, 0, 9, 0, 17, 0, 8, 1, 12, 0, 18, 0, 10, 0, 8, 0, 22, 0, 12, 1, 11, 0, 16, 1, 12, 0, 9, 0, 26, 0, 11, 0, 9, 0, 18, 0, 10, 0, 11, 0, 21, 0, 9, 1, 10, 0, 18, 1, 14, 0, 12, 0, 18, 0, 8, 0, 10, 0, 27, 1, 14, 0, 12, 0, 20, 0, 10, 0, 13, 0, 17, 1, 12, 0, 12, 0, 20, 0, 11, 1, 12, 0, 18, 0, 13, 0, 12, 0, 26, 0, 7, 1, 9, 0, 22, 0, 12, 0, 13, 0, 26, 0, 12, 1, 9, 0, 23, 1, 16, 0, 11, 0, 22, 0, 13, 0, 13, 0, 26, 0, 14, 0, 10, 0, 19, 0, 10, 1, 18, 0, 22, 1, 15, 0, 12, 0, 25, 0, 13, 1, 12, 0, 26, 1, 15, 0, 13, 0, 31, 0, 13, 0, 11, 0, 24, 0, 14, 0, 16, 0, 22, 0, 12, 0, 9, 0, 21, 1, 18, 0, 15, 0, 25, 0, 12, 0, 12, 0, 30, 0, 12, 0, 12, 0, 25, 0, 14, 0, 16, 0, 22, 1, 12, 0, 13, 0, 27, 0, 19, 1, 14, 0, 26, 1, 13, 0, 13, 0, 32, 0, 13, 1, 17, 0, 28, 0, 15, 0, 17, 0, 26, 0, 11, 1, 13, 0, 29, 1, 18, 0, 14, 0, 27, 0, 16, 0, 16, 0, 35, 0, 17, 0, 12, 0, 27, 0, 12, 1, 21, 0, 25, 0, 15, 0, 13, 0, 29, 0, 16, 1, 15, 0, 25, 0, 14, 0, 11, 0, 43, 0, 13, 1, 16, 0, 27, 0, 16, 0, 16, 0, 28, 0, 16, 1, 13, 0, 27, 1, 22, 0, 14, 0, 27, 0, 15, 0, 17, 0, 33, 1, 18, 0, 13, 0, 33, 0, 13, 1, 19, 0, 31, 1, 16, 0, 15, 0, 31, 0, 21, 0, 16, 0, 27, 0, 20, 0, 17, 0, 42, 0, 12, 1, 16, 0, 29, 0, 16, 0, 21, 0, 30, 0, 15, 0, 11, 0, 29, 0, 23, 0, 14, 0, 35, 0, 15, 0, 17, 0, 35, 1, 16, 0, 14, 0, 31, 0, 19, 1, 22, 0, 35, 1, 19, 0, 14, 0, 33, 0, 19, 1, 21, 0, 30, 0, 19, 0, 15, 0, 42, 0, 15, 0, 16, 0, 35, 0, 19, 0, 21, 0, 33, 0, 16, 0, 14, 0, 33, 1, 29, 0, 17, 0, 31, 0, 14, 0, 18, 0, 37, 1, 18, 0, 21, 0, 34, 0, 16, 0, 18, 0, 30, 0, 18, 0, 13, 0, 43, 0, 20, 1, 18, 0, 31, 1, 18, 0, 18, 0, 43, 0, 17, 1, 18, 0, 31, 0, 20, 0, 26, 0, 33, 0, 17, 1, 20, 0, 35, 0, 23, 0, 16, 0, 32, 0, 17, 0, 18, 0, 48, 1, 22, 0, 18, 0, 35, 0, 17, 0, 22, 0, 32, 1, 21, 0, 15, 0, 37, 0, 19, 0, 18, 0, 34, 1, 21, 0, 21, 0, 52, 0, 18, 1, 16, 0, 34, 0, 20, 0, 22, 0, 43, 0, 20, 1, 20, 0, 36, 0, 23, 0, 18, 0, 32, 0, 20, 0, 20, 0, 45, 1, 21, 0, 18, 0, 36, 0, 19, 1, 27, 0, 36, 0, 18, 0, 19, 0, 37, 0, 24, 0, 18, 0, 43, 1, 21, 0, 19, 0, 51, 0, 16, 0, 15, 0, 35, 0, 27, 0, 25, 0, 36, 0, 16, 1, 19, 0, 34, 1, 30, 0, 25, 0, 39, 0, 17, 0, 17, 0, 49, 0, 20, 0, 18, 0, 42, 0, 18, 1, 26, 0, 39, 1, 24, 0, 21, 0, 38, 0, 27, 0, 20, 0, 37, 1, 19, 0, 21, 0, 51, 0, 19, 1, 22, 0, 42, 0, 22, 0, 25, 0, 44, 0, 20, 1, 23, 0, 44, 0, 28, 0, 21, 0, 37, 0, 20, 0, 19, 0, 47, 1, 27, 0, 20, 0, 42, 0, 17, 1, 29, 0, 35, 1, 24, 0, 23, 0, 44, 0, 28, 1, 19, 0, 42, 0, 24, 0, 22, 0, 65, 0, 19, 0, 19, 0, 39, 0, 22, 0, 26, 0, 44, 0, 24, 1, 20, 0, 40, 0, 29, 0, 24, 0, 44, 0, 22, 0, 23, 0, 54, 1, 23, 0, 22, 0, 44, 0, 15, 1, 27, 0, 48, 0, 26, 0, 20, 0, 43, 0, 25, 0, 21, 0, 39, 1, 34, 0, 23, 0, 55, 0, 15, 1, 22, 0, 40, 0, 22, 0, 34, 0, 43, 0, 21, 1, 21, 0, 49, 0, 33, 0, 23, 0, 51, 0, 21, 0, 20, 0, 56, 0, 22, 0, 19, 0, 46, 0, 25, 1, 33, 0, 40, 1, 26, 0, 20, 0, 49, 0, 28, 0, 26, 0, 45, 0, 24, 0, 23, 0, 56, 0, 20, 0, 18, 0, 51, 0, 27, 0, 30, 0, 45, 0, 24, 0, 18, 0, 43, 1, 38, 0, 23, 0, 45, 0, 21, 0, 20, 0, 53, 1, 25, 0, 26, 0, 44, 0, 22, 0, 32, 0, 44, 0, 27, 0, 21, 0, 54, 0, 30, 1, 23, 0, 43, 0, 24, 0, 26, 0, 57, 0, 25, 1, 23, 0, 48, 0, 29, 0, 31, 0, 46, 0, 24, 1, 25, 0, 44, 1, 32, 0, 23, 0, 46, 0, 23, 0, 20, 0, 77, 1, 29, 0, 23, 0, 43, 0, 22, 0, 29, 0, 44, 0, 28, 0, 20, 0, 48, 0, 28, 1, 27, 0, 44, 0, 26, 0, 28, 0, 62, 0, 22, 1, 23, 0, 50, 0, 26, 0, 27, 0, 60, 0, 27, 1, 21, 0, 44, 1, 34, 0, 25, 0, 53, 0, 30, 0, 21, 0, 60, 1, 28, 0, 25, 0, 50, 0, 23, 0, 34, 0, 51, 1, 25, 0, 25, 0, 46, 0, 37, 1, 27, 0, 56, 1, 29, 0, 31, 0, 65, 0, 24, 0, 23, 0, 47, 0, 28, 0, 34, 0, 46, 0, 23, 0, 25, 0, 44, 1, 38, 0, 31, 0, 50, 0, 27, 0, 25, 0, 68, 0, 23, 0, 22, 0, 57, 0, 23, 1, 32, 0, 57, 1, 27, 0, 22, 0, 51, 0, 38, 1, 28, 0, 50, 0, 26, 0, 28, 0, 69, 0, 26, 1, 34, 0, 58, 0, 31, 0, 34, 0, 51, 0, 26, 1, 25, 0, 65, 1, 38, 0, 30, 0, 47, 0, 30, 0, 28, 0, 66, 0, 33, 0, 27, 0, 52, 0, 25, 0, 33, 0, 45, 1, 32, 0, 27, 0, 57, 0, 33, 1, 26, 0, 51, 0, 25, 0, 28, 0, 87, 0, 26, 1, 24, 0, 51, 0, 27, 0, 35, 0, 58, 0, 32, 0, 25, 0, 53, 1, 37, 0, 29, 0, 53, 0, 30, 0, 31, 0, 68, 0, 30, 0, 27, 0, 49, 0, 23, 1, 33, 0, 59, 0, 28, 0, 26, 0, 52, 0, 33, 0, 24, 0, 57, 1, 32, 0, 28, 0, 70, 0, 24, 0, 27, 0, 52, 0, 29, 0, 42, 0, 53, 0, 26, 1, 27, 0, 59, 0, 40, 0, 24, 0, 65, 0, 23, 0, 29, 0, 69, 1, 31, 0, 25, 0, 56, 0, 34, 0, 32, 0, 54, 1, 30, 0, 27, 0, 52, 0, 35, 0, 32, 0, 55, 1, 29, 0, 29, 0, 81, 0, 22, 1, 28, 0, 63, 0, 31, 0, 43, 0, 58, 0, 29, 0, 28, 0, 55, 1, 47, 0, 32, 0, 56, 0, 29, 0, 34, 0, 67, 1, 33, 0, 35, 0, 61, 0, 25, 1, 35, 0, 57, 0, 33, 0, 25, 0, 66, 0, 31, 0, 30, 0, 55, 1, 27, 0, 29, 0, 78, 0, 34, 1, 27, 0, 59, 0, 33, 0, 39, 0, 59, 0, 29, 0, 34, 0, 55, 0, 38, 0, 30, 0, 58, 0, 27, 0, 36, 0, 84, 1, 34, 0, 28, 0, 63, 0, 28, 0, 44, 0, 55, 0, 37, 0, 28, 0, 61, 0, 38, 1, 30, 0, 56, 0, 30, 0, 32, 0, 81, 0, 26, 0, 27, 0, 54, 0, 32, 0, 39, 0, 77, 0, 25, 1, 29, 0, 55, 1, 45, 0, 30, 0, 60, 0, 38, 0, 34, 0, 77, 0, 30, 0, 32, 0, 60, 0, 27, 1, 50, 0, 57, 1, 35, 0, 31, 0, 67, 0, 36, 1, 31, 0, 67, 1, 36, 0, 30, 0, 79, 0, 27, 0, 29, 0, 54, 0, 39, 0, 42, 0, 67, 0, 27, 1, 34, 0, 67, 0, 42, 0, 33, 0, 61, 0, 31, 0, 30, 0, 78, 0, 30, 0, 28, 0, 73, 0, 31, 0, 46, 0, 55, 1, 30, 0, 29, 0, 62, 0, 46, 1, 32, 0, 59, 1, 31, 0, 32, 0, 85, 0, 32, 1, 41, 0, 58, 0, 30, 0, 39, 0, 63, 0, 30, 0, 31, 0, 69, 0, 45, 0, 37, 0, 67, 0, 34, 0, 29, 0, 81, 1, 43, 0, 35, 0, 62, 0, 29, 1, 42, 0, 65, 1, 36, 0, 40, 0, 62, 0, 40, 1, 31, 0, 65, 0, 36, 0, 28, 0, 101, 0, 35, 0, 31, 0, 58, 0, 39, 0, 40, 0, 65, 0, 32, 0, 30, 0, 66, 0, 46, 0, 36, 0, 58, 0, 31, 0, 35, 0, 88, 1, 38, 0, 30, 0, 65, 0, 30, 1, 41, 0, 73, 0, 36, 0, 28, 0, 72, 0, 44, 0, 34, 0, 55, 1, 40, 0, 32, 0, 85, 0, 27, 0, 33, 0, 63, 0, 34, 0, 48, 0, 65, 0, 32, 1, 33, 0, 64, 0, 43, 0, 29, 0, 74, 0, 34, 0, 30, 0, 79, 1, 36, 0, 29, 0, 76, 0, 35, 1, 49, 0, 68, 0, 35, 0, 31, 0, 66, 0, 42, 1, 37, 0, 63, 0, 37, 0, 34, 0, 85, 0, 32, 1, 33, 0, 83, 0, 33, 0, 39, 0, 66, 0, 36, 0, 35, 0, 61, 0, 59, 0, 36, 0, 65, 0, 31, 0, 33, 0, 81, 1, 37, 0, 37, 0, 66, 0, 33, 1, 43, 0, 77, 0, 34, 0, 27, 0, 83, 0, 47, 1, 33, 0, 63, 0, 38, 0, 33, 0, 86, 0, 39, 1, 35, 0, 68, 0, 37, 0, 41, 0, 64, 0, 31, 0, 39, 0, 61, 1, 47, 0, 33, 0, 75, 0, 35, 0, 32, 0, 104, 1, 37, 0, 30, 0, 71, 0, 38, 0, 42, 0, 68, 0, 44, 0, 32, 0, 77, 0, 45, 0, 33, 0, 58, 1, 39, 0, 46, 0, 90, 0, 31, 1, 33, 0, 65, 0, 41, 0, 48, 0, 79, 0, 33, 1, 37, 0, 62, 1, 50, 0, 34, 0, 68, 0, 44, 0, 32, 0, 89, 0, 42, 0, 34, 0, 71, 0, 34, 1, 55, 0, 71, 1, 33, 0, 32, 0, 78, 0, 44, 0, 33, 0, 86, 1, 37, 0, 33, 0, 96, 0, 35, 0, 31, 0, 75, 0, 51, 0, 46, 0, 69, 0, 34, 1, 44, 0, 63, 1, 49, 0, 45, 0, 74, 0, 35, 0, 37, 0, 94, 0, 35, 0, 35, 0, 88, 0, 36, 1, 52, 0, 65, 1, 37, 0, 32, 0, 73, 0, 57, 0, 35, 0, 74, 1, 38, 0, 37, 0, 115, 0, 37, 0, 43, 0, 70, 0, 33, 0, 47, 0, 71, 0, 38, 0, 34, 0, 78, 0, 51, 0, 44, 0, 74, 0, 38, 0, 40, 0, 94, 1, 42, 0, 36, 0, 69, 0, 33, 1, 53, 0, 72, 1, 42, 0, 40, 0, 77, 0, 45, 1, 39, 0, 70, 0, 36, 0, 33, 0, 114, 0, 35, 1, 38, 0, 79, 0, 42, 0, 44, 0, 74, 0, 42, 1, 35, 0, 82, 0, 52, 0, 41, 0, 75, 0, 40, 0, 49, 0, 89, 1, 41, 0, 33, 0, 75, 0, 34, 0, 46, 0, 89, 1, 45, 0, 34, 0, 72, 0, 52, 0, 44, 0, 70, 1, 51, 0, 38, 0, 98, 0, 32, 0, 34, 0, 71, 0, 37, 0, 61, 0, 86, 0, 39, 0, 35, 0, 69, 0, 48, 0, 40, 0, 86, 0, 40, 0, 42, 0, 95, 0, 37, 0, 44, 0, 83, 0, 41, 1, 49, 0, 74, 1, 38, 0, 35, 0, 79, 0, 51, 0, 43, 0, 75, 0, 41, 0, 38, 0, 100, 0, 40, 1, 39, 0, 87, 0, 42, 0, 49, 0, 79, 0, 38, 0, 35, 0, 79, 1, 61, 0, 41, 0, 76, 0, 35, 0, 41, 0, 97, 0, 39, 0, 45, 0, 78, 0, 41, 1, 55, 0, 76, 0, 43, 0, 40, 0, 92, 0, 48, 1, 39, 0, 75, 0, 40, 0, 38, 0, 102, 0, 49, 1, 34, 0, 75, 0, 42, 0, 49, 0, 81, 0, 41, 0, 42, 0, 75, 1, 62, 0, 37, 0, 86, 0, 37, 0, 44, 0, 128, 0, 39, 0, 38, 0, 73, 0, 38, 0, 48, 0, 76, 1, 48, 0, 49, 0, 83, 0, 48, 1, 41, 0, 77, 0, 37, 0, 44, 0, 101, 0, 41, 1, 40, 0, 85, 0, 44, 0, 52, 0, 99, 0, 35, 1, 40, 0, 77, 1, 59, 0, 40, 0, 81, 0, 43, 0, 41, 0, 114, 1, 45, 0, 42, 0, 80, 0, 42, 0, 61, 0, 81, 0, 43, 0, 40, 0, 80, 0, 52, 0, 41, 0, 98, 1, 44, 0, 39, 0, 106, 0, 38, 0, 39, 0, 74, 0, 46, 0, 53, 0, 77, 0, 41, 1, 43, 0, 77, 0, 51, 0, 50, 0, 76, 0, 42, 0, 42, 0, 110, 0, 41, 0, 39, 0, 105, 0, 34, 0, 49, 0, 74, 0, 39, 0, 38, 0, 81, 0, 58, 1, 40, 0, 76, 1, 47, 0, 42, 0, 114, 0, 42, 1, 48, 0, 79, 0, 41, 0, 51, 0, 75, 0, 39, 1, 41, 0, 96, 1, 66, 0, 42, 0, 83, 0, 38, 0, 42, 0, 103, 1, 51, 0, 43, 0, 86, 0, 40, 1, 56, 0, 86, 1, 45, 0, 45, 0, 92, 0, 57, 1, 37, 0, 86, 0, 35, 0, 39, 0, 133, 0, 41, 0, 41, 0, 77, 0, 44, 0, 60, 0, 82, 0, 54, 1, 42, 0, 87, 1, 59, 0, 43, 0, 77, 0, 46, 0, 52, 0, 102, 1, 44, 0, 40, 0, 78, 0, 40, 0, 62, 0, 99, 0, 49, 0, 39, 0, 94, 0, 51, 0, 43, 0, 81, 0, 53, 0, 41, 0, 107, 0, 35, 0, 42, 0, 92, 0, 43, 0, 72, 0, 90, 0, 43, 0, 45, 0, 87, 0, 54, 0, 41, 0, 98, 0, 40, 0, 43, 0, 103, 0, 55, 0, 42, 0, 82, 0, 46, 1, 60, 0, 79, 0, 45, 0, 37, 0, 83, 0, 57, 1, 53, 0, 90, 0, 50, 0, 44, 0, 120, 0, 41, 1, 42, 0, 101, 0, 46, 0, 61, 0, 87, 0, 46, 0, 43, 0, 80, 1, 71, 0, 45, 0, 90, 0, 44, 0, 43, 0, 111, 0, 45, 0, 46, 0, 88, 0, 49, 0, 51, 0, 81, 0, 43, 0, 43, 0, 105, 0, 62, 0, 39, 0, 79, 1, 46, 0, 44, 0, 131, 0, 45, 0, 43, 0, 89, 0, 50, 0, 58, 0, 77, 0, 40, 1, 54, 0, 84, 0, 58, 0, 47, 0, 93, 0, 46, 0, 41, 0, 130, 0, 45, 0, 46, 0, 81, 0, 39, 0, 53, 0, 94, 1, 61, 0, 44, 0, 86, 0, 52, 1, 44, 0, 87, 1, 44, 0, 52, 0, 117, 0, 41, 1, 43, 0, 102, 0, 50, 0, 57, 0, 102, 0, 40, 1, 41, 0, 88, 0, 59, 0, 43, 0, 84, 0, 56, 0, 42, 0, 109, 1, 51, 0, 49, 0, 88, 0, 41, 1, 66, 0, 96, 1, 50, 0, 45, 0, 96, 0, 60, 0, 39, 0, 106, 1, 48, 0, 50, 0, 126, 0, 44, 0, 43, 0, 89, 0, 55, 0, 58, 0, 98, 0, 41, 0, 45, 0, 83, 1, 66, 0, 60, 0, 93, 0, 48, 0, 45, 0, 113, 0, 40, 0, 47, 0, 105, 0, 42, 1, 60, 0, 88, 1, 45, 0, 43, 0, 90, 0, 74, 1, 48, 0, 91, 1, 49, 0, 49, 0, 121, 0, 40, 1, 52, 0, 91, 0, 47, 0, 61, 0, 92, 0, 43, 1, 48, 0, 125, 0, 65, 0, 48, 0, 95, 0, 46, 0, 48, 0, 120, 0, 58, 0, 45, 0, 93, 0, 41, 1, 66, 0, 88, 0, 51, 0, 51, 0, 91, 0, 55, 0, 46, 0, 93, 0, 43, 0, 48, 0, 146, 0, 45, 1, 43, 0, 86, 0, 51, 0, 64, 0, 91, 0, 64, 0, 44, 0, 86, 1, 66, 0, 47, 0, 98, 0, 51, 0, 57, 0, 122, 0, 49, 0, 46, 0, 97, 0, 39, 0, 64, 0, 101, 1, 51, 0, 49, 0, 98, 0, 60, 0, 48, 0, 88, 1, 53, 0, 49, 0, 124, 0, 42, 1, 45, 0, 96, 0, 52, 0, 70, 0, 96, 0, 42, 1, 47, 0, 89, 0, 61, 0, 46, 0, 108, 0, 47, 0, 49, 0, 136, 1, 46, 0, 44, 0, 91, 0, 56, 1, 63, 0, 91, 0, 51, 0, 52, 0, 90, 0, 59, 0, 58, 0, 98, 1, 49, 0, 48, 0, 122, 0, 41, 1, 46, 0, 110, 0, 54, 0, 64, 0, 97, 0, 57, 0, 42, 0, 90, 0, 80, 0, 46, 0, 93, 0, 49, 0, 45, 0, 123, 1, 50, 0, 54, 0, 105, 0, 50, 1, 60, 0, 89, 0, 50, 0, 52, 0, 121, 0, 62, 1, 51, 0, 97, 1, 49, 0, 52, 0, 132, 0, 55, 1, 47, 0, 100, 0, 51, 0, 62, 0, 99, 0, 49, 1, 59, 0, 105, 1, 71, 0, 48, 0, 99, 0, 48, 0, 46, 0, 155, 1, 49, 0, 53, 0, 92, 0, 52, 0, 62, 0, 104, 0, 64, 0, 45, 0, 98, 0, 62, 1, 53, 0, 103, 0, 48, 0, 55, 0, 126, 0, 48, 0, 57, 0, 90, 0, 50, 0, 58, 0, 114, 0, 51, 0, 48, 0, 96, 0, 63, 0, 46, 0, 92, 0, 64, 0, 44, 0, 146, 1, 52, 0, 47, 0, 95, 0, 54, 0, 81, 0, 94, 1, 50, 0, 41, 0, 112, 0, 66, 1, 56, 0, 109, 1, 56, 0, 49, 0, 127, 0, 49, 0, 49, 0, 92, 0, 67, 0, 73, 0, 101, 0, 42, 0, 54, 0, 104, 0, 68, 0, 63, 0, 93, 0, 48, 0, 43, 0, 128, 0, 55, 0, 42, 0, 123, 0, 52, 0, 64, 0, 95, 1, 52, 0, 48, 0, 113, 0, 74, 1, 52, 0, 103, 1, 49, 0, 50, 0, 128, 0, 47, 0, 56, 0, 97, 0, 49, 0, 66, 0, 111, 0, 59, 1, 55, 0, 111, 0, 72, 0, 54, 0, 99, 0, 50, 0, 46, 0, 128, 0, 60, 0, 47, 0, 101, 0, 48, 1, 72, 0, 94, 1, 50, 0, 62, 0, 96, 0, 71, 0, 47, 0, 91, 0, 44, 0, 48, 0, 169, 0, 46, 1, 50, 0, 108, 0, 59, 0, 63, 0, 111, 0, 61, 0, 52, 0, 101, 1, 72, 0, 55, 0, 99, 0, 47, 0, 59, 0, 131, 1, 59, 0, 47, 0, 99, 0, 50, 0, 71, 0, 117, 1, 58, 0, 51, 0, 100, 0, 70, 0, 49, 0, 105, 1, 60, 0, 57, 0, 140, 0, 48, 0, 51, 0, 111, 0, 51, 0, 78, 0, 105, 0, 48, 0, 50, 0, 93, 0, 65, 0, 52, 0, 133, 0, 56, 0, 66, 0, 126, 1, 50, 0, 49, 0, 103, 0, 58, 0, 73, 0, 109, 1, 53, 0, 53, 0, 99, 0, 78, 1, 68, 0, 98, 1, 51, 0, 52, 0, 141, 0, 54, 0, 54, 0, 130, 0, 55, 0, 67, 0, 114, 0, 50, 0, 53, 0, 98, 1, 81, 0, 59, 0, 101, 0, 52, 0, 53, 0, 130, 0, 52, 0, 70, 0, 113, 0, 53, 1, 75, 0, 115, 0, 54, 0, 48, 0, 123, 0, 68, 0, 56, 0, 97, 0, 60, 0, 52, 0, 134, 0, 62, 1, 50, 0, 102, 0, 63, 0, 69, 0, 106, 0, 52, 0, 63, 0, 121, 1, 75, 0, 54, 0, 104, 0, 53, 0, 52, 0, 159, 0, 54, 0, 55, 0, 107, 0, 56, 0, 79, 0, 95, 0, 68, 0, 50, 0, 106, 0, 60, 1, 52, 0, 100, 0, 51, 0, 66, 0, 160, 0, 58, 0, 48, 0, 98, 0, 50, 0, 67, 0, 123, 0, 47, 0, 48, 0, 106, 1, 74, 0, 49, 0, 118, 0, 66, 0, 56, 0, 138, 1, 56, 0, 57, 0, 100, 0, 50, 1, 85, 0, 104, 1, 57, 0, 58, 0, 113, 0, 75, 1, 61, 0, 125, 1, 50, 0, 54, 0, 139, 0, 51, 0, 50, 0, 102, 0, 72, 0, 73, 0, 105, 0, 48, 1, 58, 0, 112, 0, 73, 0, 62, 0, 107, 0, 54, 0, 58, 0, 154, 0, 53, 0, 50, 0, 121, 0, 52, 1, 70, 0, 105, 0, 56, 0, 53, 0, 112, 0, 83, 1, 64, 0, 112, 0, 53, 0, 45, 0, 146, 0, 52, 1, 59, 0, 112, 0, 60, 0, 78, 0, 106, 0, 64, 0, 55, 0, 127, 0, 73, 0, 55, 0, 105, 0, 57, 0, 54, 0, 137, 0, 74, 0, 58, 0, 128, 0, 45, 1, 65, 0, 103, 1, 57, 0, 62, 0, 112, 0, 76, 0, 55, 0, 105, 0, 53, 0, 57, 0, 180, 0, 59, 0, 53, 0, 104, 0, 61, 0, 73, 0, 108, 0, 59, 1, 52, 0, 111, 1, 83, 0, 55, 0, 101, 0, 55, 0, 70, 0, 150, 0, 54, 0, 53, 0, 107, 0, 55, 0, 78, 0, 146, 0, 58, 0, 47, 0, 125, 0, 69, 0, 54, 0, 115, 0, 61, 0, 54, 0, 144, 0, 46, 1, 59, 0, 108, 0, 64, 0, 82, 0, 111, 0, 55, 1, 56, 0, 103, 0, 79, 0, 49, 0, 130, 0, 65, 0, 59, 0, 137, 1, 56, 0, 56, 0, 107, 0, 62, 0, 65, 0, 108, 1, 59, 0, 53, 0, 121, 0, 79, 1, 65, 0, 115, 1, 57, 0, 61, 0, 151, 0, 54, 1, 56, 0, 128, 0, 61, 0, 81, 0, 123, 0, 56, 0, 55, 0, 103, 1, 93, 0, 53, 0, 127, 0, 56, 0, 56, 0, 140, 1, 66, 0, 66, 0, 118, 0, 58, 0, 73, 0, 115, 0, 61, 0, 53, 0, 137, 0, 73, 1, 62, 0, 120, 1, 64, 0, 62, 0, 145, 0, 64, 0, 62, 0, 115, 0, 58, 0, 73, 0, 117, 0, 54, 1, 82, 0, 111, 0, 84, 0, 60, 0, 114, 0, 57, 0, 54, 0, 188, 0, 61, 0, 54, 0, 111, 0, 58, 0, 75, 0, 108, 1, 68, 0, 54, 0, 114, 0, 68, 0, 60, 0, 102, 0, 58, 0, 70, 0, 166, 0, 51, 1, 56, 0, 114, 0, 61, 0, 74, 0, 136, 0, 54, 1, 58, 0, 111, 0, 74, 0, 68, 0, 111, 0, 72, 0, 57, 0, 144, 0, 60, 0, 58, 0, 115, 0, 58, 1, 97, 0, 115, 1, 67, 0, 59, 0, 129, 0, 71, 1, 56, 0, 136, 1, 62, 0, 59, 0, 160, 0, 59, 0, 53, 0, 121, 0, 77, 0, 74, 0, 115, 0, 64, 1, 59, 0, 109, 0, 81, 0, 70, 0, 126, 0, 60, 0, 64, 0, 151, 0, 59, 0, 55, 0, 135, 0, 59, 1, 83, 0, 109, 1, 58, 0, 54, 0, 129, 0, 102, 0, 62, 0, 111, 0, 57, 0, 53, 0, 148, 0, 60, 0, 65, 0, 126, 0, 60, 0, 78, 0, 134, 0, 57, 1, 51, 0, 139, 1, 80, 0, 62, 0, 114, 0, 60, 0, 54, 0, 154, 1, 81, 0, 69, 0, 118, 0, 48, 1, 80, 0, 113, 1, 60, 0, 65, 0, 119, 0, 73, 0, 55, 0, 120, 0, 73, 0, 64, 0, 194, 0, 55, 1, 54, 0, 118, 0, 63, 0, 78, 0, 119, 0, 73, 0, 56, 0, 124, 1, 85, 0, 63, 0, 127, 0, 61, 0, 68, 0, 163, 0, 59, 0, 59, 0, 119, 0, 62, 0, 85, 0, 137, 0, 62, 0, 63, 0, 117, 0, 82, 0, 54, 0, 112, 1, 69, 0, 62, 0, 162, 0, 59, 0, 58, 0, 127, 0, 59, 0, 93, 0, 120, 0, 58, 0, 56, 0, 112, 0, 78, 0, 58, 0, 158, 0, 58, 0, 59, 0, 149, 0, 61, 0, 58, 0, 112, 0, 70, 0, 83, 0, 122, 1, 63, 0, 65, 0, 121, 0, 72, 1, 76, 0, 121, 0, 57, 0, 63, 0, 155, 0, 57, 1, 63, 0, 134, 0, 77, 0, 75, 0, 130, 0, 61, 0, 56, 0, 117, 1, 94, 0, 62, 0, 116, 0, 59, 0, 61, 0, 178, 0, 64, 0, 79, 0, 118, 0, 56, 0, 83, 0, 118, 0, 67, 0, 61, 0, 142, 0, 79, 1, 69, 0, 115, 1, 61, 0, 59, 0, 177, 0, 67, 1, 64, 0, 111, 0, 64, 0, 82, 0, 119, 0, 62, 0, 63, 0, 127, 1, 89, 0, 63, 0, 116, 0, 63, 0, 62, 0, 186, 0, 61, 0, 62, 0, 124, 0, 54, 0, 72, 0, 117, 0, 72, 0, 67, 0, 121, 0, 67, 1, 70, 0, 124, 1, 65, 0, 83, 0, 164, 0, 59, 1, 63, 0, 121, 0, 66, 0, 86, 0, 148, 0, 57, 0, 57, 0, 123, 1, 92, 0, 63, 0, 121, 0, 76, 0, 62, 0, 159, 1, 62, 0, 64, 0, 118, 0, 54, 0, 89, 0, 132, 1, 73, 0, 62, 0, 124, 0, 78, 1, 63, 0, 148, 0, 64, 0, 63, 0, 162, 0, 62, 0, 65, 0, 124, 0, 78, 0, 88, 0, 130, 0, 59, 1, 61, 0, 129, 1, 88, 0, 70, 0, 122, 0, 68, 0, 60, 0, 157, 0, 66, 0, 58, 0, 167, 0, 56, 0, 77, 0, 116, 0, 63, 0, 56, 0, 138, 0, 99, 0, 61, 0, 122, 0, 63, 0, 60, 0, 158, 0, 62, 1, 82, 0, 118, 0, 67, 0, 99, 0, 125, 0, 61, 1, 65, 0, 150, 1, 92, 0, 63, 0, 122, 0, 59, 0, 65, 0, 158, 1, 86, 0, 66, 0, 125, 0, 49, 1, 83, 0, 123, 0, 71, 0, 70, 0, 129, 0, 83, 1, 67, 0, 149, 0, 67, 0, 61, 0, 196, 0, 60, 0, 60, 0, 130, 0, 70, 0, 81, 0, 127, 0, 75, 0, 65, 0, 130, 1, 102, 0, 60, 0, 115, 0, 57, 0, 74, 0, 162, 1, 68, 0, 66, 0, 127, 0, 65, 1, 86, 0, 146, 1, 70, 0, 68, 0, 142, 0, 78, 0, 64, 0, 125, 1, 70, 0, 67, 0, 196, 0, 55, 1, 59, 0, 126, 0, 64, 0, 100, 0, 144, 0, 61, 1, 57, 0, 123, 0, 85, 0, 73, 0, 155, 0, 65, 0, 67, 0, 165, 0, 71, 0, 67, 0, 123, 0, 80, 1, 87, 0, 129, 0, 75, 0, 69, 0, 126, 0, 76, 1, 75, 0, 131, 0, 68, 0, 70, 0, 190, 0, 62, 1, 69, 0, 159, 0, 72, 0, 82, 0, 130, 0, 68, 0, 60, 0, 125, 0, 106, 0, 67, 0, 124, 0, 65, 0, 66, 0, 179, 1, 72, 0, 82, 0, 128, 0, 67, 1, 81, 0, 117, 0, 66, 0, 63, 0, 157, 0, 95, 1, 62, 0, 134, 0, 72, 0, 60, 0, 169, 0, 73, 0, 63, 0, 122, 0, 76, 0, 80, 0, 143, 0, 58, 1, 76, 0, 130, 0, 89, 0, 69, 0, 131, 0, 64, 0, 61, 0, 201, 1, 69, 0, 72, 0, 125, 0, 66, 0, 89, 0, 132, 1, 82, 0, 68, 0, 133, 0, 78, 1, 70, 0, 131, 0, 69, 0, 79, 0, 174, 0, 58, 0, 62, 0, 132, 0, 69, 0, 85, 0, 166, 0, 70, 0, 59, 0, 143, 0, 92, 0, 60, 0, 133, 0, 84, 0, 67, 0, 178, 0, 74, 0, 66, 0, 124, 0, 65, 0, 119, 0, 124, 1, 66, 0, 62, 0, 135, 0, 91, 0, 71, 0, 150, 0, 68, 0, 65, 0, 176, 0, 74, 0, 62, 0, 137, 0, 80, 0, 94, 0, 140, 0, 62, 0, 63, 0, 122, 1, 90, 0, 79, 0, 154, 0, 65, 0, 65, 0, 166, 0, 73, 0, 63, 0, 156, 0, 65, 1, 91, 0, 118, 0, 65, 0, 64, 0, 138, 0, 97, 0, 61, 0, 131, 1, 67, 0, 78, 0, 171, 0, 60, 1, 74, 0, 133, 0, 78, 0, 85, 0, 134, 0, 61, 1, 65, 0, 151, 1, 93, 0, 64, 0, 150, 0, 68, 0, 66, 0, 186, 1, 89, 0, 67, 0, 133, 0, 65, 0, 90, 0, 131, 0, 72, 0, 76, 0, 135, 0, 94, 0, 70, 0, 133, 0, 72, 0, 68, 0, 209, 0, 58, 0, 67, 0, 137, 0, 67, 0, 81, 0, 136, 0, 83, 1, 74, 0, 121, 0, 88, 0, 61, 0, 129, 0, 62, 0, 74, 0, 176, 0, 73, 0, 62, 0, 146, 0, 65, 1, 98, 0, 171, 1, 70, 0, 63, 0, 138, 0, 87, 0, 68, 0, 131, 0, 80, 0, 82, 0, 176, 0, 65, 0, 62, 0, 135, 0, 73, 0, 102, 0, 137, 0, 66, 1, 65, 0, 127, 0, 109, 0, 66, 0, 158, 0, 63, 0, 67, 0, 169, 1, 75, 0, 75, 0, 133, 0, 79, 1, 87, 0, 141, 0, 76, 0, 62, 0, 146, 0, 89, 0, 71, 0, 128, 0, 75, 0, 69, 0, 198, 0, 67, 1, 69, 0, 161, 0, 71, 0, 88, 0, 135, 0, 69, 0, 61, 0, 138, 0, 113, 0, 69, 0, 137, 0, 82, 0, 69, 0, 170, 1, 70, 0, 81, 0, 146, 0, 62, 0, 83, 0, 136, 0, 66, 0, 60, 0, 187, 0, 79, 1, 73, 0, 135, 1, 72, 0, 67, 0, 175, 0, 77, 1, 69, 0, 135, 0, 70, 0, 96, 0, 134, 0, 67, 0, 82, 0, 145, 1, 94, 0, 67, 0, 136, 0, 66, 0, 70, 0, 225, 1, 77, 0, 70, 0, 132, 0, 62, 0, 89, 0, 132, 1, 90, 0, 72, 0, 140, 0, 82, 1, 70, 0, 144, 1, 70, 0, 83, 0, 178, 0, 63, 1, 69, 0, 132, 0, 73, 0, 99, 0, 169, 0, 66, 1, 68, 0, 131, 0, 99, 0, 64, 0, 140, 0, 77, 0, 64, 0, 189, 1, 73, 0, 65, 0, 146, 0, 79, 1, 112, 0, 136, 1, 73, 0, 73, 0, 147, 0, 89, 0, 72, 0, 160, 1, 78, 0, 71, 0, 209, 0, 70, 0, 69, 0, 139, 0, 96, 0, 98, 0, 146, 0, 67, 1, 69, 0, 127, 1, 93, 0, 95, 0, 134, 0, 70, 0, 73, 0, 186, 0, 70, 0, 69, 0, 168, 0, 70, 1, 95, 0, 142, 0, 80, 0, 78, 0, 146, 0, 106, 0, 75, 0, 151, 1, 75, 0, 70, 0, 183, 0, 69, 1, 85, 0, 159, 0, 78, 0, 89, 0, 141, 0, 64, 0, 67, 0, 162, 0, 116, 0, 68, 0, 154, 0, 67, 0, 81, 0, 183, 1, 91, 0, 76, 0, 142, 0, 60, 0, 95, 0, 132, 0, 77, 0, 94, 0, 139, 0, 101, 1, 81, 0, 149, 0, 75, 0, 72, 0, 228, 0, 73, 0, 68, 0, 137, 0, 78, 0, 86, 0, 176, 0, 82, 1, 70, 0, 132, 1, 99, 0, 75, 0, 144, 0, 66, 0, 95, 0, 184, 1, 80, 0, 79, 0, 147, 0, 69, 1, 101, 0, 170, 1, 78, 0, 76, 0, 137, 0, 89, 0, 74, 0, 140, 0, 94, 0, 69, 0, 191, 0, 66, 0, 72, 0, 135, 0, 71, 0, 118, 0, 150, 0, 74, 1, 66, 0, 161, 0, 102, 0, 74, 0, 175, 0, 68, 0, 72, 0, 199, 0, 77, 0, 71, 0, 158, 0, 85, 0, 103, 0, 131, 1, 74, 0, 74, 0, 151, 0, 87, 1, 83, 0, 143, 0, 92, 0, 69, 0, 193, 0, 73, 1, 68, 0, 164, 0, 77, 0, 106, 0, 149, 0, 75, 0, 63, 0, 146, 1, 122, 0, 78, 0, 156, 0, 72, 0, 72, 0, 190, 1, 74, 0, 94, 0, 148, 0, 65, 1, 93, 0, 150, 0, 79, 0, 81, 0, 191, 0, 99, 0, 70, 0, 139, 0, 76, 0, 71, 0, 190, 0, 84, 0, 69, 0, 143, 0, 84, 0, 96, 0, 160, 0, 72, 1, 81, 0, 151, 0, 99, 0, 68, 0, 147, 0, 74, 0, 80, 0, 248, 1, 80, 0, 75, 0, 150, 0, 71, 0, 104, 0, 143, 0, 92, 0, 69, 0, 143, 0, 101, 1, 94, 0, 140, 0, 78, 0, 87, 0, 203, 0, 67, 1, 65, 0, 159, 0, 75, 0, 92, 0, 178, 0, 83, 1, 62, 0, 144, 0, 100, 0, 68, 0, 152, 0, 96, 0, 77, 0, 187, 1, 87, 0, 72, 0, 154, 0, 66, 0, 119, 0, 141, 0, 76, 0, 71, 0, 154, 0, 91, 1, 76, 0, 177, 0, 79, 0, 94, 0, 223, 0, 73, 0, 68, 0, 153, 0, 94, 0, 102, 0, 152, 0, 71, 1, 69, 0, 155, 0, 116, 0, 94, 0, 153, 0, 75, 0, 71, 0, 194, 0, 76, 0, 74, 0, 173, 0, 74, 0, 96, 0, 156, 1, 88, 0, 66, 0, 153, 0, 127, 1, 78, 0, 144, 0, 85, 0, 73, 0, 197, 0, 75, 1, 95, 0, 144, 0, 83, 0, 96, 0, 156, 0, 70, 1, 78, 0, 170, 1, 113, 0, 79, 0, 149, 0, 83, 0, 73, 0, 182, 0, 103, 0, 80, 0, 146, 0, 73, 0, 100, 0, 163, 0, 82, 0, 81, 0, 165, 0, 92, 0, 73, 0, 145, 0, 71, 0, 79, 0, 247, 0, 76, 0, 69, 0, 141, 0, 84, 0, 100, 0, 147, 0, 86, 1, 76, 0, 155, 1, 107, 0, 72, 0, 145, 0, 67, 0, 91, 0, 196, 0, 88, 0, 78, 0, 148, 0, 69, 1, 97, 0, 172, 0, 76, 0, 73, 0, 157, 0, 103, 0, 71, 0, 162, 1, 95, 0, 73, 0, 224, 0, 74, 1, 72, 0, 148, 0, 75, 0, 115, 0, 151, 0, 74, 0, 86, 0, 143, 0, 100, 0, 76, 0, 185, 0, 74, 0, 78, 0, 192, 1, 82, 0, 62, 0, 149, 0, 97, 1, 92, 0, 143, 0, 82, 0, 69, 0, 149, 0, 103, 0, 98, 0, 152, 1, 82, 0, 83, 0, 235, 0, 70, 0, 71, 0, 181, 0, 77, 0, 101, 0, 150, 0, 79, 0, 72, 0, 157, 1, 124, 0, 83, 0, 150, 0, 75, 0, 78, 0, 191, 1, 91, 0, 90, 0, 162, 0, 73, 0, 97, 0, 151, 0, 94, 0, 77, 0, 183, 0, 94, 0, 78, 0, 148, 1, 81, 0, 77, 0, 199, 0, 85, 1, 81, 0, 176, 0, 75, 0, 115, 0, 164, 0, 73, 1, 87, 0, 144, 0, 112, 0, 79, 0, 154, 0, 78, 0, 82, 0, 236, 0, 83, 0, 76, 0, 170, 0, 68, 0, 99, 0, 153, 0, 98, 0, 71, 0, 167, 0, 107, 0, 75, 0, 139, 1, 80, 0, 87, 0, 203, 0, 77, 0, 72, 0, 154, 0, 79, 0, 107, 0, 207, 0, 78, 1, 67, 0, 141, 1, 108, 0, 74, 0, 152, 0, 91, 0, 88, 0, 195, 0, 78, 0, 84, 0, 159, 0, 72, 0, 120, 0, 144, 0, 79, 0, 75, 0, 172, 0, 102, 1, 74, 0, 199, 0, 96, 0, 79, 0, 205, 0, 78, 0, 77, 0, 146, 0, 100, 0, 102, 0, 157, 0, 72, 0, 77, 0, 154, 0, 118, 0, 92, 0, 162, 0, 77, 0, 74, 0, 209, 0, 84, 0, 71, 0, 187, 0, 71, 0, 108, 0, 154, 1, 84, 0, 78, 0, 151, 0, 113, 1, 77, 0, 159, 1, 85, 0, 80, 0, 201, 0, 80, 0, 89, 0, 159, 0, 80, 0, 109, 0, 172, 0, 72, 0, 73, 0, 177, 1, 116, 0, 78, 0, 175, 0, 77, 0, 76, 0, 208, 1, 98, 0, 81, 0, 150, 0, 76, 1, 105, 0, 149, 0, 82, 0, 104, 0, 160, 0, 98, 0, 81, 0, 155, 0, 82, 0, 79, 0, 250, 0, 76, 1, 88, 0, 159, 0, 93, 0, 107, 0, 172, 0, 96, 1, 78, 0, 156, 0, 109, 0, 76, 0, 148, 0, 78, 0, 88, 0, 244, 1, 84, 0, 76, 0, 168, 0, 79, 1, 101, 0, 178, 0, 84, 0, 79, 0, 152, 0, 104, 0, 83, 0, 155, 1, 115, 0, 82, 0, 203, 0, 75, 0, 77, 0, 149, 0, 79, 0, 127, 0, 165, 0, 96, 0, 72, 0, 152, 0, 109, 0, 86, 0, 185, 0, 80, 0, 70, 0, 204, 0, 80, 0, 76, 0, 170, 0, 86, 1, 96, 0, 148, 1, 90, 0, 85, 0, 167, 0, 100, 1, 98, 0, 163, 1, 84, 0, 88, 0, 217, 0, 74, 0, 78, 0, 186, 0, 81, 0, 100, 0, 157, 0, 83, 0, 74, 0, 149, 1, 154, 0, 80, 0, 159, 0, 77, 0, 79, 0, 222, 0, 88, 0, 90, 0, 152, 0, 81, 0, 111, 0, 171, 0, 83, 0, 72, 0, 184, 0, 106, 0, 83, 0, 167, 0, 79, 0, 82, 0, 208, 0, 93, 0, 85, 0, 167, 0, 77, 0, 103, 0, 159, 0, 78, 1, 96, 0, 164, 1, 109, 0, 79, 0, 153, 0, 88, 0, 82, 0, 242, 1, 88, 0, 78, 0, 156, 0, 79, 0, 106, 0, 149, 1, 103, 0, 81, 0, 177, 0, 94, 0, 76, 0, 150, 1, 84, 0, 107, 0, 213, 0, 85, 1, 72, 0, 165, 0, 80, 0, 118, 0, 192, 0, 78, 1, 80, 0, 169, 1, 120, 0, 84, 0, 185, 0, 86, 0, 80, 0, 209, 0, 93, 0, 80, 0, 165, 0, 79, 0, 127, 0, 161, 1, 85, 0, 82, 0, 168, 0, 113, 1, 84, 0, 222, 0, 88, 0, 75, 0, 215, 0, 81, 0, 81, 0, 147, 0, 105, 0, 117, 0, 167, 0, 78, 1, 95, 0, 156, 1, 115, 0, 98, 0, 156, 0, 84, 0, 74, 0, 210, 0, 81, 0, 84, 0, 198, 0, 80, 1, 107, 0, 176, 1, 85, 0, 78, 0, 162, 0, 128, 0, 83, 0, 159, 0, 85, 0, 81, 0, 246, 0, 76, 0, 87, 0, 159, 0, 91, 0, 114, 0, 156, 0, 80, 1, 80, 0, 213, 1, 118, 0, 84, 0, 171, 0, 78, 0, 80, 0, 216, 0, 101, 0, 92, 0, 154, 0, 75, 0, 105, 0, 163, 0, 96, 0, 95, 0, 159, 0, 108, 1, 90, 0, 165, 0, 87, 0, 81, 0, 282, 0, 81, 1, 71, 0, 187, 0, 85, 0, 103, 0, 177, 0, 98, 0, 69, 0, 160, 0, 117, 0, 81, 0, 163, 0, 100, 0, 108, 0, 214, 0, 88, 0, 85, 0, 163, 0, 74, 0, 108, 0, 192, 1, 84, 0, 80, 0, 175, 0, 122, 0, 93, 0, 162, 0, 105, 0, 86, 0, 223, 0, 84, 0, 81, 0, 157, 0, 78, 0, 126, 0, 188, 0, 77, 1, 76, 0, 172, 0, 109, 0, 81, 0, 201, 0, 84, 0, 83, 0, 205, 1, 83, 0, 98, 0, 167, 0, 94, 1, 110, 0, 166, 1, 103, 0, 86, 0, 160, 0, 111, 1, 100, 0, 163, 1, 97, 0, 83, 0, 218, 0, 71, 0, 81, 0, 193, 0, 86, 0, 118, 0, 166, 0, 83, 0, 84, 0, 179, 0, 140, 0, 79, 0, 171, 0, 83, 0, 88, 0, 220, 0, 95, 0, 99, 0, 180, 0, 80, 1, 118, 0, 172, 0, 87, 0, 87, 0, 205, 0, 107, 0, 85, 0, 156, 1, 84, 0, 85, 0, 225, 0, 111, 0, 85, 0, 175, 0, 84, 0, 121, 0, 172, 0, 80, 0, 104, 0, 172, 1, 111, 0, 82, 0, 177, 0, 82, 0, 90, 0, 259, 1, 81, 0, 84, 0, 171, 0, 81, 0, 110, 0, 161, 0, 110, 0, 89, 0, 169, 0, 114, 1, 87, 0, 180, 1, 92, 0, 99, 0, 234, 0, 79, 1, 80, 0, 164, 0, 95, 0, 111, 0, 202, 0, 79, 1, 83, 0, 159, 1, 126, 0, 86, 0, 184, 0, 96, 0, 85, 0, 251, 1, 90, 0, 86, 0, 178, 0, 81, 0, 136, 0, 169, 0, 84, 0, 85, 0, 175, 0, 112, 1, 97, 0, 201, 1, 90, 0, 88, 0, 242, 0, 82, 0, 84, 0, 165, 0, 103, 0, 119, 0, 194, 0, 88, 0, 90, 0, 156, 1, 112, 0, 102, 0, 167, 0, 79, 0, 85, 0, 221, 0, 93, 0, 77, 0, 230, 0, 93, 1, 119, 0, 166, 1, 89, 0, 86, 0, 166, 0, 132, 0, 91, 0, 167, 0, 88, 0, 96, 0, 226, 0, 82, 1, 108, 0, 181, 0, 87, 0, 115, 0, 176, 0, 81, 0, 89, 0, 192, 0, 122, 0, 82, 0, 168, 0, 77, 0, 86, 0, 244, 1, 104, 0, 89, 0, 184, 0, 82, 0, 126, 0, 180, 1, 90, 0, 96, 0, 172, 0, 107, 1, 79, 0, 178, 0, 99, 0, 86, 0, 281, 0, 82, 1, 96, 0, 172, 0, 86, 0, 105, 0, 184, 0, 108, 0, 87, 0, 173, 1, 117, 0, 95, 0, 171, 0, 92, 0, 102, 0, 221, 1, 86, 0, 91, 0, 173, 0, 74, 0, 116, 0, 192, 1, 87, 0, 84, 0, 217, 0, 107, 0, 89, 0, 166, 0, 101, 0, 87, 0, 233, 0, 86, 0, 79, 0, 168, 0, 81, 0, 156, 0, 171, 0, 94, 1, 88, 0, 167, 0, 117, 0, 98, 0, 203, 0, 88, 0, 89, 0, 225, 0, 106, 0, 90, 0, 169, 0, 97, 1, 127, 0, 173, 1, 91, 0, 79, 0, 190, 0, 105, 1, 108, 0, 189, 0, 98, 0, 88, 0, 236, 0, 83, 0, 89, 0, 215, 0, 88, 0, 111, 0, 172, 0, 93, 0, 93, 0, 176, 1, 142, 0, 92, 0, 170, 0, 87, 0, 89, 0, 235, 1, 94, 0, 105, 0, 166, 0, 93, 1, 123, 0, 167, 0, 85, 0, 91, 0, 208, 0, 110, 0, 84, 0, 164, 1, 90, 0, 94, 0, 253, 0, 102, 0, 95, 0, 167, 0, 82, 0, 116, 0, 179, 0, 86, 1, 101, 0, 175, 0, 117, 0, 92, 0, 178, 0, 87, 0, 88, 0, 274, 1, 89, 0, 85, 0, 173, 0, 90, 0, 119, 0, 179, 1, 127, 0, 87, 0, 182, 0, 121, 0, 92, 0, 169, 1, 86, 0, 112, 0, 232, 0, 85, 0, 90, 0, 196, 0, 87, 0, 114, 0, 226, 0, 88, 0, 94, 0, 174, 0, 120, 0, 89, 0, 174, 0, 115, 0, 98, 0, 215, 0, 89, 0, 94, 0, 183, 0, 85, 1, 148, 0, 184, 0, 88, 0, 90, 0, 187, 0, 127, 1, 88, 0, 207, 1, 95, 0, 100, 0, 230, 0, 89, 0, 86, 0, 177, 0, 118, 0, 115, 0, 192, 0, 82, 1, 95, 0, 166, 0, 127, 0, 112, 0, 181, 0, 93, 0, 94, 0, 241, 0, 83, 0, 104, 0, 217, 0, 88, 0, 122, 0, 169, 1, 89, 0, 94, 0, 177, 0, 136, 1, 97, 0, 190, 0, 102, 0, 87, 0, 249, 0, 81, 1, 107, 0, 189, 0, 90, 0, 114, 0, 189, 0, 89, 0, 90, 0, 227, 0, 116, 0, 90, 0, 184, 0, 98, 0, 98, 0, 234, 0, 99, 0, 82, 0, 175, 0, 88, 1, 135, 0, 165, 1, 89, 0, 111, 0, 179, 0, 115, 0, 102, 0, 189, 0, 88, 0, 92, 0, 286, 0, 106, 1, 88, 0, 175, 0, 87, 0, 124, 0, 181, 0, 99, 0, 85, 0, 190, 0, 129, 0, 83, 0, 197, 0, 96, 0, 107, 0, 248, 1, 87, 0, 84, 0, 187, 0, 87, 1, 123, 0, 210, 1, 99, 0, 101, 0, 177, 0, 121, 0, 92, 0, 188, 0, 104, 0, 87, 0, 234, 0, 82, 1, 92, 0, 178, 0, 108, 0, 165, 0, 179, 0, 90, 0, 93, 0, 184, 0, 123, 0, 85, 0, 213, 0, 98, 0, 92, 0, 261, 1, 89, 0, 80, 0, 198, 0, 105, 1, 119, 0, 176, 0, 95, 0, 87, 0, 186, 0, 118, 0, 126, 0, 176, 1, 101, 0, 94, 0, 235, 0, 96, 0, 84, 0, 219, 0, 87, 0, 124, 0, 188, 0, 100, 0, 94, 0, 186, 0, 141, 0, 96, 0, 196, 0, 85, 0, 97, 0, 227, 1, 88, 0, 104, 0, 203, 0, 94, 1, 108, 0, 175, 0, 88, 0, 94, 0, 214, 0, 122, 1, 100, 0, 200, 1, 89, 0, 111, 0, 239, 0, 115, 1, 95, 0, 186, 0, 89, 0, 113, 0, 184, 0, 88, 1, 102, 0, 190, 1, 137, 0, 97, 0, 181, 0, 95, 0, 90, 0, 284, 0, 93, 0, 100, 0, 190, 0, 87, 0, 127, 0, 200, 1, 113, 0, 100, 0, 189, 0, 115, 1, 97, 0, 181, 0, 95, 0, 108, 0, 269, 0, 90, 0, 100, 0, 181, 0, 88, 0, 118, 0, 248, 0, 93, 0, 90, 0, 191, 0, 117, 0, 92, 0, 169, 0, 115, 0, 91, 0, 247, 1, 94, 0, 99, 0, 180, 0, 102, 0, 152, 0, 177, 0, 93, 0, 93, 0, 207, 0, 126, 0, 93, 0, 199, 0, 96, 0, 99, 0, 246, 0, 88, 0, 100, 0, 175, 0, 115, 0, 135, 0, 183, 0, 93, 1, 98, 0, 178, 0, 120, 0, 113, 0, 184, 0, 94, 0, 84, 0, 262, 0, 103, 0, 94, 0, 223, 0, 86, 1, 124, 0, 183, 1, 88, 0, 90, 0, 180, 0, 144, 1, 92, 0, 204, 0, 102, 0, 97, 0, 253, 0, 90, 1, 119, 0, 190, 0, 96, 0, 117, 0, 200, 0, 93, 1, 106, 0, 222, 1, 130, 0, 105, 0, 179, 0, 95, 0, 94, 0, 248, 1, 113, 0, 88, 0, 179, 0, 96, 0, 118, 0, 185, 0, 99, 0, 112, 0, 203, 0, 136, 0, 93, 0, 176, 0, 89, 0, 94, 0, 325, 0, 85, 0, 87, 0, 199, 0, 92, 0, 124, 0, 183, 0, 119, 1, 92, 0, 192, 1, 131, 0, 101, 0, 201, 0, 93, 0, 117, 0, 250, 1, 94, 0, 95, 0, 191, 0, 86, 0, 135, 0, 231, 0, 104, 0, 99, 0, 178, 0, 122, 0, 97, 0, 179, 0, 109, 0, 104, 0, 253, 0, 89, 1, 95, 0, 240, 0, 95, 0, 142, 0, 177, 0, 95, 1, 87, 0, 189, 0, 127, 0, 87, 0, 215, 0, 100, 0, 105, 0, 241, 0, 108, 0, 84, 0, 187, 0, 105, 1, 123, 0, 183, 1, 98, 0, 93, 0, 190, 0, 130, 0, 111, 0, 177, 1, 101, 0, 109, 0, 257, 0, 94, 0, 92, 0, 251, 0, 94, 0, 133, 0, 211, 0, 93, 0, 85, 0, 177, 1, 156, 0, 101, 0, 199, 0, 92, 0, 98, 0, 247, 0, 92, 0, 125, 0, 193, 0, 95, 0, 137, 0, 190, 0, 94, 0, 89, 0, 223, 0, 129, 1, 104, 0, 183, 1, 104, 0, 95, 0, 270, 0, 110, 1, 98, 0, 188, 0, 99, 0, 128, 0, 194, 0, 102, 1, 117, 0, 207, 0, 121, 0, 94, 0, 187, 0, 93, 0, 100, 0, 300, 0, 95, 0, 103, 0, 183, 0, 109, 0, 136, 0, 203, 1, 109, 0, 92, 0, 202, 0, 125, 1, 99, 0, 196, 1, 96, 0, 124, 0, 256, 0, 106, 0, 91, 0, 194, 0, 97, 0, 129, 0, 226, 0, 93, 0, 95, 0, 186, 0, 122, 0, 97, 0, 211, 0, 110, 0, 94, 0, 250, 1, 100, 0, 107, 0, 178, 0, 88, 0, 146, 0, 180, 0, 99, 0, 99, 0, 186, 0, 125, 0, 98, 0, 239, 0, 103, 0, 95, 0, 275, 0, 99, 0, 97, 0, 188, 0, 127, 0, 135, 0, 188, 0, 99, 0, 101, 0, 186, 1, 123, 0, 110, 0, 194, 0, 108, 0, 94, 0, 295, 0, 98, 0, 86, 0, 224, 0, 97, 1, 129, 0, 184, 0, 92, 0, 98, 0, 184, 0, 157, 1, 121, 0, 194, 1, 103, 0, 93, 0, 254, 0, 92, 0, 126, 0, 194, 0, 105, 0, 138, 0, 184, 0, 102, 1, 89, 0, 246, 1, 125, 0, 95, 0, 197, 0, 107, 0, 99, 0, 243, 0, 113, 0, 88, 0, 213, 0, 90, 1, 131, 0, 198, 1, 100, 0, 118, 0, 205, 0, 124, 0, 107, 0, 194, 0, 94, 0, 107, 0, 303, 0, 94, 1, 96, 0, 196, 0, 96, 0, 133, 0, 203, 0, 112, 1, 93, 0, 194, 1, 146, 0, 90, 0, 179, 0, 98, 0, 124, 0, 255, 0, 95, 0, 90, 0, 211, 0, 97, 1, 130, 0, 263, 1, 102, 0, 104, 0, 184, 0, 139, 0, 97, 0, 184, 0, 114, 0, 101, 0, 247, 0, 103, 1, 120, 0, 194, 0, 98, 0, 143, 0, 188, 0, 96, 1, 96, 0, 181, 0, 137, 0, 90, 0, 228, 0, 108, 0, 102, 0, 253, 1, 96, 0, 96, 0, 197, 0, 121, 0, 118, 0, 193, 0, 98, 0, 92, 0, 219, 0, 126, 0, 111, 0, 221, 0, 104, 0, 102, 0, 269, 0, 93, 0, 97, 0, 233, 0, 99, 0, 142, 0, 192, 0, 98, 0, 98, 0, 201, 0, 180, 0, 95, 0, 194, 0, 100, 0, 98, 0, 259, 1, 107, 0, 108, 0, 197, 0, 90, 0, 121, 0, 201, 0, 97, 0, 110, 0, 226, 0, 138, 1, 102, 0, 212, 1, 103, 0, 100, 0, 271, 0, 123, 0, 99, 0, 196, 0, 93, 0, 135, 0, 222, 0, 101, 1, 128, 0, 198, 0, 123, 0, 99, 0, 182, 0, 103, 0, 98, 0, 311, 1, 102, 0, 101, 0, 225, 0, 119, 0, 128, 0, 191, 1, 129, 0, 102, 0, 202, 0, 126, 0, 100, 0, 182, 0, 106, 0, 112, 0, 286, 0, 97, 1, 108, 0, 195, 0, 98, 0, 139, 0, 234, 0, 108, 0, 96, 0, 203, 0, 133, 0, 112, 0, 197, 0, 121, 0, 103, 0, 290, 0, 101, 0, 101, 0, 200, 0, 98, 1, 150, 0, 205, 0, 121, 0, 100, 0, 193, 0, 125, 1, 104, 0, 234, 0, 114, 0, 95, 0, 257, 0, 101, 0, 97, 0, 211, 0, 126, 0, 133, 0, 196, 0, 90, 1, 96, 0, 212, 0, 132, 0, 121, 0, 202, 0, 109, 0, 103, 0, 285, 0, 95, 0, 95, 0, 236, 0, 99, 1, 133, 0, 189, 1, 101, 0, 99, 0, 218, 0, 184, 0, 99, 0, 202, 0, 97, 0, 96, 0, 262, 0, 96, 0, 110, 0, 200, 0, 105, 0, 130, 0, 224, 0, 105, 0, 91, 0, 235, 1, 134, 0, 95, 0, 201, 0, 108, 0, 98, 0, 253, 1, 132, 0, 111, 0, 214, 0, 92, 1, 152, 0, 203, 0, 104, 0, 125, 0, 194, 0, 134, 1, 97, 0, 193, 0, 117, 0, 100, 0, 332, 0, 103, 1, 96, 0, 214, 0, 102, 0, 120, 0, 189, 0, 128, 0, 91, 0, 218, 0, 136, 0, 102, 0, 209, 0, 98, 0, 124, 0, 266, 0, 103, 0, 110, 0, 208, 0, 98, 1, 145, 0, 244, 1, 101, 0, 104, 0, 201, 0, 136, 0, 99, 0, 195, 0, 121, 0, 111, 0, 256, 0, 118, 1, 102, 0, 201, 0, 108, 0, 166, 0, 200, 0, 96, 0, 99, 0, 189, 0, 136, 0, 95, 0, 285, 0, 107, 0, 96, 0, 252, 1, 101, 0, 104, 0, 206, 0, 119, 0, 138, 0, 221, 1, 106, 0, 102, 0, 198, 0, 136, 1, 129, 0, 210, 1, 100, 0, 105, 0, 273, 0, 102, 1, 98, 0, 233, 0, 114, 0, 138, 0, 203, 0, 103, 0, 116, 0, 216, 0, 171, 0, 100, 0, 198, 0, 102, 0, 103, 0, 294, 0, 104, 0, 115, 0, 209, 0, 104, 0, 129, 0, 222, 0, 107, 0, 92, 0, 238, 0, 144, 1, 112, 0, 196, 1, 108, 0, 101, 0, 264, 0, 117, 0, 91, 0, 188, 0, 112, 0, 132, 0, 198, 0, 111, 0, 122, 0, 205, 1, 142, 0, 96, 0, 219, 0, 105, 0, 98, 0, 331, 1, 105, 0, 114, 0, 222, 0, 102, 0, 143, 0, 195, 0, 119, 0, 98, 0, 204, 0, 131, 0, 107, 0, 205, 0, 107, 0, 141, 0, 296, 0, 104, 1, 96, 0, 196, 0, 106, 0, 123, 0, 262, 0, 99, 0, 95, 0, 194, 1, 154, 0, 106, 0, 198, 0, 135, 0, 104, 0, 280, 1, 112, 0, 101, 0, 200, 0, 93, 0, 156, 0, 240, 1, 114, 0, 100, 0, 217, 0, 142, 0, 102, 0, 234, 0, 104, 0, 106, 0, 279, 0, 104, 0, 108, 0, 211, 0, 118, 0, 136, 0, 206, 0, 106, 0, 101, 0, 221, 1, 139, 0, 122, 0, 202, 0, 113, 0, 104, 0, 263, 0, 100, 0, 105, 0, 244, 0, 100, 0, 141, 0, 203, 0, 122, 0, 102, 0, 215, 0, 158, 1, 103, 0, 201, 1, 107, 0, 105, 0, 272, 0, 100, 1, 113, 0, 220, 0, 108, 0, 165, 0, 206, 0, 112, 1, 104, 0, 256, 1, 140, 0, 106, 0, 212, 0, 99, 0, 103, 0, 288, 1, 141, 0, 103, 0, 220, 0, 97, 0, 140, 0, 199, 1, 116, 0, 128, 0, 225, 0, 136, 0, 101, 0, 221, 0, 109, 0, 109, 0, 327, 0, 115, 1, 101, 0, 191, 0, 104, 0, 134, 0, 199, 0, 120, 1, 125, 0, 208, 0, 141, 0, 125, 0, 209, 0, 99, 0, 134, 0, 271, 0, 99, 0, 105, 0, 208, 0, 115, 1, 132, 0, 240, 0, 105, 0, 101, 0, 208, 0, 143, 0, 101, 0, 214, 0, 136, 0, 99, 0, 313, 0, 109, 1, 105, 0, 209, 0, 100, 0, 168, 0, 210, 0, 104, 0, 98, 0, 206, 0, 165, 0, 114, 0, 241, 0, 104, 0, 105, 0, 295, 0, 112, 0, 101, 0, 198, 0, 128, 1, 136, 0, 218, 1, 120, 0, 114, 0, 225, 0, 143, 0, 131, 0, 214, 1, 107, 0, 105, 0, 276, 0, 106, 1, 102, 0, 280, 0, 114, 0, 138, 0, 232, 0, 105, 0, 108, 0, 216, 0, 161, 0, 111, 0, 211, 0, 101, 0, 112, 0, 270, 0, 111, 0, 125, 0, 203, 0, 123, 1, 132, 0, 208, 0, 110, 0, 105, 0, 246, 0, 145, 0, 112, 0, 217, 1, 106, 0, 112, 0, 280, 0, 123, 0, 107, 0, 211, 0, 105, 0, 128, 0, 247, 0, 107, 0, 125, 0, 208, 0, 150, 0, 108, 0, 206, 0, 105, 0, 108, 0, 359, 0, 114, 0, 122, 0, 204, 0, 103, 0, 138, 0, 199, 1, 119, 0, 104, 0, 206, 0, 133, 1, 113, 0, 217, 1, 135, 0, 135, 0, 289, 0, 102, 1, 106, 0, 219, 0, 112, 0, 144, 0, 252, 0, 108, 1, 96, 0, 229, 1, 159, 0, 122, 0, 213, 0, 123, 0, 107, 0, 281, 0, 109, 0, 105, 0, 203, 0, 106, 0, 181, 0, 207, 1, 116, 0, 102, 0, 243, 0, 143, 1, 109, 0, 268, 0, 113, 0, 100, 0, 271, 0, 121, 0, 103, 0, 195, 0, 124, 0, 143, 0, 223, 0, 108, 0, 104, 0, 207, 1, 142, 0, 131, 0, 239, 0, 111, 0, 110, 0, 277, 0, 102, 0, 97, 0, 253, 0, 109, 0, 151, 0, 218, 0, 106, 0, 122, 0, 205, 0, 168, 0, 107, 0, 227, 0, 110, 0, 111, 0, 280, 0, 112, 0, 135, 0, 222, 0, 119, 0, 144, 0, 221, 0, 104, 0, 93, 0, 253, 1, 142, 0, 108, 0, 219, 0, 105, 0, 100, 0, 298, 0, 137, 0, 109, 0, 228, 0, 108, 1, 140, 0, 220, 0, 101, 0, 124, 0, 208, 0, 140, 1, 118, 0, 222, 0, 108, 0, 118, 0, 340, 0, 103, 0, 104, 0, 212, 0, 112, 0, 155, 0, 213, 0, 142, 1, 104, 0, 213, 0, 154, 0, 98, 0, 231, 0, 96, 0, 123, 0, 282, 0, 104, 0, 104, 0, 242, 0, 102, 0, 139, 0, 254, 1, 115, 0, 103, 0, 212, 0, 154, 0, 107, 0, 202, 1, 143, 0, 135, 0, 294, 0, 110, 0, 107, 0, 210, 0, 109, 0, 170, 0, 208, 0, 106, 1, 112, 0, 227, 0, 159, 0, 108, 0, 257, 0, 103, 0, 104, 0, 287, 0, 104, 0, 109, 0, 222, 0, 124, 1, 143, 0, 266, 1, 112, 0, 95, 0, 209, 0, 150, 1, 140, 0, 218, 0, 120, 0, 113, 0, 288, 0, 103, 1, 118, 0, 260, 0, 118, 0, 141, 0, 213, 0, 114, 0, 105, 0, 214, 1, 179, 0, 108, 0, 217, 0, 125, 0, 118, 0, 278, 1, 115, 0, 140, 0, 211, 0, 109, 0, 135, 0, 222, 0, 109, 0, 105, 0, 295, 0, 138, 1, 114, 0, 208, 1, 112, 0, 107, 0, 333, 0, 139, 1, 109, 0, 218, 0, 115, 0, 157, 0, 221, 0, 108, 0, 121, 0, 225, 0, 152, 0, 103, 0, 219, 0, 119, 0, 104, 0, 357, 1, 123, 0, 116, 0, 213, 0, 108, 0, 141, 0, 210, 1, 131, 0, 112, 0, 220, 0, 139, 0, 112, 0, 235, 1}; 
int N,T,t,n;

scanf("%d",&t);

while (t--){
scanf("%d",&n);      
      printf("%d\n",arr[n-1]);
}
//getch();
return 0;
}
