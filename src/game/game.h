#ifndef GISH_GAME_GAME_H
#define GISH_GAME_GAME_H
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

void pan_view(void);
void zoom_view(void);
void get_mouse_coords(float *x, float *y);
void screen_to_world(float x, float y, float *x_out, float *y_out);
void world_to_screen(float x, float y, float *x_out, float *y_out);
void gameloop(void);
void renderlevel(void);
void simulation(void);
void getinputs(void);

typedef enum {
	GAMEEXIT_NONE = 0,
	GAMEEXIT_INGAMEMENU = 1,
	GAMEEXIT_EXITGAME = 2,
	GAMEEXIT_DIED = 3,
	GAMEEXIT_WON = 4,
	GAMEXIT_WARPZONE = 5
} gameexit;

typedef enum
{
    DIFFICULTY_EASY = 0,
	DIFFICULTY_NORMAL = 1,
	DIFFICULTY_HARD = 2,
	DIFFICULTY_LUDICROUS = 3,
	DIFFICULTY_MINI_GISH = 4,
} difficulty;

typedef struct
  {
  float position[3];
  float orientation[3][3];
  float zoom;
  int zoomx;
  int zoomy;
  } _view;

typedef struct
  {
  int pause;
  int framenum;
  int levelnum;
  int bosslevel;
  int dialog;
  int dialogdelay;
  int songnum;
  int currentsongnum;
  int time;
  int score[4];
  int combo;
  int combodelay;
  int totalscore;
  int difficulty;
  int bonus[16];
  int numofbonus[16];
  int scoredelay;
  int startdelay;
  int exitdelay;
  int over;
  int numoflives;
  char text[256];
  gameexit exit;
  int oldschool;
  int oldschoolsound;
  int turbomode;
  int numofplayers;
  int supersize;
  unsigned int simspeed;
  int playreplay;
  int editing;
  int godmode;
  int godparticle;
  } _game;

extern _view view;
extern _game game;

#endif /* GISH_GAME_GAME_H */
