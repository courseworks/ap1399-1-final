CXX = g++
CXXFLAGS = -std=c++2a -Wall -I h -I /usr/local/include/gtest/ -c
LXXFLAGS = -std=c++2a -Ih -pthread
OBJECTS = ./obj/box.o ./obj/goldbox.o ./obj/mirrorbox.o ./obj/main.o ./obj/apfinal_unittest.o 
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)
./obj/box.o: ./cpp/box.cpp
	$(CXX) $(CXXFLAGS) ./cpp/box.cpp -o ./obj/box.o
./obj/mirrorbox.o: ./cpp/mirrorbox.cpp
	$(CXX) $(CXXFLAGS) ./cpp/mirrorbox.cpp -o ./obj/mirrorbox.o
./obj/goldbox.o: ./cpp/goldbox.cpp
	$(CXX) $(CXXFLAGS) ./cpp/goldbox.cpp -o ./obj/goldbox.o
./obj/apfinal_unittest.o: ./cpp/apfinal_unittest.cpp
	$(CXX) $(CXXFLAGS) ./cpp/apfinal_unittest.cpp -o ./obj/apfinal_unittest.o
./obj/main.o: ./cpp/main.cpp ./h/apfinal.h
	$(CXX) $(CXXFLAGS) ./cpp/main.cpp -o ./obj/main.o
clean:
	rm -fv $(TARGET) $(OBJECTS)
