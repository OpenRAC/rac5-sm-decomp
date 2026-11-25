/* LEVEL_18:0x16C1E8 -- placement copy of LEVEL_16_165098.c: creates one hash-tagged handle from a global field and two handles with fixed parameters, storing all three into globals. */
typedef struct { char padCC_[0xCC]; int fCC; char padD0[0x1B8]; int f288; int f28C; } Cfg;
extern Cfg D_0024E5C0;
extern int D_002E5844;
extern int D_002E5848;
extern int D_002E584C;
extern int func_0E7B50(unsigned int value);
extern int func_16CE40(int a, int b, int c, int d, int e, int f);

void func_16C1E8(void)
{
    D_002E5844 = func_0E7B50((D_0024E5C0.fCC << 16) | 0xC0001041u);
    D_002E5848 = func_16CE40(0x10, D_0024E5C0.f28C, 0, 0, 0, 1);
    D_002E584C = func_16CE40(0x10, D_0024E5C0.f288, 0, 0, 0, 1);
}
