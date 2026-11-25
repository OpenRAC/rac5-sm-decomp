/* LEVEL_22:0x0AB230 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_001872F0;
extern char *D_0027E730;
extern char *D_0027E734;
extern char D_0027E7A0[];
extern char D_0027E7C8[];
extern char D_0027E740[];

extern int func_07AF40(char *a, unsigned int flags, int value, char *result);
extern int func_07AFC8(char *a, char *b);
extern void func_07A348(char *p);
extern void func_079F38(char *a, char *b, float t);

int func_0AB230(void)
{
    D_0027E730 = D_001872F0;
    D_0027E734 = *(char **)(*(char **)(D_0027E730 + 0x40) + 4);
    func_07AF40(*(char **)(D_0027E734 + 8), 0xFFFFFFFF, *(int *)(D_0027E734 + 4) + 0x20, D_0027E7A0);
    func_07AFC8(**(char ***)(D_0027E734 + 8) + 0x13C0, D_0027E7A0);
    func_07AF40(*(char **)(D_0027E734 + 8), 0xFFFFFFFF, *(int *)(D_0027E734 + 4) + 0x20, D_0027E7C8);
    func_07AFC8(**(char ***)(D_0027E734 + 8) + 0x13C0, D_0027E7C8);
    func_07A348(D_0027E740);
    func_079F38(D_0027E740, D_0027E7A0, 0.0f);
    return 1;
}
