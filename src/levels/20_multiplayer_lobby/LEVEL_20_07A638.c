/* LEVEL_20:0x07A638 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_07C3F8(void);
extern long long D_00106DE0;
extern unsigned int D_00106DF0;
extern int D_0017A250[];

void func_07A638(void)
{
    long long result = func_07C3F8();
    D_0017A250[D_00106DF0 & 0x1f] = (int)(result - D_00106DE0);
}
