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
#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>
#include <GL/gl.h>
#include <GL/glu.h>

static SDL_Surface * screen;

/* Set up an OpenGL capable window with SDL and OpenGL. */
void create_window( GLsizei w, GLsizei h ) {
   if ( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ) {
      fprintf( stderr, "SDL Failed to Initialize: %s\n", SDL_GetError() );
      exit( 1 );
   }

   SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );
   if ( !( screen = SDL_SetVideoMode( w, h, 0, SDL_OPENGL 
                                             | SDL_HWPALETTE 
                                             | SDL_HWSURFACE ) ) ) {
      fprintf( stderr, "SDL Failed to Initialize: %s\n", SDL_GetError() );
      exit( 1 );
   }

   glClearColor( 0.0f, 0.0f, 0.0f, 0.0f );
   glHint( GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST );

   glViewport( 0, 0, w, h );
   glMatrixMode( GL_PROJECTION );
   glLoadIdentity();
   glOrtho( 0, w, h, 0, 0.001, 2 );
   glMatrixMode( GL_MODELVIEW );
   glLoadIdentity();
}
