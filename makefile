tailfib: tailfib.cpp
	g++ -Wall -std=c++11 -o tailfib tailfib.cpp

clean: tailfib.cpp
	rm tailfib
	g++ -Wall -std=c++11 -o tailfib tailfib.cpp
