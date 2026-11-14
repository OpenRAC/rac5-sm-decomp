/* LEVEL_01:0x159010 -- adds the global offset to a nonzero first field of the object's link record and returns 1. */
typedef struct {
    int w00;
} Link;

typedef struct {
    char pad00[0x54];
    Link *link;
} Obj;

extern int D_00206D94;

int func_159010(Obj *o)
{
    Link *l = o->link;

    if (l->w00 != 0) {
        l->w00 = D_00206D94 + l->w00;
    }
    return 1;
}
