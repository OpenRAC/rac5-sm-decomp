/* LEVEL_23:0x0248C8 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_001C72DC;
extern unsigned int D_001C72D8;
extern char D_001FD2E0[];
extern char D_001DFC58[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0247C0(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_0248C8(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_001C72D8 = a1;
    D_001C72DC = a0;
    sprintf(D_001FD2E0, D_001DFC58, a0, a0, (char)(a1 + 0x41));
    func_0247C0(D_001FD2E0, a2, a3, t0, t1, t2, t3);
}
