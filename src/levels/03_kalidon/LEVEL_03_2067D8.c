extern int D_003B4128;
extern char D_00246368[];
extern char D_003B4148[];
extern void func_2069B8(void);
extern void func_2063C0(void *state, const void *table, void *extra);

void *func_2067D8(void) {
    if (!D_003B4128) {
        func_2069B8();
        func_2063C0(&D_003B4128, D_00246368, D_003B4148);
    }
    return &D_003B4128;
}
