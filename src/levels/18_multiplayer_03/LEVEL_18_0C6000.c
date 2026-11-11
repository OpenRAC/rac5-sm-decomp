/* LEVEL_18:0x0C6000 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_001B5A5C;
extern int D_001B5A7C;
extern Ent D_001B5A80[];
extern int D_001B5A64;
extern unsigned short D_001B5A58;
extern int D_001B5A70;
extern int D_0027B560;
extern int D_0027B578;
extern void func_0B83B8(int);
extern void func_094428(int *);
extern void func_096550(int, int);
extern void func_09C038(int, int, int, int, unsigned int, float);
extern void func_096370(unsigned int);
extern void func_098C00(int *);
extern void func_09BE08(int, L *, float);
extern int func_095D20(L *);
extern void func_098148(int, int, int, float, float);
void func_0C6000(void)
{
    L l;
    float z;
    if (D_001B5A5C) {
        func_0B83B8(0x14);
        z = 0.0f;
        func_094428(&D_0027B560);
        func_096550(2, 0);
        func_09C038(D_001B5A80[D_001B5A7C].a, 0xEF, 0x87, D_001B5A80[D_001B5A7C].b, 0xFFFFFFFF, z);
        func_096370(0xFFFFFFFF);
        func_098C00(&D_0027B578);
        if (!D_001B5A64) {
            func_09BE08(D_001B5A80[D_001B5A7C].e, &l, z);
            func_098148((short)func_095D20(&l), (short)(l.h + D_001B5A58), D_001B5A70, 0.9f, 0.9f);
        }
    }
}
