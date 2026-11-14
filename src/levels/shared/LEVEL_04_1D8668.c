/* LEVEL_04:0x1D8668 -- sets the object's float field to 120 and clears five words of its sub-record; returns 1. */
typedef struct {
    char pad0[0xC];
    int w[5];
} Sub;

typedef struct {
    char pad0[0x58];
    Sub *sub;
    char pad5C[0x14];
    float f70;
} Obj;

int func_1D8668(Obj *o)
{
    Sub *s = o->sub;

    o->f70 = 120.0f;
    s->w[1] = 0;
    s->w[2] = 0;
    s->w[3] = 0;
    s->w[4] = 0;
    s->w[0] = 0;
    return 1;
}
