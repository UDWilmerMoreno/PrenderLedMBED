#include <mbed.h>

DigitalOut Rojo(LED1);
DigitalOut Verde(LED2);
DigitalOut Azul(LED3);

int main() {
    while(true) {
        Rojo = 0;
        Verde = 1;
        Azul = 1;
        wait(1);
        Rojo = 1;
        Verde = 0;
        Azul = 1;
        wait(1);
        Rojo = 1;
        Verde = 1;
        Azul = 0;
        wait(1);
    }
}