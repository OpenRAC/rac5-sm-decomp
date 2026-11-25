/* LEVEL_10:0x0BE0D0 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_0023EAF0;
extern char *D_00331F70;
extern char *D_00331F74;
extern char D_00331FE0[];
extern char D_00332008[];
extern char D_00331F80[];

extern int func_089EF8(char *a, unsigned int flags, int value, char *result);
extern int func_089F80(char *a, char *b);
extern void func_089300(char *p);
extern void func_088E88(char *a, char *b, float t);

int func_0BE0D0(void)
{
    D_00331F70 = D_0023EAF0;
    D_00331F74 = *(char **)(*(char **)(D_00331F70 + 0x40) + 4);
    func_089EF8(*(char **)(D_00331F74 + 8), 0xFFFFFFFF, *(int *)(D_00331F74 + 4) + 0x20, D_00331FE0);
    func_089F80(**(char ***)(D_00331F74 + 8) + 0x13C0, D_00331FE0);
    func_089EF8(*(char **)(D_00331F74 + 8), 0xFFFFFFFF, *(int *)(D_00331F74 + 4) + 0x20, D_00332008);
    func_089F80(**(char ***)(D_00331F74 + 8) + 0x13C0, D_00332008);
    func_089300(D_00331F80);
    func_088E88(D_00331F80, D_00331FE0, 0.0f);
    return 1;
}
