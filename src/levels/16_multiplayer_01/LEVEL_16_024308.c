/* LEVEL_16:0x024308 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_001A19E4;
extern unsigned int D_001A19E0;
extern char D_001DEB60[];
extern char D_001C1AB8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0242C8(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_024308(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_001A19E0 = a1;
    D_001A19E4 = a0;
    sprintf(D_001DEB60, D_001C1AB8, a0, a0, (char)(a1 + 0x41));
    func_0242C8(D_001DEB60, a2, a3, t0, t1, t2, t3);
}
