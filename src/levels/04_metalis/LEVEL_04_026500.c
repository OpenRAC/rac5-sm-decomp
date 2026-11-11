/* LEVEL_04:0x026500 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_0020D05C;
extern unsigned int D_0020D058;
extern char D_0024A660[];
extern char D_00226458[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0263F8(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_026500(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_0020D058 = a1;
    D_0020D05C = a0;
    sprintf(D_0024A660, D_00226458, a0, a0, (char)(a1 + 0x41));
    func_0263F8(D_0024A660, a2, a3, t0, t1, t2, t3);
}
