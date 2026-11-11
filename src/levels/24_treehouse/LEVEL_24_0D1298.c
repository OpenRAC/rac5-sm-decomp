/* LEVEL_24:0x0D1298 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_001D73AC;
extern int D_001D73CC;
extern Ent D_001D73D0[];
extern int D_001D73B4;
extern unsigned short D_001D73A8;
extern int D_001D73C0;
extern int D_002F9020;
extern int D_002F9038;
extern void func_0C38E0(int);
extern void func_09FAF8(int *);
extern void func_0A26F8(int, int);
extern void func_0A81B0(int, int, int, int, unsigned int, float);
extern void func_0A2518(unsigned int);
extern void func_0A4D78(int *);
extern void func_0A7F80(int, L *, float);
extern int func_0A1EF8(L *);
extern void func_0A42C0(int, int, int, float, float);
void func_0D1298(void)
{
    L l;
    float z;
    if (D_001D73AC) {
        func_0C38E0(0x14);
        z = 0.0f;
        func_09FAF8(&D_002F9020);
        func_0A26F8(2, 0);
        func_0A81B0(D_001D73D0[D_001D73CC].a, 0xEF, 0x87, D_001D73D0[D_001D73CC].b, 0xFFFFFFFF, z);
        func_0A2518(0xFFFFFFFF);
        func_0A4D78(&D_002F9038);
        if (!D_001D73B4) {
            func_0A7F80(D_001D73D0[D_001D73CC].e, &l, z);
            func_0A42C0((short)func_0A1EF8(&l), (short)(l.h + D_001D73A8), D_001D73C0, 0.9f, 0.9f);
        }
    }
}
