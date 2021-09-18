FROM ubuntu:20.04
COPY . /app
WORKDIR /app
RUN apt install libev-dev
RUN mkdir /app/build && cd /app/build && cmake .. && make
