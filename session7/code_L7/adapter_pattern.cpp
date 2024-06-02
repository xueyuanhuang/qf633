#include <iostream>
#include <string>
#include <memory>

using namespace std;

// Legacy Printer (Adaptee)
class LegacyPrinter {
public:
	void printInUppercase(const std::string& text) {
		cout << "Printing: " << text << endl;
	}
};

// Modern Computer (Client)
class ModernComputer {
public:
	void sendCommand(const std::string& command) {
		cout << "Sending command: " << command << endl;
	}
};

// Adapter class to make the LegacyPrinter compatible with ModernComputer
class PrinterAdapter {
private:
	LegacyPrinter legacyPrinter; //default construction

public:
	void sendCommand(const std::string& command) {
		// Convert the command to uppercase and pass it to the LegacyPrinter
		string uppercaseCommand = command;
		for (char& c : uppercaseCommand) {
			c = tolower(c);
		}
		legacyPrinter.printInUppercase(uppercaseCommand);
	}
};

//Essentially, the adapter class converts the lowercase command from the 
//ModernComputer into uppercase and delegates it to the LegacyPrinter.
int main() {
	ModernComputer computer;
	PrinterAdapter adapter; //this will create an object of legacy printer as well

    //share the same interface function sendCommand
	computer.sendCommand("Print this in lowercase");
	adapter.sendCommand("Print this in lowercase (adapted)");

	return 0;
}