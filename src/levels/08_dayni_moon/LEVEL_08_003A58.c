/* LEVEL_08.REL:0x003A58 -- the game copies a 12-byte record (two floats and
   an int) into the shared object, stores two floats in it, sets a bit of
   its 64-bit flag word and clears another one.

   The record copy is one unaligned quadword move (ldl/ldr on the read side,
   sdl/sdr on the write side) plus a word at +8: that is the shape of a
   12-byte aggregate made of two floats and an int. */
typedef struct {
    float f[2];
    int   w;
} Record;

typedef struct {
    char               pad00[0x40];
    unsigned long long flags;
    char               pad48[0x208];
    Record             rec;
    float              f1;
    float              f2;
} Object;

typedef struct {
    Object *obj;
} Holder;

extern Holder D_00237DD4;

void func_003A58(Record *src, int flag, float a, float b)
{
    D_00237DD4.obj->flags |= 0x40000;
    D_00237DD4.obj->rec = *src;
    D_00237DD4.obj->f1 = a;
    D_00237DD4.obj->f2 = b;
    if (flag)
        D_00237DD4.obj->flags &= ~0x20;
}
