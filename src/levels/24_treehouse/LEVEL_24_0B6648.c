/* LEVEL_24:0x0B6648 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_002015F0;
extern char *D_002F4A30;
extern char *D_002F4A34;
extern char D_002F4AA0[];
extern char D_002F4AC8[];
extern char D_002F4A40[];

extern int func_082DC8(char *a, unsigned int flags, int value, char *result);
extern int func_082E50(char *a, char *b);
extern void func_0821D0(char *p);
extern void func_081DC0(char *a, char *b, float t);

int func_0B6648(void)
{
    D_002F4A30 = D_002015F0;
    D_002F4A34 = *(char **)(*(char **)(D_002F4A30 + 0x40) + 4);
    func_082DC8(*(char **)(D_002F4A34 + 8), 0xFFFFFFFF, *(int *)(D_002F4A34 + 4) + 0x20, D_002F4AA0);
    func_082E50(**(char ***)(D_002F4A34 + 8) + 0x13C0, D_002F4AA0);
    func_082DC8(*(char **)(D_002F4A34 + 8), 0xFFFFFFFF, *(int *)(D_002F4A34 + 4) + 0x20, D_002F4AC8);
    func_082E50(**(char ***)(D_002F4A34 + 8) + 0x13C0, D_002F4AC8);
    func_0821D0(D_002F4A40);
    func_081DC0(D_002F4A40, D_002F4AA0, 0.0f);
    return 1;
}
