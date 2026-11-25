/* LEVEL_19:0x0ABAE8 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_001E47C0;
extern char *D_00276C30;
extern char *D_00276C34;
extern char D_00276CA0[];
extern char D_00276CC8[];
extern char D_00276C40[];

extern int func_07B5E8(char *a, unsigned int flags, int value, char *result);
extern int func_07B670(char *a, char *b);
extern void func_07A9F0(char *p);
extern void func_07A5E0(char *a, char *b, float t);

int func_0ABAE8(void)
{
    D_00276C30 = D_001E47C0;
    D_00276C34 = *(char **)(*(char **)(D_00276C30 + 0x40) + 4);
    func_07B5E8(*(char **)(D_00276C34 + 8), 0xFFFFFFFF, *(int *)(D_00276C34 + 4) + 0x20, D_00276CA0);
    func_07B670(**(char ***)(D_00276C34 + 8) + 0x13C0, D_00276CA0);
    func_07B5E8(*(char **)(D_00276C34 + 8), 0xFFFFFFFF, *(int *)(D_00276C34 + 4) + 0x20, D_00276CC8);
    func_07B670(**(char ***)(D_00276C34 + 8) + 0x13C0, D_00276CC8);
    func_07A9F0(D_00276C40);
    func_07A5E0(D_00276C40, D_00276CA0, 0.0f);
    return 1;
}
