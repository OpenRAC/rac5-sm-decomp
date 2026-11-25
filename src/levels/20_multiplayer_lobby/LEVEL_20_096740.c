/* LEVEL_20:0x096740 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_0013BFC0;
extern char *D_0019A2F0;
extern char *D_0019A2F4;
extern char D_0019A360[];
extern char D_0019A388[];
extern char D_0019A300[];

extern int func_068D70(char *a, unsigned int flags, int value, char *result);
extern int func_068DF8(char *a, char *b);
extern void func_068178(char *p);
extern void func_067D68(char *a, char *b, float t);

int func_096740(void)
{
    D_0019A2F0 = D_0013BFC0;
    D_0019A2F4 = *(char **)(*(char **)(D_0019A2F0 + 0x40) + 4);
    func_068D70(*(char **)(D_0019A2F4 + 8), 0xFFFFFFFF, *(int *)(D_0019A2F4 + 4) + 0x20, D_0019A360);
    func_068DF8(**(char ***)(D_0019A2F4 + 8) + 0x13C0, D_0019A360);
    func_068D70(*(char **)(D_0019A2F4 + 8), 0xFFFFFFFF, *(int *)(D_0019A2F4 + 4) + 0x20, D_0019A388);
    func_068DF8(**(char ***)(D_0019A2F4 + 8) + 0x13C0, D_0019A388);
    func_068178(D_0019A300);
    func_067D68(D_0019A300, D_0019A360, 0.0f);
    return 1;
}
