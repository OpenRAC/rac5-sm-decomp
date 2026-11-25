/* LEVEL_10:0x0CA9E0 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern int func_131050(void);
extern void func_131088(int);
extern void func_0C5AA8(void);
extern int func_131270(void *a0, void *a1);
extern unsigned char D_001FCED1;
extern char *D_001FCFAC;
extern int D_00223780;
extern int D_00209CE0;

void func_0CA9E0(void)
{
    int value = func_131050();
    func_131088(0);
    if (D_001FCED1 != 0) {
        func_0C5AA8();
    }
    func_131088(value);
    ((int (*)(int, int, char *))func_131270)(D_00223780, *(int *)(D_001FCFAC + 0x3c), D_001FCFAC);
    D_00209CE0 = 3;
}
