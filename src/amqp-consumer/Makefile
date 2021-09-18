CPP = g++
CPPFLAGS = -Wall -c -I. -O2 -flto -std=c++11 -g
LD = g++
LDFLAGS = 
RESULT = a.out
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:%.cpp=%.o)

all:	${OBJECTS} ${RESULT}

${RESULT}: ${OBJECTS}
	${LD} -o $@ ${OBJECTS} ${LDFLAGS} -I external -I external/amqpcpp -I external/amqpcpp/linux_tcp -I /usr/include -L external

clean:
	${RM} *.obj *~* ${OBJECTS} ${RESULT}

${OBJECTS}:
	${CPP} ${CPPFLAGS} -o $@ ${@:%.o=%.cpp} -I external -I external/amqpcpp -I external/amqpcpp/linux_tcp -L external

