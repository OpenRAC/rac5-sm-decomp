/* LEVEL_08:0x0AB570 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0AD398(void);
extern long long D_0023F5F0;
extern unsigned int D_0023F600;
extern int D_002EE140[];

void func_0AB570(void)
{
    long long result = func_0AD398();
    D_002EE140[D_0023F600 & 0x1f] = (int)(result - D_0023F5F0);
}
