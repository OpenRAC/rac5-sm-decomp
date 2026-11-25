/* LEVEL_03:0x0BCB68 -- placement copy of LEVEL_01_0BCD80.c: caches the active object's records, builds two result records and primes the pose object. */

extern char *D_00250570;
extern char *D_003439F0;
extern char *D_003439F4;
extern char D_00343A60[];
extern char D_00343A88[];
extern char D_00343A00[];

extern int func_089980(char *a, unsigned int flags, int value, char *result);
extern int func_089A08(char *a, char *b);
extern void func_088D88(char *p);
extern void func_088978(char *a, char *b, float t);

int func_0BCB68(void)
{
    D_003439F0 = D_00250570;
    D_003439F4 = *(char **)(*(char **)(D_003439F0 + 0x40) + 4);
    func_089980(*(char **)(D_003439F4 + 8), 0xFFFFFFFF, *(int *)(D_003439F4 + 4) + 0x20, D_00343A60);
    func_089A08(**(char ***)(D_003439F4 + 8) + 0x13C0, D_00343A60);
    func_089980(*(char **)(D_003439F4 + 8), 0xFFFFFFFF, *(int *)(D_003439F4 + 4) + 0x20, D_00343A88);
    func_089A08(**(char ***)(D_003439F4 + 8) + 0x13C0, D_00343A88);
    func_088D88(D_00343A00);
    func_088978(D_00343A00, D_00343A60, 0.0f);
    return 1;
}
