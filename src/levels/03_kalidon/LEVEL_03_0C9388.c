/* LEVEL_03:0x0C9388 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_1315B8(void);
extern void func_1315D0(int);
extern void func_0C4540(void);
extern int func_1317B8(void *a0, void *a1);
extern unsigned char D_0020C551;
extern char *D_0020C62C;
extern int D_002336F0;
extern int D_00219360;

void func_0C9388(void)
{
    int value = ((int (*)(void))func_1315B8)();
    func_1315D0(0);
    if (D_0020C551 != 0) {
        func_0C4540();
    }
    func_1315D0(value);
    ((int (*)(int, int, char *))func_1317B8)(D_002336F0, *(int *)(D_0020C62C + 0x3c), D_0020C62C);
    D_00219360 = 3;
}
