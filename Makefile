CMAKE=cmake
BUILD_DIR=build

all: build run

build:
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && $(CMAKE) ..
run:
	cd $(BUILD_DIR) && make && ./AreaCalculatorApp
clean:
	rm -rf $(BUILD_DIR)

