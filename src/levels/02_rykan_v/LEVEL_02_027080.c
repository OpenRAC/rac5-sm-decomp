/* LEVEL_02:0x027080 -- placement copy of LEVEL_01_0267A8.c: stores two globals, formats a status string into a fixed buffer using a byte derived from the first argument, then forwards all arguments to a second routine. */

extern int D_0022F770;
extern int D_00208B58;
extern int D_00208B5C;
extern char D_00247360[];
extern char D_00221A58[];

int sprintf(char *buf, const char *fmt, ...);
void func_027040(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_027080(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_0022F770;
    D_00208B58 = a0;
    D_00208B5C = t;
    sprintf(D_00247360, D_00221A58, t, t, (signed char)(a0 + 0x41));
    func_027040(D_00247360, a1, a2, a3, a4, a5, a6);
}
