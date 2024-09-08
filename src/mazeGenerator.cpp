#include "mazeGenerator.hpp"

const int MAZE_WIDTH = 21;
const int MAZE_HEIGHT = 21;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

void initializeMaze(vector<vector<char>>& maze) {
    for (int i = 0; i < MAZE_HEIGHT; ++i) {
        for (int j = 0; j < MAZE_WIDTH; ++j) {
            maze[i][j] = '#'; 
        }
    }
}

bool isInBounds(int x, int y) {
    return (x > 0 && x < MAZE_WIDTH - 1 && y > 0 && y < MAZE_HEIGHT - 1);
}

void generateMaze(int x, int y, vector<vector<char>>& maze) {
    maze[y][x] = '.';
    
    vector<int> directions = {0, 1, 2, 3};
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(directions.begin(), directions.end(), g);
    
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[directions[i]] * 2;
        int ny = y + dy[directions[i]] * 2;
        
        if (isInBounds(nx, ny) && maze[ny][nx] == '#') {
            maze[y + dy[directions[i]]][x + dx[directions[i]]] = '.';
            generateMaze(nx, ny, maze);
        }
    }
}

void printMaze(const vector<vector<char>>& maze) {
    for (int i = 0; i < MAZE_HEIGHT; ++i) {
        for (int j = 0; j < MAZE_WIDTH; ++j) {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
}
