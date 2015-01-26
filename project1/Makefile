LIBS = -lsfml-graphics -lsfml-window -lsfml-system
CPPFLAGS = -I include

vpath %.hpp include
vpath %.cpp src

main: main.o Game.o $(LIBS)
	g++ -o $@ $^
%.o: %.cpp %.hpp

clean:
	rm -rf *.o main