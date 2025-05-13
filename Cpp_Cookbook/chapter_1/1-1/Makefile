# 编译器设置
CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra -I.

# 目录设置
GEORGERINGO_DIR := georgeringo
JOHNPAUL_DIR := johnpaul
HELLOBEATLES_DIR := hellobeatles

# 源文件列表
GEORGERINGO_SRCS := $(GEORGERINGO_DIR)/george.cpp $(GEORGERINGO_DIR)/georgeringo.cpp $(GEORGERINGO_DIR)/ringo.cpp
JOHNPAUL_SRCS := $(JOHNPAUL_DIR)/john.cpp $(JOHNPAUL_DIR)/johnpaul.cpp $(JOHNPAUL_DIR)/paul.cpp
HELLOBEATLES_SRCS := $(HELLOBEATLES_DIR)/hellobeatles.cpp

# 目标文件列表
GEORGERINGO_OBJS := $(GEORGERINGO_SRCS:.cpp=.o)
JOHNPAUL_OBJS := $(JOHNPAUL_SRCS:.cpp=.o)
HELLOBEATLES_OBJS := $(HELLOBEATLES_SRCS:.cpp=.o)

# 最终可执行文件名和路径（放在根目录下）
TARGET := beatles

# 默认目标
all: $(TARGET)

# 链接生成可执行文件
$(TARGET): $(HELLOBEATLES_OBJS) $(JOHNPAUL_OBJS) $(GEORGERINGO_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 通用编译规则：.cpp -> .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理目标
clean:
	rm -f $(TARGET) $(HELLOBEATLES_OBJS) $(JOHNPAUL_OBJS) $(GEORGERINGO_OBJS)

.PHONY: all clean
