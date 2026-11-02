extern int D_003807A8;
extern char D_00212C58[];
extern char D_003807C8[];
extern void func_1D8190(void);
extern void func_1D7B98(void *state, const void *table, void *extra);

void *func_1D7FB0(void) {
    if (!D_003807A8) {
        func_1D8190();
        func_1D7B98(&D_003807A8, D_00212C58, D_003807C8);
    }
    return &D_003807A8;
}
