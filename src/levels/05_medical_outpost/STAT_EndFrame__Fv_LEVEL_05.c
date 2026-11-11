/* LEVEL_05:0x09F328 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_0028AEC4;
extern int D_001E5AC0;
extern int D_001E5AC4;
extern long long D_001E5AD0;
extern int D_0028AD00[];
extern void func_09F288(int a);
extern void func_0A0FA8(int a);
extern long long func_0A1060(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_001E5AC0;
    D_001E5AC4 = idx;
    D_001E5AC0 = (idx + 1) & 0x1F;
    func_09F288(D_0028AEC4);
    func_0A0FA8(0xDEAD);
    t = func_0A1060();
    d = (int)(t - D_001E5AD0);
    D_001E5AD0 = t;
    D_0028AD00[D_001E5AC0] = d;
}
