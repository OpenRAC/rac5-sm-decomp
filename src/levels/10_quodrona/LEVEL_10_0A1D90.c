/* LEVEL_10:0x0A1D90 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0A3BB8(void);
extern long long D_001FF730;
extern unsigned int D_001FF740;
extern int D_002A82C0[];

void func_0A1D90(void)
{
    long long result = func_0A3BB8();
    D_002A82C0[D_001FF740 & 0x1f] = (int)(result - D_001FF730);
}
