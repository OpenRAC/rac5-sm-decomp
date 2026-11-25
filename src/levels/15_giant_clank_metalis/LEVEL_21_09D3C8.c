/* LEVEL_21:0x09D3C8 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_0017D870;
extern char *D_002403B0;
extern char *D_002403B4;
extern char D_00240420[];
extern char D_00240448[];
extern char D_002403C0[];

extern int func_06E208(char *a, unsigned int flags, int value, char *result);
extern int func_06E290(char *a, char *b);
extern void func_06D610(char *p);
extern void func_06D200(char *a, char *b, float t);

int func_09D3C8(void)
{
    D_002403B0 = D_0017D870;
    D_002403B4 = *(char **)(*(char **)(D_002403B0 + 0x40) + 4);
    func_06E208(*(char **)(D_002403B4 + 8), 0xFFFFFFFF, *(int *)(D_002403B4 + 4) + 0x20, D_00240420);
    func_06E290(**(char ***)(D_002403B4 + 8) + 0x13C0, D_00240420);
    func_06E208(*(char **)(D_002403B4 + 8), 0xFFFFFFFF, *(int *)(D_002403B4 + 4) + 0x20, D_00240448);
    func_06E290(**(char ***)(D_002403B4 + 8) + 0x13C0, D_00240448);
    func_06D610(D_002403C0);
    func_06D200(D_002403C0, D_00240420, 0.0f);
    return 1;
}
