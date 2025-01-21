#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Row 3
#define Col 3

void init(char arr[Row][Col], int row, int col);
void print(char arr[Row][Col], int row, int col);
void computer_move(char arr[Row][Col], int row, int col);
void player_move(char arr[Row][Col], int row, int col);
char is_win(char arr[Row][Col], int row, int col);
