#ifndef MAZEGENERATOR_HPP
#define MAZEGENERATOR_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>

using namespace std;

extern const int MAZE_WIDTH;
extern const int MAZE_HEIGHT;

extern int dx[];
extern int dy[];

void initializeMaze(vector<vector<char>>& maze);

bool isInBounds(int x, int y);

void generateMaze(int x, int y, vector<vector<char>>& maze);

void printMaze(const vector<vector<char>>& maze);

#endif 