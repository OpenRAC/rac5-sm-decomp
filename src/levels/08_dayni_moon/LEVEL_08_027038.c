/* LEVEL_08:0x027038 -- placement copy of LEVEL_01_0267A8.c: stores two globals, formats a status string into a fixed buffer using a byte derived from the first argument, then forwards all arguments to a second routine. */

extern int D_00264470;
extern int D_0023CA58;
extern int D_0023CA5C;
extern char D_0027F0E0[];
extern char D_00256758[];

int sprintf(char *buf, const char *fmt, ...);
void func_026FF8(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_027038(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_00264470;
    D_0023CA58 = a0;
    D_0023CA5C = t;
    sprintf(D_0027F0E0, D_00256758, t, t, (signed char)(a0 + 0x41));
    func_026FF8(D_0027F0E0, a1, a2, a3, a4, a5, a6);
}
