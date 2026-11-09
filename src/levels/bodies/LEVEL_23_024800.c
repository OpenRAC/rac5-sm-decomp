/* LEVEL_23:0x024800 -- placement copy of LEVEL_01_0267A8.c: stores two globals, formats a status string into a fixed buffer using a byte derived from the first argument, then forwards all arguments to a second routine. */

extern int D_001ED970;
extern int D_001C72D8;
extern int D_001C72DC;
extern char D_001FD2E0[];
extern char D_001DFC58[];

int sprintf(char *buf, const char *fmt, ...);
void func_0247C0(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_024800(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_001ED970;
    D_001C72D8 = a0;
    D_001C72DC = t;
    sprintf(D_001FD2E0, D_001DFC58, t, t, (signed char)(a0 + 0x41));
    func_0247C0(D_001FD2E0, a1, a2, a3, a4, a5, a6);
}
