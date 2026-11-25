/* LEVEL_09:0x0BA030 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_0021CE70;
extern char *D_003102F0;
extern char *D_003102F4;
extern char D_00310360[];
extern char D_00310388[];
extern char D_00310300[];

extern int func_0864E0(char *a, unsigned int flags, int value, char *result);
extern int func_086568(char *a, char *b);
extern void func_0858E8(char *p);
extern void func_0854D8(char *a, char *b, float t);

int func_0BA030(void)
{
    D_003102F0 = D_0021CE70;
    D_003102F4 = *(char **)(*(char **)(D_003102F0 + 0x40) + 4);
    func_0864E0(*(char **)(D_003102F4 + 8), 0xFFFFFFFF, *(int *)(D_003102F4 + 4) + 0x20, D_00310360);
    func_086568(**(char ***)(D_003102F4 + 8) + 0x13C0, D_00310360);
    func_0864E0(*(char **)(D_003102F4 + 8), 0xFFFFFFFF, *(int *)(D_003102F4 + 4) + 0x20, D_00310388);
    func_086568(**(char ***)(D_003102F4 + 8) + 0x13C0, D_00310388);
    func_0858E8(D_00310300);
    func_0854D8(D_00310300, D_00310360, 0.0f);
    return 1;
}
