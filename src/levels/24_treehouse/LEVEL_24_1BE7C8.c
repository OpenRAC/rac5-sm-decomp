extern int D_00362CC8;
extern char D_001F72B0[];
extern char D_00362CC0[];
extern void func_1BD7D0(void);
extern void func_1BEA08(void *state, const void *table, void *extra);

void *func_1BE7C8(void) {
    if (!D_00362CC8) {
        func_1BD7D0();
        func_1BEA08(&D_00362CC8, D_001F72B0, D_00362CC0);
    }
    return &D_00362CC8;
}
