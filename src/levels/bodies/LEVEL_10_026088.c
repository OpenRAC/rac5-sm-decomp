/* LEVEL_10:0x026088 -- placement copy of LEVEL_01_0267A8.c: stores two globals, formats a status string into a fixed buffer using a byte derived from the first argument, then forwards all arguments to a second routine. */

extern int D_00223780;
extern int D_001FCED8;
extern int D_001FCEDC;
extern char D_00239260[];
extern char D_00215A58[];

int sprintf(char *buf, const char *fmt, ...);
void func_026048(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_026088(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    int t;

    t = D_00223780;
    D_001FCED8 = a0;
    D_001FCEDC = t;
    sprintf(D_00239260, D_00215A58, t, t, (signed char)(a0 + 0x41));
    func_026048(D_00239260, a1, a2, a3, a4, a5, a6);
}
