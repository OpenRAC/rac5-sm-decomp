/* LEVEL_15:0x0815D8 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_083398(void);
extern long long D_0014B3B0;
extern unsigned int D_0014B3C0;
extern int D_001B6F00[];

void func_0815D8(void)
{
    long long result = func_083398();
    D_001B6F00[D_0014B3C0 & 0x1f] = (int)(result - D_0014B3B0);
}
