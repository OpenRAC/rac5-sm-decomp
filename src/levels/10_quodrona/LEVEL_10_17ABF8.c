/* LEVEL_10:0x17ABF8 -- placement copy of LEVEL_03_178640.c: packs a field from one block into a helper call, stores the result in a second block, then repeats for a second field. */

unsigned int func_0FC440(unsigned int a0);
unsigned int func_1EE1F0(unsigned int a0);

struct Blk {
    unsigned char pad000[0x14C];
    unsigned int w14C;
    unsigned char pad150[0x164 - 0x150];
    unsigned int w164;
};

struct Out {
    unsigned char pad00[0x18];
    unsigned int w18;
    unsigned int w1C;
};

extern struct Blk D_002A11C0;
extern struct Out D_0039F330;

void func_17ABF8(void)
{
    struct Blk *s0;
    struct Out *s1;
    unsigned int r;

    s0 = &D_002A11C0;
    r = func_0FC440((s0->w14C << 16) | 0x80001045);
    s1 = &D_0039F330;
    s1->w18 = r;
    r = func_1EE1F0((s0->w164 << 16) | 0x80001044);
    s1->w1C = r;
}
