#include "mazeSolver.hpp"
#include "mazeGenerator.hpp"

bool dfs(vector<vector<char>>& maze, int x, int y, int endX, int endY) {
    if (x < 0 || x >= MAZE_WIDTH || y < 0 || y >= MAZE_HEIGHT || maze[y][x] != '.') {
        return false;
    }

    if (x == endX && y == endY) {
        maze[y][x] = 'E';
        return true;
    }

    maze[y][x] = '*';

    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    for (auto& dir : directions) {
        int newX = x + dir[0];
        int newY = y + dir[1];
        if (dfs(maze, newX, newY, endX, endY)) {
            maze[y][x] = 'P';
            return true;
        }
    }

    return false;
}

bool solveMaze(vector<vector<char>>& maze, int startX, int startY, int endX, int endY) {
    return dfs(maze, startX, startY, endX, endY);
}
