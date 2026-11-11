/* LEVEL_24:0x0244A0 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_001C4B5C;
extern unsigned int D_001C4B58;
extern char D_001FBD60[];
extern char D_001DD858[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_024460(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_0244A0(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_001C4B58 = a1;
    D_001C4B5C = a0;
    sprintf(D_001FBD60, D_001DD858, a0, a0, (char)(a1 + 0x41));
    func_024460(D_001FBD60, a2, a3, t0, t1, t2, t3);
}
