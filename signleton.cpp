#include <iostream>

class TreasureChest {
private:
    static TreasureChest* instance; // The single instance of the treasure chest
    bool isOpen; // Whether the chest is open or not

    // Private constructor to prevent creating new instances
    TreasureChest() {
        isOpen = false;
    }

public:
    // Method to get the instance of the treasure chest
    static TreasureChest* getInstance() {
        if (!instance) {
            instance = new TreasureChest();
        }
        return instance;
    }

    // Method to open the chest
    void open() {
        if (!isOpen) {
            isOpen = true;
            std::cout << "Congratulations! You opened the treasure chest!" << std::endl;
        } else {
            std::cout << "The treasure chest is already open." << std::endl;
        }
    }

    // Method to close the chest
    void close() {
        if (isOpen) {
            isOpen = false;
            std::cout << "The treasure chest is now closed." << std::endl;
        } else {
            std::cout << "The treasure chest is already closed." << std::endl;
        }
    }
};

// Initializing the static instance variable outside the class
TreasureChest* TreasureChest::instance = nullptr;

int main() {
    // Accessing the treasure chest instance
    TreasureChest* chest = TreasureChest::getInstance();

    // Trying to open the chest
    chest->open();

    // Trying to open the chest again (already open)
    chest->open();

    // Trying to close the chest
    chest->close();

    // Trying to close the chest again (already closed)
    chest->close();

    return 0;
}
