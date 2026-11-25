/* LEVEL_23:0x0B3B20 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_00202B70;
extern char *D_002F9FB0;
extern char *D_002F9FB4;
extern char D_002FA020[];
extern char D_002FA048[];
extern char D_002F9FC0[];

extern int func_07F9E8(char *a, unsigned int flags, int value, char *result);
extern int func_07FA70(char *a, char *b);
extern void func_07EDF0(char *p);
extern void func_07E9E0(char *a, char *b, float t);

int func_0B3B20(void)
{
    D_002F9FB0 = D_00202B70;
    D_002F9FB4 = *(char **)(*(char **)(D_002F9FB0 + 0x40) + 4);
    func_07F9E8(*(char **)(D_002F9FB4 + 8), 0xFFFFFFFF, *(int *)(D_002F9FB4 + 4) + 0x20, D_002FA020);
    func_07FA70(**(char ***)(D_002F9FB4 + 8) + 0x13C0, D_002FA020);
    func_07F9E8(*(char **)(D_002F9FB4 + 8), 0xFFFFFFFF, *(int *)(D_002F9FB4 + 4) + 0x20, D_002FA048);
    func_07FA70(**(char ***)(D_002F9FB4 + 8) + 0x13C0, D_002FA048);
    func_07EDF0(D_002F9FC0);
    func_07E9E0(D_002F9FC0, D_002FA020, 0.0f);
    return 1;
}
