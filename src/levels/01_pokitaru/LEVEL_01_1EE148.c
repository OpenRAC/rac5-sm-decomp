extern int D_00398FA8;
extern char D_0022B4E8[];
extern char D_00398FC8[];
extern void func_1EE328(void);
extern void func_1EDD30(void *state, const void *table, void *extra);

void *func_1EE148(void) {
    if (!D_00398FA8) {
        func_1EE328();
        func_1EDD30(&D_00398FA8, D_0022B4E8, D_00398FC8);
    }
    return &D_00398FA8;
}
