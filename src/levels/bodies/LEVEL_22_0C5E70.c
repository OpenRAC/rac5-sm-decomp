/* LEVEL_22:0x0C5E70 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_00165AAC;
extern int D_00165ACC;
extern Ent D_00165AD0[];
extern int D_00165AB4;
extern unsigned short D_00165AA8;
extern int D_00165AC0;
extern int D_00282D20;
extern int D_00282D38;
extern void func_0B8560(int);
extern void func_094890(int *);
extern void func_097490(int, int);
extern void func_09CF48(int, int, int, int, unsigned int, float);
extern void func_0972B0(unsigned int);
extern void func_099B10(int *);
extern void func_09CD18(int, L *, float);
extern int func_096C90(L *);
extern void func_099058(int, int, int, float, float);
void func_0C5E70(void)
{
    L l;
    float z;
    if (D_00165AAC) {
        func_0B8560(0x14);
        z = 0.0f;
        func_094890(&D_00282D20);
        func_097490(2, 0);
        func_09CF48(D_00165AD0[D_00165ACC].a, 0xEF, 0x87, D_00165AD0[D_00165ACC].b, 0xFFFFFFFF, z);
        func_0972B0(0xFFFFFFFF);
        func_099B10(&D_00282D38);
        if (!D_00165AB4) {
            func_09CD18(D_00165AD0[D_00165ACC].e, &l, z);
            func_099058((short)func_096C90(&l), (short)(l.h + D_00165AA8), D_00165AC0, 0.9f, 0.9f);
        }
    }
}
