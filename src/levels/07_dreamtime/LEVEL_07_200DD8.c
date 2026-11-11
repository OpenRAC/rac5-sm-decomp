extern int D_003AE970;
extern char D_00240BB8[];
extern char D_003AE980[];
extern void func_200E70(void);
extern void func_2020A8(void *state, const void *table, void *extra);

void *func_200DD8(void) {
    if (!D_003AE970) {
        func_200E70();
        func_2020A8(&D_003AE970, D_00240BB8, D_003AE980);
    }
    return &D_003AE970;
}
