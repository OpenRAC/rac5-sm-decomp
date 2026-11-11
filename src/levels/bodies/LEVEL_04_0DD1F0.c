/* LEVEL_04:0x0DD1F0 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_0021FBEC;
extern int D_0021FC0C;
extern Ent D_0021FC10[];
extern int D_0021FBF4;
extern unsigned short D_0021FBE8;
extern int D_0021FC00;
extern int D_00347960;
extern int D_00347978;
extern void func_0CF830(int);
extern void func_0AB490(int *);
extern void func_0AE0D0(int, int);
extern void func_0B3B88(int, int, int, int, unsigned int, float);
extern void func_0ADEF0(unsigned int);
extern void func_0B0750(int *);
extern void func_0B3958(int, L *, float);
extern int func_0AD890(L *);
extern void func_0AFC98(int, int, int, float, float);
void func_0DD1F0(void)
{
    L l;
    float z;
    if (D_0021FBEC) {
        func_0CF830(0x14);
        z = 0.0f;
        func_0AB490(&D_00347960);
        func_0AE0D0(2, 0);
        func_0B3B88(D_0021FC10[D_0021FC0C].a, 0xEF, 0x87, D_0021FC10[D_0021FC0C].b, 0xFFFFFFFF, z);
        func_0ADEF0(0xFFFFFFFF);
        func_0B0750(&D_00347978);
        if (!D_0021FBF4) {
            func_0B3958(D_0021FC10[D_0021FC0C].e, &l, z);
            func_0AFC98((short)func_0AD890(&l), (short)(l.h + D_0021FBE8), D_0021FC00, 0.9f, 0.9f);
        }
    }
}
