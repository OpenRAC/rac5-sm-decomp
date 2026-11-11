extern int D_002D7408;
extern char D_001CB400[];
extern char D_002D7400[];
extern void func_18BBE0(void);
extern void func_18CE18(void *state, const void *table, void *extra);

void *func_18CBD8(void) {
    if (!D_002D7408) {
        func_18BBE0();
        func_18CE18(&D_002D7408, D_001CB400, D_002D7400);
    }
    return &D_002D7408;
}
