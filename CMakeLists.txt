cmake_minimum_required(VERSION 3.10)
project(Complete-C-Language)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Basics programs
add_executable(first_program "01-Basics-Of-C/08First-program.c")
add_executable(sum_nums "01-Basics-Of-C/09Sum-of-nums.c")
add_executable(subtraction "01-Basics-Of-C/10 subtraction-of-two-nums.c")
add_executable(leap_year "01-Basics-Of-C/11 isLeapYear.c")
add_executable(simple_interest "01-Basics-Of-C/12 simple-interest.c")
add_executable(area_rectangle "01-Basics-Of-C/13 Area-of-rectangle.c")

# Enable testing
enable_testing()
add_test(NAME first_program COMMAND first_program)
