/* LEVEL_16:0x0C7028 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_001B45DC;
extern int D_001B45FC;
extern Ent D_001B4600[];
extern int D_001B45E4;
extern unsigned short D_001B45D8;
extern int D_001B45F0;
extern int D_0027B1E0;
extern int D_0027B1F8;
extern void func_0B93E0(int);
extern void func_095418(int *);
extern void func_097540(int, int);
extern void func_09D028(int, int, int, int, unsigned int, float);
extern void func_097360(unsigned int);
extern void func_099BF0(int *);
extern void func_09CDF8(int, L *, float);
extern int func_096D10(L *);
extern void func_099138(int, int, int, float, float);
void func_0C7028(void)
{
    L l;
    float z;
    if (D_001B45DC) {
        func_0B93E0(0x14);
        z = 0.0f;
        func_095418(&D_0027B1E0);
        func_097540(2, 0);
        func_09D028(D_001B4600[D_001B45FC].a, 0xEF, 0x87, D_001B4600[D_001B45FC].b, 0xFFFFFFFF, z);
        func_097360(0xFFFFFFFF);
        func_099BF0(&D_0027B1F8);
        if (!D_001B45E4) {
            func_09CDF8(D_001B4600[D_001B45FC].e, &l, z);
            func_099138((short)func_096D10(&l), (short)(l.h + D_001B45D8), D_001B45F0, 0.9f, 0.9f);
        }
    }
}
