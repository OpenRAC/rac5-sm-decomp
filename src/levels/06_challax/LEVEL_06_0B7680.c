/* LEVEL_06:0x0B7680 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_00222470;
extern char *D_003158F0;
extern char *D_003158F4;
extern char D_00315960[];
extern char D_00315988[];
extern char D_00315900[];

extern int func_0829A0(char *a, unsigned int flags, int value, char *result);
extern int func_082A28(char *a, char *b);
extern void func_081DA8(char *p);
extern void func_081998(char *a, char *b, float t);

int func_0B7680(void)
{
    D_003158F0 = D_00222470;
    D_003158F4 = *(char **)(*(char **)(D_003158F0 + 0x40) + 4);
    func_0829A0(*(char **)(D_003158F4 + 8), 0xFFFFFFFF, *(int *)(D_003158F4 + 4) + 0x20, D_00315960);
    func_082A28(**(char ***)(D_003158F4 + 8) + 0x13C0, D_00315960);
    func_0829A0(*(char **)(D_003158F4 + 8), 0xFFFFFFFF, *(int *)(D_003158F4 + 4) + 0x20, D_00315988);
    func_082A28(**(char ***)(D_003158F4 + 8) + 0x13C0, D_00315988);
    func_081DA8(D_00315900);
    func_081998(D_00315900, D_00315960, 0.0f);
    return 1;
}
