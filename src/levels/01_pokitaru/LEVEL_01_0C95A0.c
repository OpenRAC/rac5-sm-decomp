/* LEVEL_01:0x0C95A0 -- saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_1331F0(void);
extern void func_133208(int);
extern void func_0C4758(void);
extern int func_1333F0(void *a0, void *a1);
extern unsigned char D_001F3ED1;
extern char *D_001F3FAC;
extern int D_0021A7F0;
extern int D_00200CE0;

void func_0C95A0(void)
{
    int value = ((int (*)(void))func_1331F0)();
    func_133208(0);
    if (D_001F3ED1 != 0) {
        func_0C4758();
    }
    func_133208(value);
    ((int (*)(int, int, char *))func_1333F0)(D_0021A7F0, *(int *)(D_001F3FAC + 0x3c), D_001F3FAC);
    D_00200CE0 = 3;
}
