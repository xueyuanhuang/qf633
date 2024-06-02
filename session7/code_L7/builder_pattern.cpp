#include <iostream>
#include <string>
#include <memory>

using namespace std;

// Product class
class Computer {
public:
	void setCPU(const std::string& cpu) {
		cpu_ = cpu;
	}

	void setMemory(const std::string& memory) {
		memory_ = memory;
	}

	void setStorage(const std::string& storage) {
		storage_ = storage;
	}

	void display() {
		std::cout << "CPU: " << cpu_ << std::endl;
		std::cout << "Memory: " << memory_ << std::endl;
		std::cout << "Storage: " << storage_ << std::endl;
	}

private:
	std::string cpu_;
	std::string memory_;
	std::string storage_;
};

// Builder interface
class ComputerBuilder {
public:
	virtual void buildCPU(const std::string& cpu) = 0;
	virtual void buildMemory(const std::string& memory) = 0;
	virtual void buildStorage(const std::string& storage) = 0;
	virtual Computer getResult() = 0;
};

// Concrete Builder
class DesktopComputerBuilder : public ComputerBuilder {
public:
	DesktopComputerBuilder() {
		computer_ = Computer();
	}

	void buildCPU(const std::string& cpu) override {
		computer_.setCPU(cpu);
	}

	void buildMemory(const std::string& memory) override {
		computer_.setMemory(memory);
	}

	void buildStorage(const std::string& storage) override {
		computer_.setStorage(storage);
	}

	Computer getResult() override {
		return computer_;
	}

private:
	Computer computer_;
};

// Director
class ComputerAssembler {
public:
    /*
    the speficication is proivded in this class.
    imagine the case that for other computer spec,
    the input of cpy type, ram etc can be different
    the builder class no need to change
    */
	Computer assembleComputer(ComputerBuilder& builder) {
		builder.buildCPU("Intel i7 Gen 11th");
		builder.buildMemory("16GB");
		builder.buildStorage("1T SSD");
		return builder.getResult();
	}
};

int main() {
	DesktopComputerBuilder desktopBuilder;
	ComputerAssembler assembler;
	Computer desktop = assembler.assembleComputer(desktopBuilder);

	std::cout << "Desktop Computer Configuration:" << std::endl;
	desktop.display();

	return 0;
}
