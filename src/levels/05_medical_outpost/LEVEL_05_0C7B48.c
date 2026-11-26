/* LEVEL_05:0x0C7B48 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_12EB68(void);
extern void func_12EB80(int);
extern void func_0C2D00(void);
extern int func_12ED68(void *a0, void *a1);
extern unsigned char D_001E3251;
extern char *D_001E332C;
extern int D_002096F0;
extern int D_001F0060;

void func_0C7B48(void)
{
    int value = ((int (*)(void))func_12EB68)();
    func_12EB80(0);
    if (D_001E3251 != 0) {
        func_0C2D00();
    }
    func_12EB80(value);
    ((int (*)(int, int, char *))func_12ED68)(D_002096F0, *(int *)(D_001E332C + 0x3c), D_001E332C);
    D_001F0060 = 3;
}
