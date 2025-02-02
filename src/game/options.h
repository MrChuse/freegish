#ifndef GISH_GAME_OPTIONS_H
#define GISH_GAME_OPTIONS_H
/*
Copyright (C) 2005, 2010 - Cryptic Sea

This file is part of Gish.

Gish is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#include "../input/keyboard.h"

#define CONTROLS_LENGTH 4
#define PRESETS_LENGTH 16

void optionsmenu(void);
void load_datapack(void);
void videooptionsmenu(void);
void drawsliderbars(void);

typedef enum {
	KEYALIAS_LEFT = 0,
	KEYALIAS_RIGHT = 1,
	KEYALIAS_DOWN = 2,
	KEYALIAS_UP = 3,
	KEYALIAS_STICK = 4,
	KEYALIAS_JUMP = 5,
	KEYALIAS_SLIDE = 6,
	KEYALIAS_HEAVY = 7,
	KEYALIAS_START_PAUSE = 8,
	KEYALIAS_LAST = KEYALIAS_START_PAUSE,
	KEYALIAS_LENGTH = KEYALIAS_LAST+1
} keyalias;

typedef struct
  {
  int sound;
  int music;
  float soundvolume;
  float musicvolume;
  } _option;


typedef struct
  {
  char name[32];
  keyboardkey key[KEYALIAS_LENGTH];
  int joysticknum;
  int axis[4];
  int button[16];
  } _control;

extern _option option;
extern _control control[CONTROLS_LENGTH];
extern _control keyboardpresets[PRESETS_LENGTH];
extern _control joystickpresets[PRESETS_LENGTH];
extern int numkeyboardpresets;
extern int numjoystickpresets;

extern int versus_numplayers;
extern int versus_is_joystick[4];
extern int versus_presets[4];

extern char datapacks_folder[32];
extern char loaded_datapack[32];

#endif /* GISH_GAME_OPTIONS_H */
