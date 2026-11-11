/* LEVEL_01:0x0267A8 -- stores two globals, formats a status string into a fixed buffer using a byte derived from the first argument, then forwards all arguments to a second routine. */

extern int D_0021A7F0;
extern int D_001F3ED8;
extern int D_001F3EDC;
extern char D_0022FE60[];
extern char D_0020CAD8[];

int sprintf(char *buf, const char *fmt, ...);
void func_026768(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_0267A8(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_0021A7F0;
    D_001F3ED8 = a0;
    D_001F3EDC = t;
    sprintf(D_0022FE60, D_0020CAD8, t, t, (signed char)(a0 + 0x41));
    func_026768(D_0022FE60, a1, a2, a3, a4, a5, a6);
}
