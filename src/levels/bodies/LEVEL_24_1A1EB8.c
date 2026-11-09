/* LEVEL_24:0x1A1EB8 -- placement copy of LEVEL_03_1E2150.c: combines a masked word with a table entry shifted into the high half, then stores the helper result. */

struct Obj {
    unsigned char pad0[0x34];
    unsigned int f34;
    unsigned int f38;
    unsigned char pad1[0x20];
    unsigned int f5C;
};

extern unsigned int D_00263C80[];

unsigned int func_1B5528(unsigned int v);

void func_1A1EB8(struct Obj *o)
{
    unsigned int lo;
    unsigned int hi;

    lo = o->f38 & 0xF800FFFF;
    hi = D_00263C80[o->f34] << 16;
    o->f5C = func_1B5528(lo | hi);
}
