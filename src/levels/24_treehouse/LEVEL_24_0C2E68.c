/* LEVEL_24:0x0C2E68 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_128CF0(void);
extern void func_128D08(int);
extern void func_0BE020(void);
extern int func_128EF0(void *a0, void *a1);
extern unsigned char D_001C4B51;
extern char *D_001C4C2C;
extern int D_001EB570;
extern int D_001D1960;

void func_0C2E68(void)
{
    int value = ((int (*)(void))func_128CF0)();
    func_128D08(0);
    if (D_001C4B51 != 0) {
        func_0BE020();
    }
    func_128D08(value);
    ((int (*)(int, int, char *))func_128EF0)(D_001EB570, *(int *)(D_001C4C2C + 0x3c), D_001C4C2C);
    D_001D1960 = 3;
}
