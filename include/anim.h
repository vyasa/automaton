/* anim.h */

/*****************************************************************************
 * This file is part of the automaton project.                               *
 * Copyright (C) 2011 Samuel C. Payson, Timothy Kopp,                        *
 *                    Akanksha Vyas,    Mark Platek                          *
 *                                                                           *
 * Automaton is free software: you can redistribute it and/or modify it      *
 * under  the terms of the GNU General Public License as published by the    *
 * Free Software Foundation, either version 3 of the License, or (at your    *
 * option) any later version.                                                *
 *                                                                           *
 * Automata is distributed in the hope that it will be useful, but WITHOUT   *
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or     *
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for *
 * more details.                                                             *
 *                                                                           *
 * You should have received a copy of the GNU General Public License along   *
 * with automaton. If not, see <http://www.gnu.org/licenses/>.               *
 *****************************************************************************/

#ifndef _AUTOMATON_ANIM_H_
#define _AUTOMATON_ANIM_H_

#include "gfx.h"

typedef struct sprite {
   GLuint tex;
   int h_pix, v_pix;
   int h_frames, v_frames;
}sprite;

void spr_draw_frame( sprite * spr, coord loc, coord frame );

#endif /* anim.h */
