extern int D_003AE9A8;
extern char D_00240DC8[];
extern char D_003AE9C8[];
extern void func_2026A0(void);
extern void func_2020A8(void *state, const void *table, void *extra);

void *func_2024C0(void) {
    if (!D_003AE9A8) {
        func_2026A0();
        func_2020A8(&D_003AE9A8, D_00240DC8, D_003AE9C8);
    }
    return &D_003AE9A8;
}
