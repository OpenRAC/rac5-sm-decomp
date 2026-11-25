/* LEVEL_02:0x0C3690 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_0024CC00;
extern char *D_00340070;
extern char *D_00340074;
extern char D_003400E0[];
extern char D_00340108[];
extern char D_00340080[];

extern int func_090458(char *a, unsigned int flags, int value, char *result);
extern int func_0904E0(char *a, char *b);
extern void func_08F860(char *p);
extern void func_08F450(char *a, char *b, float t);

int func_0C3690(void)
{
    D_00340070 = D_0024CC00;
    D_00340074 = *(char **)(*(char **)(D_00340070 + 0x40) + 4);
    func_090458(*(char **)(D_00340074 + 8), 0xFFFFFFFF, *(int *)(D_00340074 + 4) + 0x20, D_003400E0);
    func_0904E0(**(char ***)(D_00340074 + 8) + 0x13C0, D_003400E0);
    func_090458(*(char **)(D_00340074 + 8), 0xFFFFFFFF, *(int *)(D_00340074 + 4) + 0x20, D_00340108);
    func_0904E0(**(char ***)(D_00340074 + 8) + 0x13C0, D_00340108);
    func_08F860(D_00340080);
    func_08F450(D_00340080, D_003400E0, 0.0f);
    return 1;
}
