COMP = g++
TARGET = defuse
CFLAGS = -o $(TARGET)
SRCS = $(wildcard initialize/*.cpp)

build: mainDriver.cpp $(SRCS)
	$(COMP) mainDriver.cpp $(SRCS) $(CFLAGS)

run: build
	./$(TARGET)

clean: $(TARGET)
	rm $(TARGET)