
#include <stdio.h>
#include "pico/stdlib.h"



int main() {

  gpio_init(2);
  gpio_init(25);

  gpio_set_dir(2,false);
  gpio_set_dir(25, true);

  while(true) {  /*  el while(true) siempre va*/

    char val=gpio_get(2);  //tomo valor del pulsador

    if (val==true) {

      char mir=gpio_get(25);  //tomo valor del led

      gpio_put(25,!mir);   //gpio_put es para encender o apaga un led y poniendo !mir, que es el valor del led, digo que quiero el contrario del valor actual.

      
    }

    sleep_ms(500);   //delay
  }
}
