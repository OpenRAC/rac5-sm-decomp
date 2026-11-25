/* LEVEL_04:0x0CEDB8 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_13F670(void);
extern void func_13F688(int);
extern void func_0C9F70(void);
extern int func_13F870(void *a0, void *a1);
extern unsigned char D_0020D051;
extern char *D_0020D12C;
extern int D_00234170;
extern int D_0021A1A0;

void func_0CEDB8(void)
{
    int value = ((int (*)(void))func_13F670)();
    func_13F688(0);
    if (D_0020D051 != 0) {
        func_0C9F70();
    }
    func_13F688(value);
    ((int (*)(int, int, char *))func_13F870)(D_00234170, *(int *)(D_0020D12C + 0x3c), D_0020D12C);
    D_0021A1A0 = 3;
}
