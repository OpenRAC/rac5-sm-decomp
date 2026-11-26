/* LEVEL_16:0x0B89E8 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_10FEB0(void);
extern void func_10FEC8(int);
extern void func_0B3C10(void);
extern int func_110158(void *a0, void *a1);
extern unsigned char D_001A19D9;
extern char *D_001A1AB4;
extern int D_001D04A0;
extern int D_001AED60;

void func_0B89E8(void)
{
    int value = ((int (*)(void))func_10FEB0)();
    func_10FEC8(0);
    if (D_001A19D9 != 0) {
        func_0B3C10();
    }
    func_10FEC8(value);
    ((int (*)(int, int, char *))func_110158)(D_001D04A0, *(int *)(D_001A1AB4 + 0x3c), D_001A1AB4);
    D_001AED60 = 3;
}
