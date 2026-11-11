extern int D_002D7428;
extern char D_001CB4E8[];
extern char D_002D7448[];
extern void func_18D410(void);
extern void func_18CE18(void *state, const void *table, void *extra);

void *func_18D230(void) {
    if (!D_002D7428) {
        func_18D410();
        func_18CE18(&D_002D7428, D_001CB4E8, D_002D7448);
    }
    return &D_002D7428;
}
