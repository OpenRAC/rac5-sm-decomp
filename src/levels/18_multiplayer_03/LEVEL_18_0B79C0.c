/* LEVEL_18:0x0B79C0 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_10EB60(void);
extern void func_10EB78(int);
extern void func_0B2BE8(void);
extern int func_10EE08(void *a0, void *a1);
extern unsigned char D_001A2E59;
extern char *D_001A2F34;
extern int D_001D1A20;
extern int D_001B01E0;

void func_0B79C0(void)
{
    int value = ((int (*)(void))func_10EB60)();
    func_10EB78(0);
    if (D_001A2E59 != 0) {
        func_0B2BE8();
    }
    func_10EB78(value);
    ((int (*)(int, int, char *))func_10EE08)(D_001D1A20, *(int *)(D_001A2F34 + 0x3c), D_001A2F34);
    D_001B01E0 = 3;
}
