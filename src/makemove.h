// makemove.c

#pragma once

#include "types.h"


int MakeMove(S_BOARD *pos, int move);
void TakeMove(S_BOARD *pos);
void MakeNullMove(S_BOARD *pos);
void TakeNullMove(S_BOARD *pos);