/* LEVEL_02:0x0DE2C0 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_0021B6EC;
extern int D_0021B70C;
extern Ent D_0021B710[];
extern int D_0021B6F4;
extern unsigned short D_0021B6E8;
extern int D_0021B700;
extern int D_00344660;
extern int D_00344678;
extern void func_0D0928(int);
extern void func_0ACB90(int *);
extern void func_0AF790(int, int);
extern void func_0B5248(int, int, int, int, unsigned int, float);
extern void func_0AF5B0(unsigned int);
extern void func_0B1E10(int *);
extern void func_0B5018(int, L *, float);
extern int func_0AEF90(L *);
extern void func_0B1358(int, int, int, float, float);
void func_0DE2C0(void)
{
    L l;
    float z;
    if (D_0021B6EC) {
        func_0D0928(0x14);
        z = 0.0f;
        func_0ACB90(&D_00344660);
        func_0AF790(2, 0);
        func_0B5248(D_0021B710[D_0021B70C].a, 0xEF, 0x87, D_0021B710[D_0021B70C].b, 0xFFFFFFFF, z);
        func_0AF5B0(0xFFFFFFFF);
        func_0B1E10(&D_00344678);
        if (!D_0021B6F4) {
            func_0B5018(D_0021B710[D_0021B70C].e, &l, z);
            func_0B1358((short)func_0AEF90(&l), (short)(l.h + D_0021B6E8), D_0021B700, 0.9f, 0.9f);
        }
    }
}
