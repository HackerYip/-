#pragma once

#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������

void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ����

void player_move(char board[ROW][COL], int row, int col);//�������

void computer_move(char board[ROW][COL], int row, int col);//��������

//�ж���Ӯ�Ĵ���
//���Ӯ --- '*'
//����Ӯ--- '#'
//ƽ��--- 'Q'
//����--- 'C'


char is_win(char board[ROW][COL], int row, int col);