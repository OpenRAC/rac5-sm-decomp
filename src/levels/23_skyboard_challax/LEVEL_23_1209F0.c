/* LEVEL_23:0x1209F0 -- placement copy of LEVEL_01_12F278.c: resolves three cached hashes and resets an object plus its three 0xF8-byte records. */
typedef struct Rec {
    char pad0[0x68];
    unsigned int flags;
    int one;
    short s70;
    short s72;
    short s74;
    char pad1[0x84 - 0x76];
    short s84;
    char pad2[0xA4 - 0x86];
    unsigned char b0;
    unsigned char b1;
    char pad3[0xF8 - 0xA6];
} Rec;

extern int D_001DA32C;
extern int D_001DA330;
extern int D_001DA334;
extern float D_001EAFF8[3];
extern Rec D_00322F20[3];
extern unsigned short D_00269200;
extern int func_11AEE0(int);
extern void *memset(void *, int, unsigned int);

void func_1209F0(char *o)
{
    Rec *r;
    float *pa;
    float *pb;

    if (D_001DA32C == 0)
        D_001DA32C = func_11AEE0(0x09B077B5);
    if (D_001DA330 == 0)
        D_001DA330 = func_11AEE0(0xE2727F03);
    if (D_001DA334 == 0)
        D_001DA334 = func_11AEE0(0x64A0B940);
    *(int *)(o + 0xC0) = 0;
    pa = (float *)(o + 0xA8);
    pb = (float *)(o + 0xB4);
    pa[0] = D_001EAFF8[0];
    pa[1] = D_001EAFF8[1];
    pa[2] = D_001EAFF8[2];
    pb[0] = D_001EAFF8[0];
    pb[1] = D_001EAFF8[1];
    pb[2] = D_001EAFF8[2];
    o[0xC9] = 0;
    o[0xC6] = 0;
    o[0xC7] = 0;
    o[0xC8] = 0;
    *(short *)(o + 0xC4) = -1;

    r = D_00322F20;
    memset(&r[0], 0, sizeof(Rec));
    r[0].one = 1;
    r[0].b1 = 0x12;

    r[0].b0 = 0;
    r[0].s74 = D_00269200;
    r[0].s84 = D_00269200;
    r[0].s70 = 1;
    r[0].flags |= 2;
    memset(&r[1], 0, sizeof(Rec));
    r[1].flags |= 2;
    r[1].one = 1;
    r[1].s74 = D_00269200;
    r[1].s84 = D_00269200;
    r[1].b1 = 0x12;
    r[1].b0 = 1;
    r[1].s70 = 1;

    memset(&r[2], 0, sizeof(Rec));
    r[2].flags |= 6;
    r[2].b1 = 0x12;
    r[2].b0 = 1;
    r[2].one = 1;
    r[2].s70 = 1;
    r[2].s74 = D_00269200;
    r[2].s84 = D_00269200;
}
