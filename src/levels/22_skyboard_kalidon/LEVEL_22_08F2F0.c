/* LEVEL_22:0x08F2F0 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0910B0(void);
extern long long D_00155AB0;
extern unsigned int D_00155AC0;
extern int D_001F4A80[];

void func_08F2F0(void)
{
    long long result = func_0910B0();
    D_001F4A80[D_00155AC0 & 0x1f] = (int)(result - D_00155AB0);
}
