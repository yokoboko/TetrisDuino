#ifndef SPLASH_H
#define SPLASH_H

#include "sound.h"

boolean splashSoundPlayed = false;
uint8_t splashShowFramesCount = 0;

void stateSplash() {
  if (!splashSoundPlayed && splashShowFramesCount > 1) {
    splashSoundPlayed = true;
    soundSplash();
  }
  if (splashShowFramesCount <= 22) {
    display.drawBitmap(9, 30, SPLASH, SPLASH_WIDTH, SPLASH_HEIGHT, 1, 0);
  }
  if (splashShowFramesCount >= 30) {
    gameState = STATE_HOME;
  } else {
    splashShowFramesCount++;
  }
};

#endif
