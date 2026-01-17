cmake_minimum_required(VERSION 4.1)
project(Wallet_app)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(.)

add_executable(Wallet_app
        src/main.cpp
        src/transaction.cpp
        include/wallet/transaction.hpp)

target_include_directories(Wallet_app PRIVATE include)
