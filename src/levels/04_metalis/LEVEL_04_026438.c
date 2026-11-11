/* LEVEL_04:0x026438 -- placement copy of LEVEL_01_0267A8.c: stores two globals, formats a status string into a fixed buffer using a byte derived from the first argument, then forwards all arguments to a second routine. */

extern int D_00234170;
extern int D_0020D058;
extern int D_0020D05C;
extern char D_0024A660[];
extern char D_00226458[];

int sprintf(char *buf, const char *fmt, ...);
void func_0263F8(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_026438(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_00234170;
    D_0020D058 = a0;
    D_0020D05C = t;
    sprintf(D_0024A660, D_00226458, t, t, (signed char)(a0 + 0x41));
    func_0263F8(D_0024A660, a1, a2, a3, a4, a5, a6);
}
