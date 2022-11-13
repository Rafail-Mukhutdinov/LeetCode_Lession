# напишите CMakeLists.txt для сборки трёх программ
# он должен иметь три цели: hmirror, vmirror и sobel

cmake_minimum_required(VERSION 3.20)

project(CONTROL_BOOK CXX)
set(CMAKE_CXX_STANDARD 20)


set(CONTROL_BOOK_FILE  "main.cpp")
# воспользуйтесь этой переменной при создании цели


add_executable("Control_Book" ${CONTROL_BOOK_FILE}) 