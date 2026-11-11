/* LEVEL_17:0x08F438 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0911F8(void);
extern long long D_00197D00;
extern unsigned int D_00197D10;
extern int D_00247D10[];

void func_08F438(void)
{
    long long result = func_0911F8();
    D_00247D10[D_00197D10 & 0x1f] = (int)(result - D_00197D00);
}
