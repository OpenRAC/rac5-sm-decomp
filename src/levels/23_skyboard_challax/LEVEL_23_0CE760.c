/* LEVEL_23:0x0CE760 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_001D9B2C;
extern int D_001D9B4C;
extern Ent D_001D9B50[];
extern int D_001D9B34;
extern unsigned short D_001D9B28;
extern int D_001D9B40;
extern int D_002FE5A0;
extern int D_002FE5B8;
extern void func_0C0E50(int);
extern void func_09CFF0(int *);
extern void func_09FBF0(int, int);
extern void func_0A56A8(int, int, int, int, unsigned int, float);
extern void func_09FA10(unsigned int);
extern void func_0A2270(int *);
extern void func_0A5478(int, L *, float);
extern int func_09F3F0(L *);
extern void func_0A17B8(int, int, int, float, float);
void func_0CE760(void)
{
    L l;
    float z;
    if (D_001D9B2C) {
        func_0C0E50(0x14);
        z = 0.0f;
        func_09CFF0(&D_002FE5A0);
        func_09FBF0(2, 0);
        func_0A56A8(D_001D9B50[D_001D9B4C].a, 0xEF, 0x87, D_001D9B50[D_001D9B4C].b, 0xFFFFFFFF, z);
        func_09FA10(0xFFFFFFFF);
        func_0A2270(&D_002FE5B8);
        if (!D_001D9B34) {
            func_0A5478(D_001D9B50[D_001D9B4C].e, &l, z);
            func_0A17B8((short)func_09F3F0(&l), (short)(l.h + D_001D9B28), D_001D9B40, 0.9f, 0.9f);
        }
    }
}
