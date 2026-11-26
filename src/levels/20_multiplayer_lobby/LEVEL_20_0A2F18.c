/* LEVEL_20:0x0A2F18 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_0E2C98(void);
extern void func_0E2CB0(int);
extern void func_09E140(void);
extern int func_0E2F40(void *a0, void *a1);
extern unsigned char D_001040B9;
extern char *D_00104194;
extern int D_00131510;
extern int D_00111440;

void func_0A2F18(void)
{
    int value = ((int (*)(void))func_0E2C98)();
    func_0E2CB0(0);
    if (D_001040B9 != 0) {
        func_09E140();
    }
    func_0E2CB0(value);
    ((int (*)(int, int, char *))func_0E2F40)(D_00131510, *(int *)(D_00104194 + 0x3c), D_00104194);
    D_00111440 = 3;
}
