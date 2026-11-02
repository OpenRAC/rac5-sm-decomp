extern int D_003B40F0;
extern char D_00246160[];
extern char D_003B4100[];
extern void func_205188(void);
extern void func_2063C0(void *state, const void *table, void *extra);

void *func_2050F0(void) {
    if (!D_003B40F0) {
        func_205188();
        func_2063C0(&D_003B40F0, D_00246160, D_003B4100);
    }
    return &D_003B40F0;
}
