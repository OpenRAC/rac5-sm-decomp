/* LEVEL_06:0x0D2230 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_001F562C;
extern int D_001F564C;
extern Ent D_001F5650[];
extern int D_001F5634;
extern unsigned short D_001F5628;
extern int D_001F5640;
extern int D_00319EE0;
extern int D_00319EF8;
extern void func_0C4918(int);
extern void func_0A0A50(int *);
extern void func_0A3650(int, int);
extern void func_0A9108(int, int, int, int, unsigned int, float);
extern void func_0A3470(unsigned int);
extern void func_0A5CD0(int *);
extern void func_0A8ED8(int, L *, float);
extern int func_0A2E50(L *);
extern void func_0A5218(int, int, int, float, float);
void func_0D2230(void)
{
    L l;
    float z;
    if (D_001F562C) {
        func_0C4918(0x14);
        z = 0.0f;
        func_0A0A50(&D_00319EE0);
        func_0A3650(2, 0);
        func_0A9108(D_001F5650[D_001F564C].a, 0xEF, 0x87, D_001F5650[D_001F564C].b, 0xFFFFFFFF, z);
        func_0A3470(0xFFFFFFFF);
        func_0A5CD0(&D_00319EF8);
        if (!D_001F5634) {
            func_0A8ED8(D_001F5650[D_001F564C].e, &l, z);
            func_0A5218((short)func_0A2E50(&l), (short)(l.h + D_001F5628), D_001F5640, 0.9f, 0.9f);
        }
    }
}
