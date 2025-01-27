CXX = g++

CXXFLAGS = -std=c++17 -I/opt/homebrew/Cellar/spdlog/1.15.0_1/include -I/opt/homebrew/Cellar/fmt/11.1.3/include
LDFLAGS = -L/opt/homebrew/Cellar/spdlog/1.15.0_1/lib -L/opt/homebrew/Cellar/fmt/11.1.3/lib -lspdlog -lfmt

TARGET = app

SRC = example.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

clean:
	rm -f $(TARGET)