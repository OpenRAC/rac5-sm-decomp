/* LEVEL_08:0x2114A8 -- placement copy of LEVEL_03_1E2150.c: combines a masked word with a table entry shifted into the high half, then stores the helper result. */

struct Obj {
    unsigned char pad0[0x34];
    unsigned int f34;
    unsigned int f38;
    unsigned char pad1[0x20];
    unsigned int f5C;
};

extern unsigned int D_002E7040[];

unsigned int func_2296F8(unsigned int v);

void func_2114A8(struct Obj *o)
{
    unsigned int lo;
    unsigned int hi;

    lo = o->f38 & 0xF800FFFF;
    hi = D_002E7040[o->f34] << 16;
    o->f5C = func_2296F8(lo | hi);
}
