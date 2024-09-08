@echo off
setlocal enabledelayedexpansion

REM Create output directory if it doesn't exist
if not exist output mkdir output

REM Initialize file list
set "FILES="

REM Collect all .cpp files
for /r src %%f in (*.cpp) do (
    set "FILES=!FILES! %%f"
)

REM Check if FILES variable is not empty
if not "!FILES!"=="" (
    REM Compile all .cpp files and output to output\mazesolver.exe
    g++ -std=c++11 !FILES! -o output\mazesolver.exe

    echo Build complete. Executable is located in output\mazesolver.exe
) else (
    echo No source files found.
)

endlocal
