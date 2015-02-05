OBJECTS = Game.o
LDLIBS = -lsfml-graphics -lsfml-window -lsfml-system
CPPFLAGS = -I include

vpath %.hpp include
vpath %.cpp src

main: $(OBJECTS) $(LDLIBS)

clean:
	rm -rf *.o main