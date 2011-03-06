/* anim.h */
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
