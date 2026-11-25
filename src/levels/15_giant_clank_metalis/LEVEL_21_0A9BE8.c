/* LEVEL_21:0x0A9BE8 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_0F20B8(void);
extern void func_0F20D0(int);
extern void func_0A4DA0(void);
extern int func_0F22B8(void *a0, void *a1);
extern unsigned char D_00148B51;
extern char *D_00148C2C;
extern int D_0016EF70;
extern int D_00155960;

void func_0A9BE8(void)
{
    int value = ((int (*)(void))func_0F20B8)();
    func_0F20D0(0);
    if (D_00148B51 != 0) {
        func_0A4DA0();
    }
    func_0F20D0(value);
    ((int (*)(int, int, char *))func_0F22B8)(D_0016EF70, *(int *)(D_00148C2C + 0x3c), D_00148C2C);
    D_00155960 = 3;
}
