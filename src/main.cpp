#include "mazeGenerator.hpp"
#include "mazeSolver.hpp"

int main() {
    vector<vector<char>> maze(MAZE_HEIGHT, vector<char>(MAZE_WIDTH));
    initializeMaze(maze);
    generateMaze(1, 1, maze);
    cout << "Generated Maze:" << endl;
    printMaze(maze);

    if (solveMaze(maze, 1, 1, MAZE_WIDTH - 2, MAZE_HEIGHT - 2)) {
        cout << "Maze solved!" << endl;
    } else {
        cout << "No solution found." << endl;
    }

    cout << "Solved Maze:" << endl;
    printMaze(maze);

    return 0;
}
