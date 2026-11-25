/* LEVEL_17:0x0AB750 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_001D5940;
extern char *D_00267DB0;
extern char *D_00267DB4;
extern char D_00267E20[];
extern char D_00267E48[];
extern char D_00267DC0[];

extern int func_07BB78(char *a, unsigned int flags, int value, char *result);
extern int func_07BC00(char *a, char *b);
extern void func_07AF80(char *p);
extern void func_07AB70(char *a, char *b, float t);

int func_0AB750(void)
{
    D_00267DB0 = D_001D5940;
    D_00267DB4 = *(char **)(*(char **)(D_00267DB0 + 0x40) + 4);
    func_07BB78(*(char **)(D_00267DB4 + 8), 0xFFFFFFFF, *(int *)(D_00267DB4 + 4) + 0x20, D_00267E20);
    func_07BC00(**(char ***)(D_00267DB4 + 8) + 0x13C0, D_00267E20);
    func_07BB78(*(char **)(D_00267DB4 + 8), 0xFFFFFFFF, *(int *)(D_00267DB4 + 4) + 0x20, D_00267E48);
    func_07BC00(**(char ***)(D_00267DB4 + 8) + 0x13C0, D_00267E48);
    func_07AF80(D_00267DC0);
    func_07AB70(D_00267DC0, D_00267E20, 0.0f);
    return 1;
}
