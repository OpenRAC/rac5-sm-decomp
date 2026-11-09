/* LEVEL_20:0x020FB0 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_001040C4;
extern unsigned int D_001040C0;
extern char D_001364E0[];
extern char D_00122B38[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_020F70(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_020FB0(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_001040C0 = a1;
    D_001040C4 = a0;
    sprintf(D_001364E0, D_00122B38, a0, a0, (char)(a1 + 0x41));
    func_020F70(D_001364E0, a2, a3, t0, t1, t2, t3);
}
