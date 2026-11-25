/* LEVEL_08:0x0C7CA8 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_00284980;
extern char *D_00377DF0;
extern char *D_00377DF4;
extern char D_00377E60[];
extern char D_00377E88[];
extern char D_00377E00[];

extern int func_091C90(char *a, unsigned int flags, int value, char *result);
extern int func_091D18(char *a, char *b);
extern void func_091098(char *p);
extern void func_090C88(char *a, char *b, float t);

int func_0C7CA8(void)
{
    D_00377DF0 = D_00284980;
    D_00377DF4 = *(char **)(*(char **)(D_00377DF0 + 0x40) + 4);
    func_091C90(*(char **)(D_00377DF4 + 8), 0xFFFFFFFF, *(int *)(D_00377DF4 + 4) + 0x20, D_00377E60);
    func_091D18(**(char ***)(D_00377DF4 + 8) + 0x13C0, D_00377E60);
    func_091C90(*(char **)(D_00377DF4 + 8), 0xFFFFFFFF, *(int *)(D_00377DF4 + 4) + 0x20, D_00377E88);
    func_091D18(**(char ***)(D_00377DF4 + 8) + 0x13C0, D_00377E88);
    func_091098(D_00377E00);
    func_090C88(D_00377E00, D_00377E60, 0.0f);
    return 1;
}
