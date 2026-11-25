/* LEVEL_08:0x0D44C8 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_144728(void);
extern void func_144740(int);
extern void func_0CF680(void);
extern int func_144928(void *a0, void *a1);
extern unsigned char D_0023CA51;
extern char *D_0023CB2C;
extern int D_00264470;
extern int D_00249BA0;

void func_0D44C8(void)
{
    int value = ((int (*)(void))func_144728)();
    func_144740(0);
    if (D_0023CA51 != 0) {
        func_0CF680();
    }
    func_144740(value);
    ((int (*)(int, int, char *))func_144928)(D_00264470, *(int *)(D_0023CB2C + 0x3c), D_0023CB2C);
    D_00249BA0 = 3;
}
