#include <mbed.h>
#include "Arduino_menu.h"

void setup() {
    setupMenu();

}

int main() {
    setup();
    while(1) {
        taskManager.runLoop();
    }
}



void CALLBACK_FUNCTION Open_Door_or_Gate(int id) {
    // TODO - your menu change code
}
