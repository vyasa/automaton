/* gfx.h */

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

#ifndef _AUTOMATON_GFX_H_
#define _AUTOMATON_GFX_H_

#include <GL/gl.h>
#include <GL/glu.h>

#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

typedef GLint coord[2];

void create_window( GLsizei w, GLsizei h );

#endif /* gfx.h */
