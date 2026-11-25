/* LEVEL_18:0x0AB1E8 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_001E49C0;
extern char *D_00276E30;
extern char *D_00276E34;
extern char D_00276EA0[];
extern char D_00276EC8[];
extern char D_00276E40[];

extern int func_07AA80(char *a, unsigned int flags, int value, char *result);
extern int func_07AB08(char *a, char *b);
extern void func_079E88(char *p);
extern void func_079A78(char *a, char *b, float t);

int func_0AB1E8(void)
{
    D_00276E30 = D_001E49C0;
    D_00276E34 = *(char **)(*(char **)(D_00276E30 + 0x40) + 4);
    func_07AA80(*(char **)(D_00276E34 + 8), 0xFFFFFFFF, *(int *)(D_00276E34 + 4) + 0x20, D_00276EA0);
    func_07AB08(**(char ***)(D_00276E34 + 8) + 0x13C0, D_00276EA0);
    func_07AA80(*(char **)(D_00276E34 + 8), 0xFFFFFFFF, *(int *)(D_00276E34 + 4) + 0x20, D_00276EC8);
    func_07AB08(**(char ***)(D_00276E34 + 8) + 0x13C0, D_00276EC8);
    func_079E88(D_00276E40);
    func_079A78(D_00276E40, D_00276EA0, 0.0f);
    return 1;
}
