/* LEVEL_17:0x023C88 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_00194FE4;
extern unsigned int D_00194FE0;
extern char D_001CFE60[];
extern char D_001B4F38[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_023C48(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_023C88(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_00194FE0 = a1;
    D_00194FE4 = a0;
    sprintf(D_001CFE60, D_001B4F38, a0, a0, (char)(a1 + 0x41));
    func_023C48(D_001CFE60, a2, a3, t0, t1, t2, t3);
}
