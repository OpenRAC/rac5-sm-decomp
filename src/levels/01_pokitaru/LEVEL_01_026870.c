/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_001F3EDC;
extern unsigned int D_001F3ED8;
extern char D_0022FE60[];
extern char D_0020CAD8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_026768(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_026870(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_001F3ED8 = a1;
    D_001F3EDC = a0;
    sprintf(D_0022FE60, D_0020CAD8, a0, a0, (char)(a1 + 0x41));
    func_026768(D_0022FE60, a2, a3, t0, t1, t2, t3);
}
