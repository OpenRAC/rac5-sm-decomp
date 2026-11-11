/* LEVEL_09:0x0D4BE0 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_001F052C;
extern int D_001F054C;
extern Ent D_001F0550[];
extern int D_001F0534;
extern unsigned short D_001F0528;
extern int D_001F0540;
extern int D_003148E0;
extern int D_003148F8;
extern void func_0C72C8(int);
extern void func_0A3530(int *);
extern void func_0A6130(int, int);
extern void func_0ABBE8(int, int, int, int, unsigned int, float);
extern void func_0A5F50(unsigned int);
extern void func_0A87B0(int *);
extern void func_0AB9B8(int, L *, float);
extern int func_0A5930(L *);
extern void func_0A7CF8(int, int, int, float, float);
void func_0D4BE0(void)
{
    L l;
    float z;
    if (D_001F052C) {
        func_0C72C8(0x14);
        z = 0.0f;
        func_0A3530(&D_003148E0);
        func_0A6130(2, 0);
        func_0ABBE8(D_001F0550[D_001F054C].a, 0xEF, 0x87, D_001F0550[D_001F054C].b, 0xFFFFFFFF, z);
        func_0A5F50(0xFFFFFFFF);
        func_0A87B0(&D_003148F8);
        if (!D_001F0534) {
            func_0AB9B8(D_001F0550[D_001F054C].e, &l, z);
            func_0A7CF8((short)func_0A5930(&l), (short)(l.h + D_001F0528), D_001F0540, 0.9f, 0.9f);
        }
    }
}
