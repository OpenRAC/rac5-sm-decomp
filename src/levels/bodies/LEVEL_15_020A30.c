/* LEVEL_15:0x020A30 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_00148B5C;
extern unsigned int D_00148B58;
extern char D_00177FE0[];
extern char D_00161258[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0209F0(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_020A30(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_00148B58 = a1;
    D_00148B5C = a0;
    sprintf(D_00177FE0, D_00161258, a0, a0, (char)(a1 + 0x41));
    func_0209F0(D_00177FE0, a2, a3, t0, t1, t2, t3);
}
