extern int D_00362CB0;
extern char D_001F7190[];
extern char D_00362CC0[];
extern void func_1BD7D0(void);
extern void func_1BEA08(void *state, const void *table, void *extra);

void *func_1BD738(void) {
    if (!D_00362CB0) {
        func_1BD7D0();
        func_1BEA08(&D_00362CB0, D_001F7190, D_00362CC0);
    }
    return &D_00362CB0;
}
