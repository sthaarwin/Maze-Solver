
# Maze Generator and Solver

This project is a C++ application that generates a random maze and solves it using a depth-first search (DFS) algorithm. The maze is represented as a 2D grid where walls and paths are indicated by different characters.

## Features

- **Maze Generation:** Generates a random maze using a recursive backtracking algorithm.
- **Maze Solving:** Solves the generated maze using a DFS algorithm.
- **Visualization:** Prints the maze before and after solving.

## Getting Started

### Prerequisites

- **g++**: The GNU C++ compiler.
- **CMake**: For managing the build process (if using CMake).

### Building the Project

1. **Clone the Repository**

   ```bash
   git clone https://github.com/sthaarwin/Maze-Solver.git
   cd repository

###Build the Project

If using a simple g++ command:

    ```bash
        g++ src/*.cpp -o output/mazeSolver.exe
        
If using CMake, create a build directory, run CMake, and then build:

bash
Copy code
mkdir build
cd build
cmake ..
cmake --build .
Run the Application

Execute the built application:

bash
Copy code
./output/mazeSolver.exe
File Structure
src/: Contains the source code files.

main.cpp: Entry point of the application. Initializes, generates, solves, and prints the maze.
mazeGenerator.cpp: Contains functions for generating and printing the maze.
mazeSolver.cpp: Contains functions for solving the maze.
mazeGenerator.hpp: Header file for mazeGenerator.cpp.
mazeSolver.hpp: Header file for mazeSolver.cpp.
output/: Directory where the compiled executable is placed.

Usage
Generate a Maze: The maze will be randomly generated when you run the application.

Solve the Maze: The application will attempt to find a path from the start to the end of the maze and mark it.

Contributing
Feel free to fork the repository and submit pull requests for any improvements or bug fixes.