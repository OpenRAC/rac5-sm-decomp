/* LEVEL_08:0x0E2900 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_0024F5EC;
extern int D_0024F60C;
extern Ent D_0024F610[];
extern int D_0024F5F4;
extern unsigned short D_0024F5E8;
extern int D_0024F600;
extern int D_0037C3E0;
extern int D_0037C3F8;
extern void func_0D4F40(int);
extern void func_0B0B78(int *);
extern void func_0B37B8(int, int);
extern void func_0B9270(int, int, int, int, unsigned int, float);
extern void func_0B35D8(unsigned int);
extern void func_0B5E38(int *);
extern void func_0B9040(int, L *, float);
extern int func_0B2F78(L *);
extern void func_0B5380(int, int, int, float, float);
void func_0E2900(void)
{
    L l;
    float z;
    if (D_0024F5EC) {
        func_0D4F40(0x14);
        z = 0.0f;
        func_0B0B78(&D_0037C3E0);
        func_0B37B8(2, 0);
        func_0B9270(D_0024F610[D_0024F60C].a, 0xEF, 0x87, D_0024F610[D_0024F60C].b, 0xFFFFFFFF, z);
        func_0B35D8(0xFFFFFFFF);
        func_0B5E38(&D_0037C3F8);
        if (!D_0024F5F4) {
            func_0B9040(D_0024F610[D_0024F60C].e, &l, z);
            func_0B5380((short)func_0B2F78(&l), (short)(l.h + D_0024F5E8), D_0024F600, 0.9f, 0.9f);
        }
    }
}
