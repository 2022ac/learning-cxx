# 编译器
CXX = g++

# 编译选项
CXXFLAGS = -std=c++11 -Wall -g

# 目标可执行文件
TARGET = main.exe

# 源文件
SRCS = main.cpp MyVector.cpp

# 目标文件
OBJS = $(SRCS:.cpp=.o)

# 默认目标
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 编译源文件生成目标文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 依赖关系
main.o: main.cpp MyVector.h
MyVector.o: MyVector.cpp MyVector.h

# 清理生成的文件
clean:
	del /Q $(OBJS) $(TARGET)

# 运行程序
run: $(TARGET)
	.\$(TARGET)

.PHONY: all clean run
