/* LEVEL_05:0x0B8438 -- placement copy of LEVEL_01_0B9E90.c: sets up the object's two ranges from the 16-bit arguments: the interpolation start/end, the step count from the helper and the derived position, then the fixed mode fields. */
typedef struct Obj {
    char pad0[0x50];
    int w50;
    int w54;
    int w58;
    int w5C;
    char pad60[0x20];
    int w80;
    int w84;
    int w88;
    int w8C;
    int w90;
    int w94;
    int w98;
    unsigned char b9C;
    char pad9D[3];
    int wA0;
} Obj;

extern int func_0B82B8(Obj *o);

int func_0B8438(Obj *o, short a1, short a2, short a3, short a4)
{
    int steps;
    int t;

    o->w54 = a4;
    o->w50 = a2;
    o->w5C = a3;
    o->w80 = a2;
    o->w58 = a1;
    steps = func_0B82B8(o);
    t = func_0B82B8(o);
    o->w84 = (a4 - a2) / steps * t + a2;
    o->wA0 = 3;
    o->w8C = a4;
    o->w98 = 2;
    o->w88 = a2;
    o->b9C = 0;
    o->w94 = a3;
    o->w90 = a3 - 0x10;
    return 1;
}
