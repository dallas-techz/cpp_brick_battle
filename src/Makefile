CC = gcc
CXX = g++
ECHO = echo
RM = rm -f

CFLAGS = -Wall -Werror -ggdb
CXXFLAGS = -Wall -Werror -ggdb
LDFLAGS = -lncurses

BIN = bb 	# Bin name here
OBJS = bb.o entities.o # .o files go here

all: $(BIN) etags

$(BIN): $(OBJS)
	@$(ECHO) Linking $@
	@$(CXX) $^ -o $@ $(LDFLAGS)

-include $(OBJS:.o=.d)

%.o: %.c
	@$(ECHO) Compiling $<
	@$(CC) $(CFLAGS) -MMD -MF $*.d -c $<

%.o: %.cpp
	@$(ECHO) Compiling $<
	@$(CXX) $(CXXFLAGS) -MMD -MF $*.d -c $<

.PHONY: clean clobber etags

clean:
	@$(ECHO) Removing all generated files
	@$(RM) *.o $(BIN) *.d TAGS core vgcore.*

clobber: clean
	@$(ECHO) Removing backup files
	@$(RM) *~ \#*

commit: clobber
	git add *
	git commit -m "$(m)"
	git push origin master

etags:
	@$(ECHO) Updating TAGS
	@etags *.[ch]