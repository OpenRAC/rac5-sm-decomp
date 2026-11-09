/* LEVEL_05:0x025780 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_001E325C;
extern unsigned int D_001E3258;
extern char D_0021BB60[];
extern char D_001FB9D8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_025678(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_025780(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_001E3258 = a1;
    D_001E325C = a0;
    sprintf(D_0021BB60, D_001FB9D8, a0, a0, (char)(a1 + 0x41));
    func_025678(D_0021BB60, a2, a3, t0, t1, t2, t3);
}
