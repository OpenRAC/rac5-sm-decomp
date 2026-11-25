/* LEVEL_17:0x15FB78 -- placement copy of LEVEL_16_165098.c: creates one hash-tagged handle from a global field and two handles with fixed parameters, storing all three into globals. */
typedef struct { char padCC_[0xCC]; int fCC; char padD0[0x1B8]; int f288; int f28C; } Cfg;
extern Cfg D_0023F540;
extern int D_002D69EC;
extern int D_002D69F0;
extern int D_002D69F4;
extern int func_0E8CB8(unsigned int value);
extern int func_1607D0(int a, int b, int c, int d, int e, int f);

void func_15FB78(void)
{
    D_002D69EC = func_0E8CB8((D_0023F540.fCC << 16) | 0xC0001041u);
    D_002D69F0 = func_1607D0(0x10, D_0023F540.f28C, 0, 0, 0, 1);
    D_002D69F4 = func_1607D0(0x10, D_0023F540.f288, 0, 0, 0, 1);
}
