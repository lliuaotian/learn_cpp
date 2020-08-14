#include <iostream>
#include <cstdio>

using namespace std;

namespace five {
  // 当前行数
  int row = 0;
  // 当前列数
  int col = 0;
  // 棋盘最大行数 x 乘以 x
  unsigned int const CHECKER_BOARD_MAX_LINE = 10;
  // 棋盘 模拟测试版本
  /* int checker_board[CHECKER_BOARD_MAX_LINE][CHECKER_BOARD_MAX_LINE] = { */
  /*   { 4, 1, 1, 1, 1, 1}, */
  /*   { 7, 2, 1, 1, 1, 1}, */
  /*   { 1, 1, 1, 1, 1, 1}, */
  /*   { 1, 1, 1, 1, 1, 1}, */
  /*   { 1, 1, 1, 1, 1, 1}, */
  /* }; */
  // 棋盘 初始化版本
  int checker_board[CHECKER_BOARD_MAX_LINE][CHECKER_BOARD_MAX_LINE] = { 0 };
}

// 判断游戏是否胜利，line为棋盘行数，wincount为连续棋子数量
// add_number 代表每次递增的位置
// play 是玩家id
bool orwin(int row, int col, int play = 1, int wincount = 5) {
  // 创造胜利字符串
  int play_string[five::CHECKER_BOARD_MAX_LINE] = { 0 };
  for (int i = 0; i < wincount; i++) {
    play_string[i] = play;
  }

  int checker_board_string[4][five::CHECKER_BOARD_MAX_LINE] = { 0 };
  // 横
  int i = 0;
  for (i = 0; i < five::CHECKER_BOARD_MAX_LINE; i++) {
    checker_board_string[0][i] = five::checker_board[row][i];
  }
  // 竖
  for (i = 0; i < five::CHECKER_BOARD_MAX_LINE; i++) {
    checker_board_string[1][i] = five::checker_board[i][col];
  }

  // 上边多少行
  int up_line = row;
  // 下边多少行
  int down_line = col;
  int count = 0;
  for (i = (0 - up_line); i <= down_line; i++) {
    if (i < 0) {
      checker_board_string[2][count] = five::checker_board[row + i][col+count+1];
      count += 1;
    } else if (i == 0) {
      checker_board_string[2][count] = five::checker_board[row][col];
      count += 1;
    } else {
      checker_board_string[2][count] = five::checker_board[row + i][(col - i)];
      count += 1;
    }
  }

  down_line = five::CHECKER_BOARD_MAX_LINE - col;
  count = 0;
  for (i = (0 - up_line); i <= down_line; i++) {
    if (i < 0) {
      checker_board_string[3][count] = five::checker_board[row + i][col+i];
      count += 1;
    } else if (i == 0) {
      checker_board_string[3][count] = five::checker_board[row][col];
      count += 1;
    } else {
      checker_board_string[3][count] = five::checker_board[row + i][(col + i)];
      count += 1;
    }
  }

  for (int j = 0; j < 4; j++) {
    for (int i = 0; i < (five::CHECKER_BOARD_MAX_LINE - wincount); i++) {
      // 计数器
      count = 0;
      for (int k = 0; k < wincount; k++) {
        if (checker_board_string[j][k] == play) {
          count += 1;
        }
      }
      if (count == 5) {
        return true;
      }
    }
  }
  return false;
}

// 绘制棋盘
void print_cb() {
  for (int i = 0; i < five::CHECKER_BOARD_MAX_LINE; i++) {
    printf("\t%d", i);
  }
  printf("\n");

  for (int i = 0; i < five::CHECKER_BOARD_MAX_LINE; i++) {
    for (int j = 0; j < five::CHECKER_BOARD_MAX_LINE; ++j) {
      // 还未落子的位置要显示一个特别的字符
      /* if ((five::row - 1) == i and (five::col - 1) == j) { */
      if (j == 0) {
        printf("%d\t", i);
      }
      printf("%d\t", five::checker_board[i][j]); 
    }
    printf("\n\n");
  }
}

  // 处理键盘输入
char get_row_col(int play = 1) {
  char ch;

  printf("当前玩家play(%d):", play);
  cin >> five::row >> five::col;
  if (five::checker_board[five::row][five::col] == 0) {
    five::checker_board[five::row][five::col] = play;
    return ch;
  } else {
    get_row_col(play);
  }

  return ch;
}

int main(int argc, char *argv[]) {
  // 接收键盘输入
  char ch = 0;
  int play_number = 0;
  int play_game[10] = { 1 };
  printf("请输入玩家数量:");
  cin >> play_number;
  for (int i = 1; i <= play_number; i++) {
    play_game[i-1] = i;
  }

  int play_count = 1;
  while (ch != 'q') {
    system("clear");
    print_cb();

    get_row_col(play_count); 
    if (orwin(five::row, five::col, play_count)) {
      printf("play:%d win\n", play_count);
      return 0;
    }
    if (play_count == play_number) {
      play_count = 1;
      continue;
    }
    play_count++;
  }
  

  return 0;
}
