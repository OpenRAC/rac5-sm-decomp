/* LEVEL_04:0x1EAC38 -- placement copy of LEVEL_01_1D3C50.c: stores a back-reference, then two masked words scaled through a table. */
extern int D_002B25C0[];

struct Src18 {
    char pad0[0x30];
    unsigned int w30;
    unsigned int w34;
    char pad1[0x44 - 0x38];
    unsigned int w44;
    unsigned int w48;
};

struct Dst18 {
    char pad0[0x1C];
    struct Src18 *p1C;
    char pad1[0x30 - 0x20];
    unsigned int w30;
    unsigned int w34;
};

void func_1EAC38(struct Dst18 *a0, struct Src18 *a1)
{
    a0->p1C = a1;
    a0->w30 = (a1->w34 & 0xF800FFFF) | ((unsigned int)D_002B25C0[a1->w30] << 16);
    a0->w34 = (a1->w48 & 0xF800FFFF) | ((unsigned int)D_002B25C0[a1->w44] << 16);
}
