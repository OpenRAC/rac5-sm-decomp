/* LEVEL_09:0x1B88B8 -- placement copy of LEVEL_03_1E2150.c: combines a masked word with a table entry shifted into the high half, then stores the helper result. */

struct Obj {
    unsigned char pad0[0x34];
    unsigned int f34;
    unsigned int f38;
    unsigned char pad1[0x20];
    unsigned int f5C;
};

extern unsigned int D_0027F540[];

unsigned int func_1CE6B8(unsigned int v);

void func_1B88B8(struct Obj *o)
{
    unsigned int lo;
    unsigned int hi;

    lo = o->f38 & 0xF800FFFF;
    hi = D_0027F540[o->f34] << 16;
    o->f5C = func_1CE6B8(lo | hi);
}
