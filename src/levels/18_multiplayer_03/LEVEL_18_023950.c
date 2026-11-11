/* LEVEL_18:0x023950 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_001A2E64;
extern unsigned int D_001A2E60;
extern char D_001DEEE0[];
extern char D_001C3038[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_023910(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_023950(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_001A2E60 = a1;
    D_001A2E64 = a0;
    sprintf(D_001DEEE0, D_001C3038, a0, a0, (char)(a1 + 0x41));
    func_023910(D_001DEEE0, a2, a3, t0, t1, t2, t3);
}
