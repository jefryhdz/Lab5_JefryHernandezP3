main:    main.cpp Persona.o air.o Poder.o Fire.o Water.o nonbender.o Ofensivo.o Defensivo.o Curativo.o Invocacion.o Earth.o 
	g++ main.cpp Persona.o air.o Poder.o Fire.o Water.o nonbender.o Ofensivo.o Defensivo.o Curativo.o Invocacion.o Earth.o -o main
main.o:	main.cpp Persona.h air.h Poder.h Fire.h Water.h nonbender.h Ofensivo.h Defensivo.h Curativo.h Invocacion.h Earth.h 
	g++ -c main.cpp
Persona:	Persona.cpp Persona.h
	g++ -c Persona.cppair:	air.cpp air.h
	g++ -c air.cppPoder:	Poder.cpp Poder.h
	g++ -c Poder.cppFire:	Fire.cpp Fire.h
	g++ -c Fire.cppWater:	Water.cpp Water.h
	g++ -c Water.cppnonbender:	nonbender.cpp nonbender.h
	g++ -c nonbender.cppOfensivo:	Ofensivo.cpp Ofensivo.h
	g++ -c Ofensivo.cppDefensivo:	Defensivo.cpp Defensivo.h
	g++ -c Defensivo.cppCurativo:	Curativo.cpp Curativo.h
	g++ -c Curativo.cppInvocacion:	Invocacion.cpp Invocacion.h
	g++ -c Invocacion.cppEarth:	Earth.cpp Earth.h
	g++ -c Earth.cpp
clean:
	rm  *.o main 