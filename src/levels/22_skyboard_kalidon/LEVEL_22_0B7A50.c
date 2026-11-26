/* LEVEL_22:0x0B7A50 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_10A6C0(void);
extern void func_10A6D8(int);
extern void func_0B2C08(void);
extern int func_10A8C0(void *a0, void *a1);
extern unsigned char D_00153251;
extern char *D_0015332C;
extern int D_00177C70;
extern int D_00160060;

void func_0B7A50(void)
{
    int value = ((int (*)(void))func_10A6C0)();
    func_10A6D8(0);
    if (D_00153251 != 0) {
        func_0B2C08();
    }
    func_10A6D8(value);
    ((int (*)(int, int, char *))func_10A8C0)(D_00177C70, *(int *)(D_0015332C + 0x3c), D_0015332C);
    D_00160060 = 3;
}
