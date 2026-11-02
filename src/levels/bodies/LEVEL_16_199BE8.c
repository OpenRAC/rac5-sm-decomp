extern int D_002E6268;
extern char D_001DA1D8[];
extern char D_002E6288[];
extern void func_199DC8(void);
extern void func_1997D0(void *state, const void *table, void *extra);

void *func_199BE8(void) {
    if (!D_002E6268) {
        func_199DC8();
        func_1997D0(&D_002E6268, D_001DA1D8, D_002E6288);
    }
    return &D_002E6268;
}
