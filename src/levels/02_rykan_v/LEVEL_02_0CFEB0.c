/* LEVEL_02:0x0CFEB0 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_1395A0(void);
extern void func_1395B8(int);
extern void func_0CB068(void);
extern int func_1397A0(void *a0, void *a1);
extern unsigned char D_00208B51;
extern char *D_00208C2C;
extern int D_0022F770;
extern int D_00215CA0;

void func_0CFEB0(void)
{
    int value = ((int (*)(void))func_1395A0)();
    func_1395B8(0);
    if (D_00208B51 != 0) {
        func_0CB068();
    }
    func_1395B8(value);
    ((int (*)(int, int, char *))func_1397A0)(D_0022F770, *(int *)(D_00208C2C + 0x3c), D_00208C2C);
    D_00215CA0 = 3;
}
