#pragma once

#include <iostream>
#include <vector>
#include <random>

#define ROW 3
#define COL 3

// 初始化棋盘
void initBoard(std::vector<std::vector<char>> &board, int row, int col);
// 打印棋盘
void displayBoard(const std::vector<std::vector<char>>& board, int row, int col);
// 玩家下棋
void playerMove(std::vector<std::vector<char>>& board, int row, int col);
// 电脑下棋
void computerMove(std::vector<std::vector<char>>& board, int row, int col);


// 判断输赢
// 玩家赢 - '*'
// 电脑赢 - '#'
// 平局   - 'Q'
// 继续   - 'C'

char isWin(const std::vector<std::vector<char>>& board, int row, int col);