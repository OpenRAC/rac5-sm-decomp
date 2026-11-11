/* LEVEL_05:0x09F238 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0A1060(void);
extern long long D_001E5AB0;
extern unsigned int D_001E5AC0;
extern int D_0028AD80[];

void func_09F238(void)
{
    long long result = func_0A1060();
    D_0028AD80[D_001E5AC0 & 0x1f] = (int)(result - D_001E5AB0);
}
