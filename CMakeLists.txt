cmake_minimum_required(VERSION 3.30.5)
project(Leetcode150)

set(CMAKE_CXX_STANDARD 20)

add_executable(Leetcode150 main.cpp
        Product_of_Array_ExceptSelf.cpp
        util.h
        Gas_Station.cpp
        MergeSortedArrays.cpp
        RemoveElement.cpp
        RemoveDuplicates_from_SortedArray1.cpp
        RemoveDuplicates_from_SortedArray2.cpp
        MajorityElement.cpp
        RotateArray.cpp
        StockProblem1.cpp
        StockProblem2.cpp
        JumpGame1.cpp
        JumpGame2.cpp
        H_index.cpp
        IntegerToRoman.cpp)
