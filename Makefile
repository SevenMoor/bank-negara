NAME = output
SRC = Arrival.cpp Bank.cpp Cashier.cpp Client.cpp Departure.cpp Event.cpp main.cpp Queue.cpp SED.cpp Simulation.cpp
CXX = g++
CXXFLAGS = -std=c++0x -Wall
OBJ     = $(SRC:.cpp=.o)
CXXFLAGS  = -Wall
CC        = g++

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all     : $(NAME)

clean   :
	rm -f $(OBJ)