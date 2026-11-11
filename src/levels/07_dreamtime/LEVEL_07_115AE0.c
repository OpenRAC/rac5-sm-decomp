/* LEVEL_07.REL:0x115AE0 -- tests the point against the six planes of the
   current view volume and returns the face mask. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

typedef struct {
    char pad0[0x34];
    float f_34;
    float f_38;
    float f_3C;
    float f_40;
    float f_44;
    float f_48;
} View;

extern View *D_0021B0A8;

int func_115AE0(Vec *p)
{
    View *g = D_0021B0A8;
    int r = 0;

    if (p->x < g->f_34) r = 1;
    if (p->y < g->f_38) r |= 2;
    if (p->z < g->f_3C) r |= 4;
    if (g->f_40 < p->x) r |= 8;
    if (g->f_44 < p->y) r |= 0x10;
    if (g->f_48 < p->z) r |= 0x20;
    return r;
}
