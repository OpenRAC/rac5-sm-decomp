/* LEVEL_05:0x0D5ED8 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_001F5AAC;
extern int D_001F5ACC;
extern Ent D_001F5AD0[];
extern int D_001F5AB4;
extern unsigned short D_001F5AA8;
extern int D_001F5AC0;
extern int D_00319020;
extern int D_00319038;
extern void func_0C85C0(int);
extern void func_0A4840(int *);
extern void func_0A7440(int, int);
extern void func_0ACEF8(int, int, int, int, unsigned int, float);
extern void func_0A7260(unsigned int);
extern void func_0A9AC0(int *);
extern void func_0ACCC8(int, L *, float);
extern int func_0A6C40(L *);
extern void func_0A9008(int, int, int, float, float);
void func_0D5ED8(void)
{
    L l;
    float z;
    if (D_001F5AAC) {
        func_0C85C0(0x14);
        z = 0.0f;
        func_0A4840(&D_00319020);
        func_0A7440(2, 0);
        func_0ACEF8(D_001F5AD0[D_001F5ACC].a, 0xEF, 0x87, D_001F5AD0[D_001F5ACC].b, 0xFFFFFFFF, z);
        func_0A7260(0xFFFFFFFF);
        func_0A9AC0(&D_00319038);
        if (!D_001F5AB4) {
            func_0ACCC8(D_001F5AD0[D_001F5ACC].e, &l, z);
            func_0A9008((short)func_0A6C40(&l), (short)(l.h + D_001F5AA8), D_001F5AC0, 0.9f, 0.9f);
        }
    }
}
