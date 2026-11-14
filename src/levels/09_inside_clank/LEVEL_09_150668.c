/* LEVEL_09:0x150668 -- placement copy of LEVEL_01_159010.c: adds the global offset to a nonzero first field of the object's link record and returns 1. */
typedef struct {
    int w00;
} Link;

typedef struct {
    char pad00[0x54];
    Link *link;
} Obj;

extern int D_001F0894;

int func_150668(Obj *o)
{
    Link *l = o->link;

    if (l->w00 != 0) {
        l->w00 = D_001F0894 + l->w00;
    }
    return 1;
}
