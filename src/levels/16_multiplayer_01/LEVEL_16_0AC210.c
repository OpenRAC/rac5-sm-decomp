/* LEVEL_16:0x0AC210 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_001E4640;
extern char *D_00276AB0;
extern char *D_00276AB4;
extern char D_00276B20[];
extern char D_00276B48[];
extern char D_00276AC0[];

extern int func_07B100(char *a, unsigned int flags, int value, char *result);
extern int func_07B188(char *a, char *b);
extern void func_07A508(char *p);
extern void func_07A0F8(char *a, char *b, float t);

int func_0AC210(void)
{
    D_00276AB0 = D_001E4640;
    D_00276AB4 = *(char **)(*(char **)(D_00276AB0 + 0x40) + 4);
    func_07B100(*(char **)(D_00276AB4 + 8), 0xFFFFFFFF, *(int *)(D_00276AB4 + 4) + 0x20, D_00276B20);
    func_07B188(**(char ***)(D_00276AB4 + 8) + 0x13C0, D_00276B20);
    func_07B100(*(char **)(D_00276AB4 + 8), 0xFFFFFFFF, *(int *)(D_00276AB4 + 4) + 0x20, D_00276B48);
    func_07B188(**(char ***)(D_00276AB4 + 8) + 0x13C0, D_00276B48);
    func_07A508(D_00276AC0);
    func_07A0F8(D_00276AC0, D_00276B20, 0.0f);
    return 1;
}
