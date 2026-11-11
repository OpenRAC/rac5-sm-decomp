/* LEVEL_03:0x026688 -- placement copy of LEVEL_01_0267A8.c: stores two globals, formats a status string into a fixed buffer using a byte derived from the first argument, then forwards all arguments to a second routine. */

extern int D_002336F0;
extern int D_0020C558;
extern int D_0020C55C;
extern char D_0024ACE0[];
extern char D_002259D8[];

int sprintf(char *buf, const char *fmt, ...);
void func_026648(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_026688(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_002336F0;
    D_0020C558 = a0;
    D_0020C55C = t;
    sprintf(D_0024ACE0, D_002259D8, t, t, (signed char)(a0 + 0x41));
    func_026648(D_0024ACE0, a1, a2, a3, a4, a5, a6);
}
