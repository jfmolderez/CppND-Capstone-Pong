all: main
main : main.o ball.o controller.o game.o paddle.o renderer.o
	g++ -F/Library/Frameworks -framework SDL2 -framework SDL2_ttf main.o ball.o controller.o game.o paddle.o renderer.o -o main 
main.o : main.cpp controller.h game.h renderer.h
	g++ -Wall -std=c++17 -I/Library/Frameworks/SDL2.framework/Headers -I/Library/Frameworks/SDL2_ttf.framework/Headers -c main.cpp -o main.o
ball.o : ball.cpp ball.h paddle.h
	g++ -Wall -std=c++17 -c ball.cpp -o ball.o
controller.o : controller.cpp controller.h paddle.h
	g++ -Wall -std=c++17 -I/Library/Frameworks/SDL2.framework/Headers -c controller.cpp -o controller.o
game.o : game.cpp controller.h game.h renderer.h ball.h paddle.h
	g++ -Wall -std=c++17 -I/Library/Frameworks/SDL2.framework/Headers -I/Library/Frameworks/SDL2_ttf.framework/Headers -c game.cpp -o game.o
paddle.o : paddle.cpp paddle.h 
	g++ -Wall -std=c++17 -c paddle.cpp -o paddle.o
renderer.o: renderer.cpp ball.h paddle.h renderer.h 
	g++ -Wall -std=c++17 -I/Library/Frameworks/SDL2.framework/Headers -I/Library/Frameworks/SDL2_ttf.framework/Headers -c renderer.cpp -o renderer.o
clean:
	rm *.o && rm main