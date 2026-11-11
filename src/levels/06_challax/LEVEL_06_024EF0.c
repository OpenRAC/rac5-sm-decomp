/* LEVEL_06:0x024EF0 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_001E2DDC;
extern unsigned int D_001E2DD8;
extern char D_0021CBE0[];
extern char D_001FB958[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_024DE8(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_024EF0(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_001E2DD8 = a1;
    D_001E2DDC = a0;
    sprintf(D_0021CBE0, D_001FB958, a0, a0, (char)(a1 + 0x41));
    func_024DE8(D_0021CBE0, a2, a3, t0, t1, t2, t3);
}
