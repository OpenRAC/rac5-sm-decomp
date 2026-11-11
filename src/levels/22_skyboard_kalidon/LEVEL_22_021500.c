/* LEVEL_22:0x021500 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_0015325C;
extern unsigned int D_00153258;
extern char D_00181A60[];
extern char D_00169F58[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0214C0(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_021500(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_00153258 = a1;
    D_0015325C = a0;
    sprintf(D_00181A60, D_00169F58, a0, a0, (char)(a1 + 0x41));
    func_0214C0(D_00181A60, a2, a3, t0, t1, t2, t3);
}
