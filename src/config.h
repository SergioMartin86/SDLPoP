/*
SDLPoP, a port/conversion of the DOS game Prince of Persia.
Copyright (C) 2013-2020  Dávid Nagy

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.

The authors of this program may be contacted at https://forum.princed.org
*/

#ifndef CONFIG_H
#define CONFIG_H

// WINDOWS overrides
#ifdef _MSC_VER
#define strncasecmp _strnicmp
#define strcasecmp _stricmp
#endif

#define POP_MAX_PATH 256
#define POP_MAX_OPTIONS_SIZE 256

#define SDLPOP_VERSION "1.21"
#define WINDOW_TITLE "Prince of Persia (SDLPoP) v" SDLPOP_VERSION


// Enable quicksave/load feature.
#define USE_QUICKSAVE

// Try to let time keep running out when quickloading. (similar to Ctrl+A)
// Technically, the 'remaining time' is still restored, but with a penalty for elapsed time (up to 1 minute).
// The one minute penalty will also be applied when quickloading from e.g. the title screen.
#define USE_QUICKLOAD_PENALTY

#ifdef USE_QUICKSAVE // Replay relies on quicksave, because the replay file begins with a quicksave of the initial state.

// Enable recording/replay feature.
#define USE_REPLAY

#endif

// Default SDL_Joystick button values
#define SDL_JOYSTICK_BUTTON_Y 2
#define SDL_JOYSTICK_BUTTON_X 3
#define SDL_JOYSTICK_X_AXIS 0
#define SDL_JOYSTICK_Y_AXIS 1

#endif
