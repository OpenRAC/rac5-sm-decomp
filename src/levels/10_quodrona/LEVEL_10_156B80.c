/* LEVEL_10:0x156B80 -- placement copy of LEVEL_01_159010.c: adds the global offset to a nonzero first field of the object's link record and returns 1. */
typedef struct {
    int w00;
} Link;

typedef struct {
    char pad00[0x54];
    Link *link;
} Obj;

extern int D_0020F9F4;

int func_156B80(Obj *o)
{
    Link *l = o->link;

    if (l->w00 != 0) {
        l->w00 = D_0020F9F4 + l->w00;
    }
    return 1;
}
