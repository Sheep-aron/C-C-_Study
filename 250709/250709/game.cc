#include "game.h"

// 初始化棋盘为空格
void initBoard(std::vector<std::vector<char>>& board, int row, int col)
{
	board.resize(row, std::vector<char>(col, ' '));
}

// 打印棋盘
void displayBoard(const std::vector<std::vector<char>>& board, int row, int col)
{
	int i = 0; 
	for (i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			std::cout << " " << board[i][j] << " ";
			if (j < col - 1)
				std::cout << "|";
		}
		if (i < row - 1)
			std::cout << "\n---|---|---\n";
	}
}

void playerMove(std::vector<std::vector<char>>& board, int row, int col)
{
	int x = 0, y = 0; 
	std::cout << "\n玩家下棋:>\n";
	while (1)
	{
		std::cout << "请输入下棋的行标，中间使用空格:>";
		std::cin >> x >> y;
		if (x >= 1 && x <= row && y >= 1 && y <= col && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*'; 
			break;
		}
		else
			std::cout << "无法落子，重新输入坐标\n";
	}
}


void computerMove(std::vector<std::vector<char>>& board, int row, int col)
{
	std::cout << "电脑下棋:>\n";
	std::random_device rd;
	std::mt19937 gen(rd());

	while (1)
	{
		int x = std::uniform_int_distribution<>(0, row - 1)(gen);
		int y = std::uniform_int_distribution<>(0, col - 1)(gen);
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			break;
		}
	}
}

int isFull(const std::vector<std::vector<char>>& board, int row, int col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (board[i][j] == ' ')
				return 0; 
		}
	}
	return 1; 
}

char isWin(const std::vector<std::vector<char>>& board, int row, int col)
{
	// 检查行
	for (int i = 0; i < row; ++i)
	{
		if (board[i][0] != ' ' && std::all_of(board[i].begin(), board[i].end(), [&](char c) { return c == board[i][0]; }))
			return board[i][0];
	}
	// 检查列
	for (int j = 0; j < col; ++j)
	{
		char first = board[0][j];
		if (first != ' ' && std::all_of(board.begin(), board.end(), [&](const std::vector<char>& r) { return r[j] == first; }))
			return first;
	}
	// 检查主对角线
	char first = board[0][0];
	if (first != ' ' && std::all_of(board.begin(), board.end(), [&](const std::vector<char>& r) { return r[&r - &board[0]] == first; }))
		return first;
	// 检查副对角线
	first = board[0][col - 1];
	if (first != ' ' && std::all_of(board.begin(), board.end(), [&](const std::vector<char>& r) { return r[col - (&r - &board[0]) - 1] == first; }))
		return first;
	return ' '; // 没有赢家
}