# Compiler and compiler flags
CXX = g++
CXXFLAGS = -std=c++11
LDFLAGS = -lfmt

# Define the source file and the output executable name
SOURCES = app/main.cpp
TARGET = app_executable

# Default target
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET) $(LDFLAGS)

# Clean target to remove the built executable
clean:
	rm -f $(TARGET)
