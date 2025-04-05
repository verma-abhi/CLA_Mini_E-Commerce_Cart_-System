# Compiler
CXX = clang++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Executable name
TARGET = shopping_cart

# Source files
SRCS = main.cpp Product.cpp CartItem.cpp Discount.cpp ProductCatalog.cpp DiscountManager.cpp ShoppingCart.cpp

# Object files (replace .cpp with .o)
OBJS = $(SRCS:.cpp=.o)

# Default target to build everything
all: $(TARGET)

# Rule to link object files into final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile each .cpp file into .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target to remove build artifacts
clean:
	rm -f $(OBJS) $(TARGET)
