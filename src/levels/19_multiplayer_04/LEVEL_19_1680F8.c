/* LEVEL_19:0x1680F8 -- placement copy of LEVEL_16_165098.c: creates one hash-tagged handle from a global field and two handles with fixed parameters, storing all three into globals. */
typedef struct { char padCC_[0xCC]; int fCC; char padD0[0x1B8]; int f288; int f28C; } Cfg;
extern Cfg D_0024E3C0;
extern int D_002E5B2C;
extern int D_002E5B30;
extern int D_002E5B34;
extern int func_0E8B20(unsigned int value);
extern int func_168D50(int a, int b, int c, int d, int e, int f);

void func_1680F8(void)
{
    D_002E5B2C = func_0E8B20((D_0024E3C0.fCC << 16) | 0xC0001041u);
    D_002E5B30 = func_168D50(0x10, D_0024E3C0.f28C, 0, 0, 0, 1);
    D_002E5B34 = func_168D50(0x10, D_0024E3C0.f288, 0, 0, 0, 1);
}
