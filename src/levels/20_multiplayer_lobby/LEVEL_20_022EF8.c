/* LEVEL_20:0x022EF8 -- placement copy of LEVEL_16_0263F0.c: copies five fields from an indexed source record into a global destination record. */
struct D0263F0 {
    char pad0[0x18];
    int f18;
    int f1C;
    char pad20[0x24 - 0x20];
    int f24;
    float f28;
    char pad2C[0x40 - 0x2C];
    int f40;
};

struct G0263F0D {
    struct D0263F0 *p;
};

struct G0263F0S {
    char *p;
};

extern struct G0263F0D D_00104194;
extern struct G0263F0S D_00104198;

int func_022EF8(int a0, int a1)
{
    int off;
    if ((unsigned int)a0 >= 2) return 0;
    if (a1 == 0) return 0;
    if (D_00104194.p == 0) return 0;
    if (D_00104198.p == 0) return 0;
    off = a0 * 0x5F8;
    D_00104194.p->f28 = *(float *)(D_00104198.p + off + 0x2C);
    D_00104194.p->f24 = *(int *)(D_00104198.p + off + 0x40);
    D_00104194.p->f40 = *(int *)(D_00104198.p + off + 0x44);
    D_00104194.p->f18 = *(int *)(D_00104198.p + off + 0x48);
    D_00104194.p->f1C = *(int *)(D_00104198.p + off + 0x4C);
    return 1;
}
