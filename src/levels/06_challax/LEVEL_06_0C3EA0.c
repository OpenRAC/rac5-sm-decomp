/* LEVEL_06:0x0C3EA0 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_1298C0(void);
extern void func_1298D8(int);
extern void func_0BF058(void);
extern int func_129AC0(void *a0, void *a1);
extern unsigned char D_001E2DD1;
extern char *D_001E2EAC;
extern int D_00209670;
extern int D_001EFBE0;

void func_0C3EA0(void)
{
    int value = ((int (*)(void))func_1298C0)();
    func_1298D8(0);
    if (D_001E2DD1 != 0) {
        func_0BF058();
    }
    func_1298D8(value);
    ((int (*)(int, int, char *))func_129AC0)(D_00209670, *(int *)(D_001E2EAC + 0x3c), D_001E2EAC);
    D_001EFBE0 = 3;
}
