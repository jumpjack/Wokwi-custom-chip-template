// generic Chip v1.0.0 by Jumpjack
// https://docs.wokwi.com/chips-api/getting-started
//
// SPDX-License-Identifier: MIT
// Copyright 2023 jumpjack2

#include "wokwi-api.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  // TODO: Put your chip variables here
} chip_state_t;

void chip_init() {
  chip_state_t *chip = malloc(sizeof(chip_state_t));

  // TODO: Initialize the chip, set up IO pins, create timers, etc.

  printf("Hello from custom Github chip!\n");
}