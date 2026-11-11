/* LEVEL_03:0x0A09F8 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0A2820(void);
extern long long D_0020EDB0;
extern unsigned int D_0020EDC0;
extern int D_002B9D40[];

void func_0A09F8(void)
{
    long long result = func_0A2820();
    D_002B9D40[D_0020EDC0 & 0x1f] = (int)(result - D_0020EDB0);
}
