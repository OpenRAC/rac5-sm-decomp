/* LEVEL_21:0x0B7F70 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_0015B3AC;
extern int D_0015B3CC;
extern Ent D_0015B3D0[];
extern int D_0015B3B4;
extern unsigned short D_0015B3A8;
extern int D_0015B3C0;
extern int D_002449A0;
extern int D_002449B8;
extern void func_0AA660(int);
extern void func_086B48(int *);
extern void func_089748(int, int);
extern void func_08F200(int, int, int, int, unsigned int, float);
extern void func_089568(unsigned int);
extern void func_08BDC8(int *);
extern void func_08EFD0(int, L *, float);
extern int func_088F48(L *);
extern void func_08B310(int, int, int, float, float);
void func_0B7F70(void)
{
    L l;
    float z;
    if (D_0015B3AC) {
        func_0AA660(0x14);
        z = 0.0f;
        func_086B48(&D_002449A0);
        func_089748(2, 0);
        func_08F200(D_0015B3D0[D_0015B3CC].a, 0xEF, 0x87, D_0015B3D0[D_0015B3CC].b, 0xFFFFFFFF, z);
        func_089568(0xFFFFFFFF);
        func_08BDC8(&D_002449B8);
        if (!D_0015B3B4) {
            func_08EFD0(D_0015B3D0[D_0015B3CC].e, &l, z);
            func_08B310((short)func_088F48(&l), (short)(l.h + D_0015B3A8), D_0015B3C0, 0.9f, 0.9f);
        }
    }
}
