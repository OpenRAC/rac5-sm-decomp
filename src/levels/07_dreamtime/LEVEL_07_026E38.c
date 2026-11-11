/* LEVEL_07:0x026E38 -- placement copy of LEVEL_01_026870.c. */
/* LEVEL_01:0x26870 -- records two state words, formats a label into a shared buffer and forwards the remaining arguments to a local dispatcher. */

extern unsigned int D_002081DC;
extern unsigned int D_002081D8;
extern char D_00245760[];
extern char D_002217D8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_026D30(long long a, long long b, long long c, long long d, long long e, long long f, long long g);

void func_026E38(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3)
{
    D_002081D8 = a1;
    D_002081DC = a0;
    sprintf(D_00245760, D_002217D8, a0, a0, (char)(a1 + 0x41));
    func_026D30(D_00245760, a2, a3, t0, t1, t2, t3);
}
