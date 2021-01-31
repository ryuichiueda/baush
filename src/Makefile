CXX = g++
TARGET = baush
BINDIR	= /usr/local/bin
CXXFLAGS = -Wall -O3 --static -std=c++17
LDFLAGS = -lm
SRCS := $(wildcard *.cc)
OBJS := $(SRCS:.cc=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(SRCS)
	cp $(TARGET) ../

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)

install: $(TARGET)
	cp $(CURDIR)/$(TARGET) $(BINDIR)/$(TARGET)

uninstall:
	rm $(BINDIR)/$(TARGET) 
