/* LEVEL_02:0x027148 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_00208B5C;
extern unsigned int D_00208B58;
extern char D_00247360[];
extern char D_00221A58[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_027040(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_027148(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_00208B58 = a1;
    D_00208B5C = a0;
    sprintf(D_00247360, D_00221A58, a0, a0, (char)(a1 + 0x41));
    func_027040(D_00247360, a2, a3, t0, t1, t2, t3);
}
