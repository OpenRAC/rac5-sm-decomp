extern int D_003AE988;
extern char D_00240CE0[];
extern char D_003AE980[];
extern void func_200E70(void);
extern void func_2020A8(void *state, const void *table, void *extra);

void *func_201E68(void) {
    if (!D_003AE988) {
        func_200E70();
        func_2020A8(&D_003AE988, D_00240CE0, D_003AE980);
    }
    return &D_003AE988;
}
