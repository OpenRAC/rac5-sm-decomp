/* LEVEL_01:0x0A0C78 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0A2AA0(void);
extern long long D_001F6730;
extern unsigned int D_001F6740;
extern int D_0029EEC0[];

void func_0A0C78(void)
{
    long long result = func_0A2AA0();
    D_0029EEC0[D_001F6740 & 0x1f] = (int)(result - D_001F6730);
}
