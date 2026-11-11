/* LEVEL_03:0x0D7718 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_0021EDAC;
extern int D_0021EDCC;
extern Ent D_0021EDD0[];
extern int D_0021EDB4;
extern unsigned short D_0021EDA8;
extern int D_0021EDC0;
extern int D_00347FE0;
extern int D_00347FF8;
extern void func_0C9E00(int);
extern void func_0A6000(int *);
extern void func_0A8C00(int, int);
extern void func_0AE6B8(int, int, int, int, unsigned int, float);
extern void func_0A8A20(unsigned int);
extern void func_0AB280(int *);
extern void func_0AE488(int, L *, float);
extern int func_0A8400(L *);
extern void func_0AA7C8(int, int, int, float, float);
void func_0D7718(void)
{
    L l;
    float z;
    if (D_0021EDAC) {
        func_0C9E00(0x14);
        z = 0.0f;
        func_0A6000(&D_00347FE0);
        func_0A8C00(2, 0);
        func_0AE6B8(D_0021EDD0[D_0021EDCC].a, 0xEF, 0x87, D_0021EDD0[D_0021EDCC].b, 0xFFFFFFFF, z);
        func_0A8A20(0xFFFFFFFF);
        func_0AB280(&D_00347FF8);
        if (!D_0021EDB4) {
            func_0AE488(D_0021EDD0[D_0021EDCC].e, &l, z);
            func_0AA7C8((short)func_0A8400(&l), (short)(l.h + D_0021EDA8), D_0021EDC0, 0.9f, 0.9f);
        }
    }
}
