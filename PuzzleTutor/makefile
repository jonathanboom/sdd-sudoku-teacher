SOURCES    = tester.m Puzzle.m PuzzleMaker.m PuzzleUnitTests.m PuzzleMakerUnitTests.m
OUTFILE    = test

CC         = clang
FRAMEWORKS = -framework Foundation
LIBS       = -lobjc
CFLAGS     = -Wall
OUT        = -o $(OUTFILE)

GNUCC      = gcc
GNUHEADS   = -I/c/GNUstep/GNUstep/System/Library/Headers
GNULIBS    = -L/c/GNUstep/GNUstep/System/Library/Libraries -lgnustep-base
GNUCFLAGS  = $(CFLAGS) -fconstant-string-class=NSConstantString -std=c99 -fobjc-exceptions
WINOUT     = $(OUT).exe

FLAGS      = $(CFLAGS) $(FRAMEWORKS) $(LIBS)
GNUFLAGS   = $(GNUHEADS) $(GNULIBS) $(GNUFRAMES) $(GNUCFLAGS) $(LIBS)

all:
	$(CC) $(SOURCES) $(OUT) $(FLAGS)

windows:
	$(GNUCC) $(SOURCES) $(WINOUT) $(GNUFLAGS)

linux:
	$(CC) $(SOURCES) $(OUT) $(GNUFLAGS)

clean:
	rm -f $(OUTFILE) $(OUTFILE).exe
