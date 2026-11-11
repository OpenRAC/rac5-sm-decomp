/* LEVEL_07:0x0A2D68 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_002B4904;
extern int D_0020AA40;
extern int D_0020AA44;
extern long long D_0020AA50;
extern int D_002B4740[];
extern void func_0A2CC8(int a);
extern void func_0A49E8(int a);
extern long long func_0A4AA0(void);

void func_0A2D68(void)
{
    int idx;
    long long t;
    int d;

    idx = D_0020AA40;
    D_0020AA44 = idx;
    D_0020AA40 = (idx + 1) & 0x1F;
    func_0A2CC8(D_002B4904);
    func_0A49E8(0xDEAD);
    t = func_0A4AA0();
    d = (int)(t - D_0020AA50);
    D_0020AA50 = t;
    D_002B4740[D_0020AA40] = d;
}
