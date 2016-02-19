SOURCES := \
  2dclip.cpp \
  clip_ssectors.cpp \
  convert.cpp \
  dumpmap.cpp \
  progress.cpp \
  stdafx.cpp \
  subtract_ssectors.cpp \
  things.cpp \
  wad2map.cpp \
  wadentries.cpp \
  wadfile.cpp \
  $(NULL)
OBJS := $(SOURCES:.cpp=.o)

CXXFLAGS := -g -O2

BIN := wad2map

$(BIN): $(OBJS)
	$(CXX) -o $@ $^

clean:
	rm -f $(BIN) $(OBJS)
