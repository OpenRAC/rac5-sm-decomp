/* LEVEL_07:0x0CB600 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_1361F0(void);
extern void func_136208(int);
extern void func_0C67B8(void);
extern int func_1363F0(void *a0, void *a1);
extern unsigned char D_002081D1;
extern char *D_002082AC;
extern int D_0022F4F0;
extern int D_00214FE0;

void func_0CB600(void)
{
    int value = ((int (*)(void))func_1361F0)();
    func_136208(0);
    if (D_002081D1 != 0) {
        func_0C67B8();
    }
    func_136208(value);
    ((int (*)(int, int, char *))func_1363F0)(D_0022F4F0, *(int *)(D_002082AC + 0x3c), D_002082AC);
    D_00214FE0 = 3;
}
