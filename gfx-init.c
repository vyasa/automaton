#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>
#include <GL/gl.h>
#include <GL/glu.h>

SDL_Surface * screen;

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

   GLfloat r = ( GLfloat ) w / ( GLfloat ) ( h ? h : 1 );
   glViewport( 0, 0, w, h );
   glMatrixMode( GL_PROJECTION );
   glLoadIdentity();
   gluPerspective( 45.0f, r, 0.1f, 100.0f );
   glMatrixMode( GL_MODELVIEW );
   glLoadIdentity();
}
