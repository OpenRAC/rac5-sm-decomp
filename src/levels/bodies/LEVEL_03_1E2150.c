/* LEVEL_03:0x1E2150 -- combines a masked word with a table entry shifted into the high half, then stores the helper result. */

struct Obj {
    unsigned char pad0[0x34];
    unsigned int f34;
    unsigned int f38;
    unsigned char pad1[0x20];
    unsigned int f5C;
};

extern unsigned int D_002B2C40[];

unsigned int func_1FCEE0(unsigned int v);

void func_1E2150(struct Obj *o)
{
    unsigned int lo;
    unsigned int hi;

    lo = o->f38 & 0xF800FFFF;
    hi = D_002B2C40[o->f34] << 16;
    o->f5C = func_1FCEE0(lo | hi);
}
