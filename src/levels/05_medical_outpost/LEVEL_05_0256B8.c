/* LEVEL_05:0x0256B8 -- placement copy of LEVEL_01_0267A8.c: stores two globals, formats a status string into a fixed buffer using a byte derived from the first argument, then forwards all arguments to a second routine. */

extern int D_002096F0;
extern int D_001E3258;
extern int D_001E325C;
extern char D_0021BB60[];
extern char D_001FB9D8[];

int sprintf(char *buf, const char *fmt, ...);
void func_025678(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_0256B8(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_002096F0;
    D_001E3258 = a0;
    D_001E325C = t;
    sprintf(D_0021BB60, D_001FB9D8, t, t, (signed char)(a0 + 0x41));
    func_025678(D_0021BB60, a1, a2, a3, a4, a5, a6);
}
