/* LEVEL_17:0x0C6568 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_001A7BDC;
extern int D_001A7BFC;
extern Ent D_001A7C00[];
extern int D_001A7BE4;
extern unsigned short D_001A7BD8;
extern int D_001A7BF0;
extern int D_0026C4E0;
extern int D_0026C4F8;
extern void func_0B8920(int);
extern void func_094910(int *);
extern void func_096A38(int, int);
extern void func_09C520(int, int, int, int, unsigned int, float);
extern void func_096858(unsigned int);
extern void func_0990E8(int *);
extern void func_09C2F0(int, L *, float);
extern int func_096208(L *);
extern void func_098630(int, int, int, float, float);
void func_0C6568(void)
{
    L l;
    float z;
    if (D_001A7BDC) {
        func_0B8920(0x14);
        z = 0.0f;
        func_094910(&D_0026C4E0);
        func_096A38(2, 0);
        func_09C520(D_001A7C00[D_001A7BFC].a, 0xEF, 0x87, D_001A7C00[D_001A7BFC].b, 0xFFFFFFFF, z);
        func_096858(0xFFFFFFFF);
        func_0990E8(&D_0026C4F8);
        if (!D_001A7BE4) {
            func_09C2F0(D_001A7C00[D_001A7BFC].e, &l, z);
            func_098630((short)func_096208(&l), (short)(l.h + D_001A7BD8), D_001A7BF0, 0.9f, 0.9f);
        }
    }
}
