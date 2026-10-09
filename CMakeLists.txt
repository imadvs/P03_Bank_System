cmake_minimum_required(VERSION 3.10)
project("P03_Bank System")

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

file(GLOB_RECURSE SOURCES
    include/*.h
)

add_executable(ATMSystem
    src/main.cpp
    ${SOURCES}
        include/Lib/clsString.h
        include/InterfaceCommunication.h
)

target_compile_definitions(ATMSystem PRIVATE
    CLIENTS_FILE_PATH="${CMAKE_SOURCE_DIR}/data/Clients.txt"
    USERS_FILE_PATH="${CMAKE_SOURCE_DIR}/data/Users.txt"
    CURRENCIES_FILE_PATH="${CMAKE_SOURCE_DIR}/data/Currencies.txt"
    LOGIN_REGISTER_FILE_PATH="${CMAKE_SOURCE_DIR}/data/LoginRegister.txt"
    TRANSFER_LOG_FILE_PATH="${CMAKE_SOURCE_DIR}/data/TransferLog.txt"
)