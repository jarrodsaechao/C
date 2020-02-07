CC = g++
exe_file = zoo_typhoon.o
$(exe_file): zoo_typhoon.o
	$(CC) zoo_typhoon.o $(exe_file)
zoo_typhoon.o: seaotters.cpp meekrat.cpp monkey.cpp animal.cpp zoo.cpp main.cpp
	$(CC) -c seaotters.cpp meekrat.cpp monkey.cpp animal.cpp zoo.cpp main.cpp
