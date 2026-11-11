/* LEVEL_19:0x0C6900 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_001B575C;
extern int D_001B577C;
extern Ent D_001B5780[];
extern int D_001B5764;
extern unsigned short D_001B5758;
extern int D_001B5770;
extern int D_0027B360;
extern int D_0027B378;
extern void func_0B8CB8(int);
extern void func_094CA8(int *);
extern void func_096DD0(int, int);
extern void func_09C8B8(int, int, int, int, unsigned int, float);
extern void func_096BF0(unsigned int);
extern void func_099480(int *);
extern void func_09C688(int, L *, float);
extern int func_0965A0(L *);
extern void func_0989C8(int, int, int, float, float);
void func_0C6900(void)
{
    L l;
    float z;
    if (D_001B575C) {
        func_0B8CB8(0x14);
        z = 0.0f;
        func_094CA8(&D_0027B360);
        func_096DD0(2, 0);
        func_09C8B8(D_001B5780[D_001B577C].a, 0xEF, 0x87, D_001B5780[D_001B577C].b, 0xFFFFFFFF, z);
        func_096BF0(0xFFFFFFFF);
        func_099480(&D_0027B378);
        if (!D_001B5764) {
            func_09C688(D_001B5780[D_001B577C].e, &l, z);
            func_0989C8((short)func_0965A0(&l), (short)(l.h + D_001B5758), D_001B5770, 0.9f, 0.9f);
        }
    }
}
