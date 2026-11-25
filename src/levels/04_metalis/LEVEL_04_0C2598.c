/* LEVEL_04:0x0C2598 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_0024FF00;
extern char *D_00343370;
extern char *D_00343374;
extern char D_003433E0[];
extern char D_00343408[];
extern char D_00343380[];

extern int func_08CE30(char *a, unsigned int flags, int value, char *result);
extern int func_08CEB8(char *a, char *b);
extern void func_08C238(char *p);
extern void func_08BE28(char *a, char *b, float t);

int func_0C2598(void)
{
    D_00343370 = D_0024FF00;
    D_00343374 = *(char **)(*(char **)(D_00343370 + 0x40) + 4);
    func_08CE30(*(char **)(D_00343374 + 8), 0xFFFFFFFF, *(int *)(D_00343374 + 4) + 0x20, D_003433E0);
    func_08CEB8(**(char ***)(D_00343374 + 8) + 0x13C0, D_003433E0);
    func_08CE30(*(char **)(D_00343374 + 8), 0xFFFFFFFF, *(int *)(D_00343374 + 4) + 0x20, D_00343408);
    func_08CEB8(**(char ***)(D_00343374 + 8) + 0x13C0, D_00343408);
    func_08C238(D_00343380);
    func_08BE28(D_00343380, D_003433E0, 0.0f);
    return 1;
}
