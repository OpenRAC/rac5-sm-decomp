/* LEVEL_24:0x09A5E0 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_0026AEC4;
extern int D_001C73C0;
extern int D_001C73C4;
extern long long D_001C73D0;
extern int D_0026AD00[];
extern void func_09A540(int a);
extern void func_09C260(int a);
extern long long func_09C318(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_001C73C0;
    D_001C73C4 = idx;
    D_001C73C0 = (idx + 1) & 0x1F;
    func_09A540(D_0026AEC4);
    func_09C260(0xDEAD);
    t = func_09C318();
    d = (int)(t - D_001C73D0);
    D_001C73D0 = t;
    D_0026AD00[D_001C73C0] = d;
}
