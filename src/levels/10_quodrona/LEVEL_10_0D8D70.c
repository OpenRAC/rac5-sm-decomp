/* LEVEL_10:0x0D8D70 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_0020F72C;
extern int D_0020F74C;
extern Ent D_0020F750[];
extern int D_0020F734;
extern unsigned short D_0020F728;
extern int D_0020F740;
extern int D_00336560;
extern int D_00336578;
extern void func_0CB458(int);
extern void func_0A7398(int *);
extern void func_0A9F98(int, int);
extern void func_0AFA50(int, int, int, int, unsigned int, float);
extern void func_0A9DB8(unsigned int);
extern void func_0AC618(int *);
extern void func_0AF820(int, L *, float);
extern int func_0A9798(L *);
extern void func_0ABB60(int, int, int, float, float);
void func_0D8D70(void)
{
    L l;
    float z;
    if (D_0020F72C) {
        func_0CB458(0x14);
        z = 0.0f;
        func_0A7398(&D_00336560);
        func_0A9F98(2, 0);
        func_0AFA50(D_0020F750[D_0020F74C].a, 0xEF, 0x87, D_0020F750[D_0020F74C].b, 0xFFFFFFFF, z);
        func_0A9DB8(0xFFFFFFFF);
        func_0AC618(&D_00336578);
        if (!D_0020F734) {
            func_0AF820(D_0020F750[D_0020F74C].e, &l, z);
            func_0ABB60((short)func_0A9798(&l), (short)(l.h + D_0020F728), D_0020F740, 0.9f, 0.9f);
        }
    }
}
