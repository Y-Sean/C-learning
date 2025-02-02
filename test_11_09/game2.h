//#pragma once
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define Row 9
//#define Col 9
//#define Rows Row+2
//#define Cols Col+2
//#define Easy 10
//
//void init(char arr[Rows][Cols], int rows, int cols, char set);
//void print(char arr[Rows][Cols], int row, int col);
//void setmine(char mine[Rows][Cols], int row, int col, int minecount);
//void sweeping(char mine[Rows][Cols], char minesweeper[Rows][Cols], int row, int col);
//
////拓展显示
////递归的限制条件，递归逻辑。
////查看一个格子，展开周围8个格子内的雷信息。空白格子再次探寻周边信息
////该格子周围有雷（限制）