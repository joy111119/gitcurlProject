APPNAME = app
OBJ = main.o sendData.o

$(APPNAME): $(OBJ)
	gcc -o $(APPNAME) $(OBJ) -LC:\curl\lib -lcurl

main.o: main.c
	gcc -c main.c -IC:\curl\include

sendData.o: sendData.c
	gcc -c sendData.c -IC:\curl\include

clean:
	del $(APPNAME).exe $(OBJ)