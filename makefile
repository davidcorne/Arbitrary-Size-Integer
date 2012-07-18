OBJECTS = ArbitraryInt.o
LIB = ArbitraryInt.lib

CC = g++
CC_OPTIONS = 

utest_ArbitraryInt.exe: utest_ArbitraryInt.cpp $(LIB)
	$(CC) utest_ArbitraryInt.cpp -o utest_ArbitraryInt.exe $(LIB)

$(LIB): $(OBJECTS)
	ar ruvs $(LIB) $(OBJECTS)

ArbitraryInt.o: ArbitraryInt.h ArbitraryInt.cpp
	g++ -c ArbitraryInt.cpp

commit: clean
# new git commit, doesn't work through cygwin
	@git add *; \
	echo "Name this commit"; \
	read name; \
	git commit -m "$$name"; \
	git push -u origin master

clean: FRC
# clean the folder for push back to git/neatness
	rm -f *.o *.lib *.exe *.stackdump *~ \#*\#

FRC:

