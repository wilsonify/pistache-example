FROM alpine as builder
RUN mkdir -p /usr/src/app
COPY . /usr/src/app
WORKDIR /usr/src/app
RUN apk update && apk add git g++ make cmake
RUN rm -rf build && \\
mkdir -p build && \\
cd build && \\
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release .. && \\
make && \\
ENTRYPOINT ['api-server']
