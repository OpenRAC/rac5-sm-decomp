/* LEVEL_08:0x027100 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_0023CA5C;
extern unsigned int D_0023CA58;
extern char D_0027F0E0[];
extern char D_00256758[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_026FF8(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_027100(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_0023CA58 = a1;
    D_0023CA5C = a0;
    sprintf(D_0027F0E0, D_00256758, a0, a0, (char)(a1 + 0x41));
    func_026FF8(D_0027F0E0, a2, a3, t0, t1, t2, t3);
}
