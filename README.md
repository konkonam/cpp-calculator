# C++ Calculator

A rudimentary c++ calculator made from scratch, nothing fancy

## Build

### CMake

Create the project cmake files

`cmake .`

Build the executable(s)

`make` (or `cmake --build .`)

## Run

### CppCalc

Run the calculator

`./build/cppcalc`

## Usage

Enter any 2 whole numbers and a mathematical operator to calculate a result.

Available operators: +, -, *, /

Example inputs: "2 + 3", "21 / 7"

Exit the calculator by typing "exit" into the prompt.

### Known issues

This calculator is only usable for integer math, so when dividing, only numbers that divide to a whole number can be used.