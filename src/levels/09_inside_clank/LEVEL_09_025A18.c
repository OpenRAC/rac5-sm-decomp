/* LEVEL_09:0x025A18 -- placement copy of LEVEL_01_0267A8.c: stores two globals, formats a status string into a fixed buffer using a byte derived from the first argument, then forwards all arguments to a second routine. */

extern int D_002043F0;
extern int D_001DDCD8;
extern int D_001DDCDC;
extern char D_002175E0[];
extern char D_001F66D8[];

int sprintf(char *buf, const char *fmt, ...);
void func_0259D8(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_025A18(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_002043F0;
    D_001DDCD8 = a0;
    D_001DDCDC = t;
    sprintf(D_002175E0, D_001F66D8, t, t, (signed char)(a0 + 0x41));
    func_0259D8(D_002175E0, a1, a2, a3, a4, a5, a6);
}
