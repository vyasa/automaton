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

#include <stdio.h>

#include <unistd.h>

#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

#include "gfx.h"

int main( int argc, char * argv[] ) {
   create_window( 640 , 480 );
   glTranslatef( 0.0, 0.0, -0.5 );
   glBegin( GL_TRIANGLES );

      glVertex2i( 320, 400 );
      glVertex2i( 220, 300 );
      glVertex2i( 420, 300 );

   glEnd();
   SDL_GL_SwapBuffers();
   sleep( 5 );
   return 0;
}
