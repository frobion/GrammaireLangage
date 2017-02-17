cmake_minimum_required(VERSION 2.8)

project(GrammaireLangage)
add_executable(${PROJECT_NAME} "Sources/main.cpp" Sources/Automate.cpp Sources/Automate.h Sources/Lexer.cpp Sources/Lexer.h Sources/Symbol.cpp Sources/Symbol.h Sources/State.cpp Sources/State.h Sources/Multiplication.cpp Sources/Multiplication.h Sources/Plus.cpp Sources/Plus.h Sources/OpenBracket.cpp Sources/OpenBracket.h Sources/CloseBracket.cpp Sources/CloseBracket.h Sources/Expression.cpp Sources/Expression.h)
