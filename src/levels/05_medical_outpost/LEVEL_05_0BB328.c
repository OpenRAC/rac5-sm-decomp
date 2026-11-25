/* LEVEL_05:0x0BB328 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_002213F0;
extern char *D_00314A30;
extern char *D_00314A34;
extern char D_00314AA0[];
extern char D_00314AC8[];
extern char D_00314A40[];

extern int func_087480(char *a, unsigned int flags, int value, char *result);
extern int func_087508(char *a, char *b);
extern void func_086888(char *p);
extern void func_086478(char *a, char *b, float t);

int func_0BB328(void)
{
    D_00314A30 = D_002213F0;
    D_00314A34 = *(char **)(*(char **)(D_00314A30 + 0x40) + 4);
    func_087480(*(char **)(D_00314A34 + 8), 0xFFFFFFFF, *(int *)(D_00314A34 + 4) + 0x20, D_00314AA0);
    func_087508(**(char ***)(D_00314A34 + 8) + 0x13C0, D_00314AA0);
    func_087480(*(char **)(D_00314A34 + 8), 0xFFFFFFFF, *(int *)(D_00314A34 + 4) + 0x20, D_00314AC8);
    func_087508(**(char ***)(D_00314A34 + 8) + 0x13C0, D_00314AC8);
    func_086888(D_00314A40);
    func_086478(D_00314A40, D_00314AA0, 0.0f);
    return 1;
}
