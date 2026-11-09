/* LEVEL_19:0x023F48 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_001A2B64;
extern unsigned int D_001A2B60;
extern char D_001DECE0[];
extern char D_001C2CB8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_023F08(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_023F48(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_001A2B60 = a1;
    D_001A2B64 = a0;
    sprintf(D_001DECE0, D_001C2CB8, a0, a0, (char)(a1 + 0x41));
    func_023F08(D_001DECE0, a2, a3, t0, t1, t2, t3);
}
