#include <Arduino.h>

#include "Watchy_7_SEG.h"
//#include "Watchy_DOS.h"
//#include "Watchy_MacPaint.h"
//#include "Watchy_Pokemon.h"
#include "settings.h"

Watchy7SEG watchy(settings);
//WatchyDOS watchy(settings);
//WatchyMacPaint watchy(settings);
//WatchyPokemon watchy(settings);

void setup() {
  watchy.init();
}

void loop() {}