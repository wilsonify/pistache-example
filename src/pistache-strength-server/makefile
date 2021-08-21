
build_dir:
	mkdir -p build

dist_dir:
	mkdir -p dist

exe: build_dir
	cd build && cmake .. && make

server:
	cd build && ./api-server