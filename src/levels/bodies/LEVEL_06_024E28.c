/* LEVEL_06:0x024E28 -- placement copy of LEVEL_01_0267A8.c: stores two globals, formats a status string into a fixed buffer using a byte derived from the first argument, then forwards all arguments to a second routine. */

extern int D_00209670;
extern int D_001E2DD8;
extern int D_001E2DDC;
extern char D_0021CBE0[];
extern char D_001FB958[];

int sprintf(char *buf, const char *fmt, ...);
void func_024DE8(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_024E28(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_00209670;
    D_001E2DD8 = a0;
    D_001E2DDC = t;
    sprintf(D_0021CBE0, D_001FB958, t, t, (signed char)(a0 + 0x41));
    func_024DE8(D_0021CBE0, a1, a2, a3, a4, a5, a6);
}
