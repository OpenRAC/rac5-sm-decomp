/* LEVEL_06:0x09B448 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_09D270(void);
extern long long D_001E5630;
extern unsigned int D_001E5640;
extern int D_0028BC40[];

void func_09B448(void)
{
    long long result = func_09D270();
    D_0028BC40[D_001E5640 & 0x1f] = (int)(result - D_001E5630);
}
